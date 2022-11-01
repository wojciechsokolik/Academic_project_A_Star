/**
 * \file algorytm_a_gwiazdka.cpp
 * \brief Plik implementacji modułu \a algorytm_a_gwiazdka.
 *
 * Moduł \a algorytm_a_gwiazdka zawiera funkcje niezbędne
 * do wyznaczenia najkrotszej sciezki za pomoca algorytmu A*.
 *
 * \see algorytm_a_gwiazdka.h
 */

#include "algorytm_a_gwiazdka.h"


/**
 * Procedura pobierajaca z obiektu \a mapa wszystkie dane niezbedne do wyznaczenia najkrotszej sciezki.
 * Dane pobierane są za pomocą metod klasy \a mapa i zapisywane w zmiennych.
 * Zmienne przekazują pobrane wartości za pomocą referencji do funkcji wywołującej.
 */
void PobierzWszystkieDaneZMapy ( Mapa* const &mapa, Pixel** &wskaznik_na_mape, int &wysokosc_mapy,
                                 int &szerokosc_mapy, double &rozmiar_pixela, double &przekatna_pixela )
{
    wskaznik_na_mape = mapa->PobierzWskaznikNaMape();
    wysokosc_mapy = mapa->PobierzWysokoscMapy();
    szerokosc_mapy = mapa->PobierzSzerokoscMapy();
    rozmiar_pixela = mapa->PobierzRozmiarPixela();
    przekatna_pixela = mapa->PobierzPrzekatnaPixela();
}

/**
 * Funkcja sprawdza, czy dane punkty pixel_start i pixel_meta są dostępne.
 * Sprawdza wszystkie możliwości.
 * Zwraca wartość int. Wartość 1 oznacza, że pixel startowy i końcowy są niedostępne.
 * Wartość 2 oznacza, że pixel startowy jest dostępny, ale pixel końcowy jest niedostępny.
 * Wartość 3 oznacza, że pixel startowy jest niedostępny, ale pixel końcowy jest dostępny.
 * Wartość 4 oznacza, że oba pixele są dostępne.
 */
int SprawdzPunkty ( Pixel* const &pixel_start, Pixel* const &pixel_meta )
{
    int flaga = 1;

    if ( !pixel_start->PobierzDostep() && !pixel_meta->PobierzDostep() )
    {
        flaga = 1;
        return flaga;
    }

    else if ( !pixel_start->PobierzDostep() && pixel_meta->PobierzDostep() )
    {
        flaga = 2;
        return flaga;
    }

    else if ( pixel_start->PobierzDostep() && !pixel_meta->PobierzDostep() )
    {
        flaga = 3;
        return flaga;
    }

    else if ( pixel_start->PobierzDostep() && pixel_meta->PobierzDostep() )
    {
        flaga = 4;
        return flaga;
    }

    return flaga;
}

/**
 * Funkcja oblicza wartość G, czyli długość dotychczasowo wyznaczonej ścieżki.
 * Długość ta wyznaczana jest poprzez dodanie odpowiedniej wartości
 * (rozmiar pixela lub przekątna pixela w zależności od indeksu pixela sąsiadującego)
 * do wartości G pixela Q.
 * Zwraca wartość double.
 */
double ObliczWartoscG ( Pixel* const &pixel_Q, int indeks_sasiada, double rozmiar_pixela, double przekatna_pixela )
{
    double odleglosc = 0.0;
    double odleglosc_G_pixela_Q = pixel_Q->PobierzOdlegloscG();

    if ( indeks_sasiada == 0 || indeks_sasiada == 2 || indeks_sasiada == 5 || indeks_sasiada == 7 )
    {
        odleglosc = odleglosc_G_pixela_Q + przekatna_pixela;
    }

    else if ( indeks_sasiada == 1 || indeks_sasiada == 3 || indeks_sasiada == 4 || indeks_sasiada == 6 )
    {
        odleglosc = odleglosc_G_pixela_Q + rozmiar_pixela;
    }

    return odleglosc;
}

/**
 * Funkcja oblicza wartość H, posługując się funkcją PoliczOdlegloscOdMety.
 * Zwraca wartość double.
 */
double ObliczWartoscH ( Pixel* const &pixel, Pixel* const &pixel_meta, double rozmiar_pixela )
{
    double odleglosc = 0.0;

    odleglosc = PoliczOdlegloscOdMety ( pixel, pixel_meta, rozmiar_pixela );

    return odleglosc;
}

/**
 * Funkcja oblicza wartość H, czyli heurystyczną odległość danego pixela od pixela mety.
 * Odległość ta jest wyznaczana za pomocą heurystyki euklidesowej.
 * Zwraca wartość double.
 */
double PoliczOdlegloscOdMety ( Pixel* const &pixel, Pixel* const &pixel_meta, double rozmiar_pixela )
{
    double odleglosc = 0.0;

    int wspolrzedna_i_pixela = pixel->PobierzWspolrzednaIPixela();
    int wspolrzedna_j_pixela = pixel->PobierzWspolrzednaJPixela();
    int wspolrzedna_i_mety = pixel_meta->PobierzWspolrzednaIPixela();
    int wspolrzedna_j_mety = pixel_meta->PobierzWspolrzednaJPixela();

    odleglosc = rozmiar_pixela * sqrt ( pow ( wspolrzedna_j_mety - wspolrzedna_j_pixela, 2 ) +
                                        pow ( wspolrzedna_i_mety - wspolrzedna_i_pixela, 2 ) );

    return odleglosc;
}

/**
 * Procedura generuje najkrótszą ścieżkę poprzez odzyskanie powiązań między sprawdzonymi pixelami.
 * Za pomocą wskaźników na elementy listy \a najkrotsza_sciezka, funkcja przechodzi od pixela końcowego
 * do pixela startowego po wskaźnikach na rodzica.
 * Zwraca najkrótszą ścieżkę za pomocą referencji.
 */
void GenerujNajkrotszaSciezke ( Pixel* &pixel_koncowy, ListaPixeli* &najkrotsza_sciezka, Pixel* &pixel_start )
{
    Pixel* pixel_pomocniczy = pixel_koncowy;

    while ( pixel_pomocniczy->PobierzWskaznikRodzica() != NULL )
    {
        najkrotsza_sciezka->DodajNowyElement( pixel_pomocniczy );
        pixel_pomocniczy = pixel_pomocniczy->PobierzWskaznikRodzica();
    }

    najkrotsza_sciezka->DodajNowyElement( pixel_start );
}

/**
 * Funkcja znajduje najkrótszą ścieżkę pomiędzy punktami startu i mety o współrzednych przyjmowanych jako argumenty.
 * Po zadeklarowaniu wszystkich potrzebnych zmiennych, funkcja pobiera niezbędne dane z mapy. Następnie definiuje
 * pixel startowy i pixel metę. Później sprawdza, czy dane punkty są dostępne. Jeżeli są, to pixelowi startowemu
 * przypisywane są wartości G, H i F. Potem pixel startowy jest dodawany do listy pól otwartych.
 * Następnie wywołana jest pętla, w której kolejno: znajdowany jest najlepszy pixel na liście pól otwartych
 * (tzn. taki, który ma najmniejszą wartość F), znaleziony pixel jest usuwany z listy pól otwartych i przeniesiony
 * do listy pól zamkniętych przez ustawienie wartości \a obecnosc_na_liscie_zamknietych. Później sprawdzany jest
 * każdy z 8 pixeli sąsiadujących z pixelem Q. Jeżeli pixel sąsiad jest niedostępny lub jest już na liście
 * pól zamkniętych, to sprawdzany jest następny sąsiad. Jeżeli natomiast sąsiad nie znajduje się jeszcze na liście
 * pól otwartych, to wyznaczane są jego wartości G, H, F, ustawiany jest wskaźnik rodzica i pixel ten jest wstawiany
 * do tej listy w odpowiednie miejsce (posortowane względem wartości F). Jeżeli sąsiad znajdował się już na tej liście,
 * to liczona jest jego nowa wartość G. Jeżeli jest ona mniejsza od tej dotychczasowej, to wartości G i F oraz wskaźnik
 * rodzica są uaktualniane. Pętla kończy się w momencie, gdy pixel końcowy został osiągnięty (zostałą wyznaczona
 * najkrótsza ścieżka), lub gdy lista pól otwartych jest już pusta - wtedy nie istnieje żadna ścieżka pomiędzy punktem
 * startowym a końcowym. Na koniec funkcja usuwa listę pól otwartych i resetuje dane w pixelach. Zwraca wartość int w
 * zależności jaka sytuacja wystąpiła.
 */
int ZnajdzNajkrotszaSciezke ( Mapa* const &mapa, ListaPixeli* &najkrotsza_sciezka,  int wspolrzedna_i_startu,
                              int wspolrzedna_j_startu, int wspolrzedna_i_mety, int wspolrzedna_j_mety )
{
    Pixel** wskaznik_na_mape;
    Pixel* pixel_start;
    Pixel* pixel_meta;

    int wysokosc_mapy;
    int szerokosc_mapy;
    double rozmiar_pixela;
    double przekatna_pixela;

    double odleglosc_G = 0.0;
    double odleglosc_G_pomocnicza = 0.0;
    double odleglosc_H = 0.0;

    ListaPixeli pola_otwarte;

    PobierzWszystkieDaneZMapy( mapa, wskaznik_na_mape, wysokosc_mapy, szerokosc_mapy, rozmiar_pixela, przekatna_pixela );

    if ( !najkrotsza_sciezka->SprawdzPustoscListy() )
    {
        najkrotsza_sciezka->UsunListe();
    }

    pixel_start = &wskaznik_na_mape [wspolrzedna_i_startu][wspolrzedna_j_startu];
    pixel_meta = &wskaznik_na_mape [wspolrzedna_i_mety][wspolrzedna_j_mety];

    if ( SprawdzPunkty( pixel_start, pixel_meta ) == 1 )
    {
        return 1;
    }

    else if ( SprawdzPunkty( pixel_start, pixel_meta ) == 2 )
    {
        return 2;
    }

    else if ( SprawdzPunkty( pixel_start, pixel_meta ) == 3 )
    {
        return 3;
    }

    else if ( SprawdzPunkty( pixel_start, pixel_meta ) == 4 )
    {
        najkrotsza_sciezka = new ListaPixeli;

        Pixel* pixel_Q = NULL;
        Pixel* pixel_sasiad_Q = NULL;
        Pixel* pixel_pomocniczy = NULL;
        Pixel* pixel_pomocniczy_2 = NULL;

        pixel_start->UstawOdlegloscG ( 0.0 );
        odleglosc_H = ObliczWartoscH ( pixel_start, pixel_meta, rozmiar_pixela );
        pixel_start->UstawOdlegloscH ( odleglosc_H );
        pixel_start->UstawOdlegloscF ();

        pola_otwarte.DodajNowyElement ( pixel_start );

        while ( !pola_otwarte.SprawdzPustoscListy () )
        {
            pixel_Q = pola_otwarte.ZnajdzNajlepszyPixel();

            pixel_Q->UstawObecnoscNaLiscieZamknietych();
            pola_otwarte.UsunElement( pixel_Q );

            pixel_Q->UstawNieobecnoscNaLiscieOtwartych();

            if ( pixel_Q == pixel_meta )
            {
                GenerujNajkrotszaSciezke( pixel_Q, najkrotsza_sciezka, pixel_start );

                CzyscDane( pola_otwarte );
                ResetujDaneWPixelach( wskaznik_na_mape, wysokosc_mapy, szerokosc_mapy );

                return 4;
            }

            for ( int i = 0; i < 8; i++ )
            {

                pixel_sasiad_Q = pixel_Q->PobierzAdresSasiada( i );

                if ( !pixel_sasiad_Q->PobierzDostep() || pixel_sasiad_Q->PobierzObecnoscNaLiscieZamknietych() )
                {

                }

                else if ( !pixel_sasiad_Q->PobierzObecnoscNaLiscieOtwartych() )
                {
                    odleglosc_G = ObliczWartoscG( pixel_Q, i, rozmiar_pixela, przekatna_pixela );
                    odleglosc_H = ObliczWartoscH( pixel_sasiad_Q, pixel_meta, rozmiar_pixela );

                    pixel_sasiad_Q->UstawOdlegloscG( odleglosc_G );
                    pixel_sasiad_Q->UstawOdlegloscH( odleglosc_H );
                    pixel_sasiad_Q->UstawOdlegloscF();

                    pixel_sasiad_Q->UstawWskaznikRodzica( pixel_Q );

                    pixel_sasiad_Q->UstawObecnoscNaLiscieOtwartych();

                    pola_otwarte.DodajNowyElementZSortowaniem( pixel_sasiad_Q );
                }

                else
                {
                    odleglosc_G = ObliczWartoscG( pixel_Q, i, rozmiar_pixela, przekatna_pixela );

                    odleglosc_G_pomocnicza = pixel_sasiad_Q->PobierzOdlegloscG();

                    if ( odleglosc_G < odleglosc_G_pomocnicza )
                    {
                        pixel_pomocniczy = pixel_sasiad_Q->PobierzWskaznikNaPixelZListy();
                        pixel_pomocniczy_2 = pixel_Q->PobierzWskaznikNaPixelZListy();

                        pixel_pomocniczy->UstawWskaznikRodzica( pixel_pomocniczy_2 );
                        pixel_pomocniczy->UstawOdlegloscG( odleglosc_G );
                        pixel_pomocniczy->UstawOdlegloscF();

                        pixel_sasiad_Q->UstawWskaznikRodzica( pixel_Q );

                        pixel_sasiad_Q->UstawOdlegloscG( odleglosc_G );
                        pixel_sasiad_Q->UstawOdlegloscF();
                    }
                }
            }
        }

        CzyscDane( pola_otwarte );
        ResetujDaneWPixelach( wskaznik_na_mape, wysokosc_mapy, szerokosc_mapy );

        return 5;
    }

    return 0;
}

/**
 * Funkcja usuwa listę pól otwartych.
 */
void CzyscDane ( ListaPixeli &pola_otwarte )
{
    pola_otwarte.UsunListe();
}

/**
 * Funkcja resetuje dane w pixeli (w celu umożliwienia ponownego wyznaczenia innej ścieżki).
 */
void ResetujDaneWPixelach ( Pixel** &wskaznik_na_mape,  int wysokosc_mapy, int szerokosc_mapy )
{
    for ( int i = 0; i < wysokosc_mapy; i++ )
    {
        for ( int j = 0; j < szerokosc_mapy; j++ )
        {
            wskaznik_na_mape[i][j].ResetujDane();
        }
    }
}

bool SprawdzWyjsciePozaObszarTablicy ( Mapa* &mapa, int indeks_wiersza, int indeks_kolumny )
{
    int wysokosc_mapy = mapa->PobierzWysokoscMapy();
    int szerokosc_mapy = mapa->PobierzSzerokoscMapy();

    if ( indeks_wiersza < 0 || indeks_kolumny < 0 || indeks_wiersza >= wysokosc_mapy || indeks_kolumny >= szerokosc_mapy)
    {
        return true;
    }

    else
    {
        return false;
    }
}
