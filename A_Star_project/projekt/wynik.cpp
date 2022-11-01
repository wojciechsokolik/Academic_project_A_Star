/**
 * \file wynik.cpp
 * \brief Plik implementacji modułu \a wynik.
 *
 * Moduł \a wynik zawiera funkcje niezbędne
 * do wyświetlenia najkrotszej sciezki w konsoli oraz zapisania najkrótszej ścieżki do pliku tekstowego.
 *
 * \see wynik.h
 */

#include "wynik.h"

/**
 * Procedura pobierajaca z obiektu \a mapa wszystkie dane niezbedne do wygenerowania najkrotszej sciezki do zapisu.
 * Dane pobierane są za pomocą metod klasy Mapa i zapisywane w zmiennych.
 * Zmienne przekazują pobrane wartości za pomocą referencji do funkcji wywołującej.
 */
void PobierzDaneZMapy ( Mapa* const &mapa, ListaPixeli* const &najkrotsza_sciezka, Pixel** &wskaznik_na_mape,
                        int &liczba_elementow_listy, int &wysokosc_mapy, int &szerokosc_mapy )
{
    wskaznik_na_mape = mapa->PobierzWskaznikNaMape();
    liczba_elementow_listy = najkrotsza_sciezka->PobierzLiczbeElementowListy();
    wysokosc_mapy = mapa->PobierzWysokoscMapy();
    szerokosc_mapy = mapa->PobierzSzerokoscMapy();
}

/**
 * Funkcja sprawdza, czy dany pixel z mapy znajduje się w tablicy wskaźników, tzn, czy należy do pixeli,
 * z których składa się najkrótsza ścieżka. Zwraca wartość bool.
 */
bool SprawdzPixel ( Pixel** tablica_wskaznikow, int liczba_elementow_listy, Pixel* pixel_z_mapy )
{
    bool flaga = false;

    for ( int i = 0; i < liczba_elementow_listy; i++ )
    {
        if ( tablica_wskaznikow [i] == pixel_z_mapy )
        {
            flaga = true;
        }
    }

    return flaga;
}

void UtworzTablice( bool** &tablica, int wysokosc_mapy, int szerokosc_mapy )
{
    tablica = new bool *[wysokosc_mapy];

    for ( int i = 0; i < wysokosc_mapy; i++)
    {
        tablica [i] = new bool [szerokosc_mapy];
    }

    ZerujTablice( tablica, wysokosc_mapy, szerokosc_mapy );
}

void ZerujTablice ( bool** &tablica, int wysokosc_mapy, int szerokosc_mapy )
{
    for ( int i = 0; i < wysokosc_mapy; i++ )
    {
        for ( int j = 0; j < szerokosc_mapy; j++ )
        {
            tablica [i][j] = false;
        }
    }
}

void UsunTablice ( bool** &tablica, int wysokosc_mapy )
{
    if ( tablica != NULL )
    {
        for ( int i = 0; i < wysokosc_mapy; i++ )
        {
            delete [] tablica [i];
        }

        delete [] tablica;
        tablica = NULL;
    }

}

void WypelnijTabliceWskaznikow ( Pixel** tablica_wskaznikow, ListaPixeli* const &najkrotsza_sciezka,
                                 int liczba_elementow_listy )
{
    Pixel* pixel_pomocniczy = NULL;

    for ( int i = 0; i < liczba_elementow_listy; i++ )
    {
        pixel_pomocniczy = najkrotsza_sciezka->ZnajdzElement( i );
        tablica_wskaznikow [i] = pixel_pomocniczy->PobierzAdresPixelaOryginalnegoZMapy();
    }
}

/**
 * Procedura generuje dwuwymiarowę tablicę dynamiczną wartości logicznych
 * (tablica_punktow_nalezacych_do_sciezki) reprezentującą przynależność pixela do ścieżki.
 * Najpierw wypełniana jest tablica wskaźników do pixeli tworzących ścieżkę, a następnie
 * w pętli sprawdzany jest każdy pixel na mapie za pomocą funkcji SprawdzPixel.
 * Na tej podstawie wypełniana jest tablica_punktow_nalezacych_do_sciezki.
 */
void GenerujSciezkeDoZapisu( Pixel** const &wskaznik_na_mape, ListaPixeli* const &najkrotsza_sciezka,
                             bool** tablica_punktow_nalezacych_do_sciezki, int liczba_elementow_listy,
                             int wysokosc_mapy, int szerokosc_mapy )
{
    Pixel** tablica_wskaznikow = new Pixel* [liczba_elementow_listy];

    WypelnijTabliceWskaznikow( tablica_wskaznikow, najkrotsza_sciezka, liczba_elementow_listy );

    for ( int i = 0; i < wysokosc_mapy; i++ )
    {
        for ( int j = 0; j < szerokosc_mapy; j++ )
        {
            if ( SprawdzPixel( tablica_wskaznikow, liczba_elementow_listy, &wskaznik_na_mape[i][j] ) )
            {
                tablica_punktow_nalezacych_do_sciezki[i][j] = true;
            }

            else
            {
                tablica_punktow_nalezacych_do_sciezki[i][j] = false;
            }
        }
    }
}

/**
 * Procedura pobiera dane z mapy, następnie generuje ścieżkę do zapisu poprzez wypełnienie tablicy
 * "tablica_punktow_nalezacych_do_sciezki" przy pomocy podfunkcji. Następnie w pętli sprawdzany jest każdy pixel
 * mapy poprzez sprawdzenie wartości komórki tablicy i wypisywany w konsoli.
 * Pixele należące do ścieżki są oznaczone znakiem 'x'.
 * Na koniec procedura zwalnia zaalokowaną na tablicę pamięć.
 */
void WyswietlSciezkeWKonsoli ( Mapa* const &mapa, ListaPixeli* const &najkrotsza_sciezka )
{
    Pixel** wskaznik_na_mape = NULL;
    int wysokosc_mapy;
    int szerokosc_mapy;
    int liczba_elementow_listy;

    PobierzDaneZMapy( mapa, najkrotsza_sciezka, wskaznik_na_mape, liczba_elementow_listy,
                      wysokosc_mapy, szerokosc_mapy );

    bool** tablica_punktow_nalezacych_do_sciezki = NULL;
    UtworzTablice( tablica_punktow_nalezacych_do_sciezki, wysokosc_mapy, szerokosc_mapy );

    GenerujSciezkeDoZapisu( wskaznik_na_mape, najkrotsza_sciezka, tablica_punktow_nalezacych_do_sciezki,
                            liczba_elementow_listy, wysokosc_mapy, szerokosc_mapy );

    for ( int i = 0; i < wysokosc_mapy; i++ )
    {
        for ( int j = 0; j < szerokosc_mapy; j++ )
        {
            if ( tablica_punktow_nalezacych_do_sciezki[i][j] )
            {
                cout << 'x';
            }

            else
            {
                cout << wskaznik_na_mape[i][j].PobierzWartoscPixela();
            }

        }

        cout << endl;
    }

    UsunTablice( tablica_punktow_nalezacych_do_sciezki, wysokosc_mapy );

}

/**
 * Procedura otwiera plik do zapisu, pobiera dane z mapy, następnie generuje ścieżkę do zapisu
 * poprzez wypełnienie tablicy "tablica_punktow_nalezacych_do_sciezki" przy pomocy podfunkcji.
 * Następnie w pętli sprawdzany jest każdy pixel mapy poprzez sprawdzenie wartości
 * komórki tablicy i zapisywany do pliku.
 * Pixele należące do ścieżki są oznaczone znakiem 'x'.
 * Na koniec procedura zwalnia zaalokowaną na tablicę pamięć.
 */
void ZapiszSciezkeDoPliku ( Mapa* const &mapa, ListaPixeli* const &najkrotsza_sciezka )
{
    ofstream plik;
    plik.open( "sciezka.txt" );

    Pixel** wskaznik_na_mape = NULL;
    int wysokosc_mapy;
    int szerokosc_mapy;
    int liczba_elementow_listy;

    PobierzDaneZMapy( mapa, najkrotsza_sciezka, wskaznik_na_mape, liczba_elementow_listy, wysokosc_mapy, szerokosc_mapy );

    bool** tablica_punktow_nalezacych_do_sciezki = NULL;
    UtworzTablice( tablica_punktow_nalezacych_do_sciezki, wysokosc_mapy, szerokosc_mapy );

    GenerujSciezkeDoZapisu( wskaznik_na_mape, najkrotsza_sciezka, tablica_punktow_nalezacych_do_sciezki,
                            liczba_elementow_listy, wysokosc_mapy, szerokosc_mapy );

    for ( int i = 0; i < wysokosc_mapy; i++ )
    {
        for ( int j = 0; j < szerokosc_mapy; j++ )
        {
            if ( tablica_punktow_nalezacych_do_sciezki[i][j] )
            {
                plik << 'x';
            }

            else
            {
                plik << wskaznik_na_mape[i][j].PobierzWartoscPixela();
            }

        }
        plik << endl;
    }

    plik.close();

    UsunTablice( tablica_punktow_nalezacych_do_sciezki, wysokosc_mapy );
}

void PrzygotujSciezke ( Mapa* const &mapa, ListaPixeli* const &najkrotsza_sciezka , string &sciezka )
{
    Pixel** wskaznik_na_mape = NULL;
    int wysokosc_mapy;
    int szerokosc_mapy;
    int liczba_elementow_listy;

    PobierzDaneZMapy( mapa, najkrotsza_sciezka, wskaznik_na_mape, liczba_elementow_listy,
                      wysokosc_mapy, szerokosc_mapy );

    bool** tablica_punktow_nalezacych_do_sciezki = NULL;
    UtworzTablice( tablica_punktow_nalezacych_do_sciezki, wysokosc_mapy, szerokosc_mapy );

    GenerujSciezkeDoZapisu( wskaznik_na_mape, najkrotsza_sciezka, tablica_punktow_nalezacych_do_sciezki,
                            liczba_elementow_listy, wysokosc_mapy, szerokosc_mapy );

    for ( int i = 0; i < wysokosc_mapy; i++ )
    {
        for ( int j = 0; j < szerokosc_mapy; j++ )
        {
            if ( tablica_punktow_nalezacych_do_sciezki[i][j] )
            {
                sciezka += "x";
            }

            else
            {
                sciezka += wskaznik_na_mape[i][j].PobierzWartoscPixela();
            }

        }

        sciezka += '\n';
    }

    UsunTablice( tablica_punktow_nalezacych_do_sciezki, wysokosc_mapy );
}


void PrzygotujMape( Mapa * const &mapa, string &str_mapa )
{
    Pixel** wskaznik_na_mape = NULL;
    int wysokosc_mapy;
    int szerokosc_mapy;

    PobierzDaneZMapy( mapa, wskaznik_na_mape, wysokosc_mapy, szerokosc_mapy );

    for ( int i = 0; i < wysokosc_mapy; i++ )
    {
        for ( int j = 0; j < szerokosc_mapy; j++ )
        {
            str_mapa += wskaznik_na_mape[i][j].PobierzWartoscPixela();
        }

        str_mapa += '\n';
    }
}


void PobierzDaneZMapy(Mapa * const &mapa, Pixel **&wskaznik_na_mape, int &wysokosc_mapy, int &szerokosc_mapy)
{
    wskaznik_na_mape = mapa->PobierzWskaznikNaMape();
    wysokosc_mapy = mapa->PobierzWysokoscMapy();
    szerokosc_mapy = mapa->PobierzSzerokoscMapy();
}


bool** PrzygotujSciezkeGraficznie( Mapa* const &mapa, ListaPixeli* const &najkrotsza_sciezka,
                                   bool** tablica_punktow_nalezacych_do_sciezki )
{
    Pixel** wskaznik_na_mape = NULL;
    int wysokosc_mapy;
    int szerokosc_mapy;
    int liczba_elementow_listy;

    PobierzDaneZMapy( mapa, najkrotsza_sciezka, wskaznik_na_mape, liczba_elementow_listy,
                      wysokosc_mapy, szerokosc_mapy );

    UtworzTablice( tablica_punktow_nalezacych_do_sciezki, wysokosc_mapy, szerokosc_mapy );

    GenerujSciezkeDoZapisu( wskaznik_na_mape, najkrotsza_sciezka, tablica_punktow_nalezacych_do_sciezki,
                            liczba_elementow_listy, wysokosc_mapy, szerokosc_mapy );

    return tablica_punktow_nalezacych_do_sciezki;
}
