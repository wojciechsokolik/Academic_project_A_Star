/**
 * \file listapixeli.cpp
 * \brief Plik implementacji modułu \a listapixeli.
 *
 * Moduł \a listapixeli zawiera deklarację klasy ListaPixeli
 * oraz zestaw funkcji służących do zarządzania listą pixeli.
 *
 * \see listapixeli.h
 */

#include "listapixeli.h"

using namespace std;

/**
 * Konstruktor klasy ListaPixeli inicjuje wszystkie atrybuty tej klasy, zapewniając wiadome wartości w poszczególnych
 * polach. Wskaźnik na pierwszy element oraz liczba elementów są zerowane, a rozmiar pixela oraz przekątna są ustawione
 * na domyślną wartość odpowiednio: 10.0 i 14.14.
 */
ListaPixeli::ListaPixeli()
{
    pierwszy = NULL;

    rozmiar_pixela = 10.0;
    przekatna_pixela = 14.14;

    liczba_elementow = 0;
}

ListaPixeli::~ListaPixeli()
{
    UsunListe();
}

/**
 * Procedura dodaje nowy element na końcu listy.
 */
void ListaPixeli::DodajNowyElement ( Pixel* &nowy_pixel )
{
    if ( pierwszy == NULL )
    {
        pierwszy = new Pixel;
        *pierwszy = *nowy_pixel;
        pierwszy->nastepny = NULL;
        nowy_pixel->UstawWskaznikNaPixelZListy( pierwszy );
    }

    else
    {
        Pixel* pixel_ostatni = ZnajdzOstatniElement ();

        Pixel* pixel_aktualny = new Pixel;
        *pixel_aktualny = *nowy_pixel;
        pixel_ostatni->nastepny = pixel_aktualny;
        pixel_aktualny->nastepny = NULL;
        nowy_pixel->UstawWskaznikNaPixelZListy( pixel_aktualny );
    }

    liczba_elementow++;
}

/**
 * Procedura dodaje nowy element listy i wstawia go w takie miejsce,
 * żeby lista cały czas była posortowana względem wartości F (atrybut pixeli).
 */
void ListaPixeli::DodajNowyElementZSortowaniem ( Pixel* &nowy_pixel )
{
    if ( pierwszy == NULL )
    {
        pierwszy = new Pixel;
        *pierwszy = *nowy_pixel;
        pierwszy->nastepny = NULL;
        nowy_pixel->UstawWskaznikNaPixelZListy( pierwszy );
    }

    else
    {
        Pixel* pixel_pomocniczy = pierwszy;
        Pixel* pixel_aktualny = NULL;

        if ( nowy_pixel->PobierzOdlegloscF() < pixel_pomocniczy->PobierzOdlegloscF() )
        {
            pixel_aktualny = new Pixel;
            *pixel_aktualny = *nowy_pixel;
            pixel_aktualny->nastepny = pierwszy;
            pierwszy = pixel_aktualny;
            nowy_pixel->UstawWskaznikNaPixelZListy( pixel_aktualny );
        }

        else
        {
            Pixel* pixel_ostatni = ZnajdzOstatniElement ();

            if ( nowy_pixel->PobierzOdlegloscF() > pixel_ostatni->PobierzOdlegloscF() )
            {
                pixel_aktualny = new Pixel;
                *pixel_aktualny = *nowy_pixel;
                pixel_ostatni->nastepny = pixel_aktualny;
                pixel_aktualny->nastepny = NULL;
                nowy_pixel->UstawWskaznikNaPixelZListy( pixel_aktualny );
            }

            else
            {
                pixel_pomocniczy = pierwszy;
                Pixel* pixel_pomocniczy_poprzedni = pierwszy;

                while ( ( nowy_pixel->PobierzOdlegloscF() > pixel_pomocniczy->PobierzOdlegloscF() ) &&
                        ( nowy_pixel->PobierzOdlegloscF() < pixel_pomocniczy->nastepny->PobierzOdlegloscF() ) )
                {
                    pixel_pomocniczy_poprzedni = pixel_pomocniczy;
                    pixel_pomocniczy = pixel_pomocniczy->nastepny;
                }

                pixel_aktualny = new Pixel;
                *pixel_aktualny = *nowy_pixel;
                pixel_aktualny->nastepny = pixel_pomocniczy_poprzedni->nastepny;
                pixel_pomocniczy_poprzedni->nastepny = pixel_aktualny;
                nowy_pixel->UstawWskaznikNaPixelZListy( pixel_aktualny );
            }

        }
    }

    liczba_elementow++;
}

int ListaPixeli::PobierzLiczbeElementowListy () const
{
    if ( this != NULL )
    {
       return liczba_elementow;
    }

    else
    {
        return 0;
    }

}

bool ListaPixeli::SprawdzPustoscListy ()
{
    if ( this == NULL )
    {
        return true;
    }

    else if ( pierwszy == NULL )
    {
        return true;
    }

    else
    {
        return false;
    }

}

Pixel* ListaPixeli::ZnajdzElement ( int indeks_elementu ) const
{
    if ( this != NULL )
    {
        Pixel* pixel_pomocniczy = pierwszy;
    
        for ( int i = 0; i < indeks_elementu; i++ )
        {
            pixel_pomocniczy = pixel_pomocniczy->nastepny;
        }
    
        return pixel_pomocniczy;
    }
    
    else
    {
        return NULL;
    }
    
}

Pixel* ListaPixeli::ZnajdzNajlepszyPixel () const
{
    if ( this != NULL )
    {
        if ( pierwszy != NULL )
        {
            Pixel* pixel_pomocniczy = pierwszy;
            Pixel* pixel_najlepszy = pixel_pomocniczy;
            double odleglosc_najmniejsza = pixel_pomocniczy->PobierzOdlegloscF();
    
            while ( pixel_pomocniczy != NULL )
            {
                if ( pixel_pomocniczy->PobierzOdlegloscF() < odleglosc_najmniejsza )
                {
                    odleglosc_najmniejsza = pixel_pomocniczy->PobierzOdlegloscF();
                    pixel_najlepszy = pixel_pomocniczy;
                }
    
                pixel_pomocniczy = pixel_pomocniczy->nastepny;
    
            }
    
            pixel_najlepszy = pixel_najlepszy->PobierzAdresPixelaOryginalnegoZMapy();
    
            return pixel_najlepszy;
        }
    }
    
    
    else
    {
        return NULL;
    }

    return NULL;
}


void ListaPixeli::UsunElement ( Pixel* pixel_usuwany )
{
    if ( this != NULL )
    {
        if ( pierwszy != NULL )
        {
            Pixel* pixel_do_usuniecia = NULL;
            Pixel* pixel_przed_usuwanym = NULL;
            Pixel* pixel_za_usuwanym = NULL;

            Pixel* pixel_oryginalny_z_mapy = pixel_usuwany->PobierzAdresPixelaOryginalnegoZMapy();

            if ( pierwszy->PobierzAdresPixelaOryginalnegoZMapy() == pixel_oryginalny_z_mapy )
            {
                pixel_za_usuwanym = pierwszy->nastepny;
                delete pierwszy;
                pierwszy = pixel_za_usuwanym;
                liczba_elementow--;
            }

            else
            {
                ZnajdzPixeleSasiadujaceZUsuwanym( pixel_usuwany, pixel_przed_usuwanym, pixel_do_usuniecia,
                                                  pixel_za_usuwanym );
                pixel_przed_usuwanym->nastepny = pixel_za_usuwanym;
                delete pixel_do_usuniecia;
                liczba_elementow--;
            }
        }
    }
    
}

void ListaPixeli::UsunListe ()
{
    if ( this != NULL )
    {
        if ( pierwszy != NULL )
        {
            Pixel* pixel_pomocniczy = pierwszy;

            while ( pierwszy != NULL )
            {
                pixel_pomocniczy = pierwszy;
                pierwszy = pierwszy->nastepny;
                pixel_pomocniczy->UstawAdresPixela( NULL );
                delete pixel_pomocniczy;
            }
        }

        pierwszy = NULL;
        liczba_elementow = 0;
    }

}

Pixel* ListaPixeli::ZnajdzOstatniElement ()
{
    if ( this != NULL )
    {
        Pixel* pixel_ostatni = pierwszy;

        while ( pixel_ostatni->nastepny != NULL )
        {
            pixel_ostatni = pixel_ostatni->nastepny;
        }

        return pixel_ostatni;
    }

    else
    {
        return NULL;
    }

}

/**
 * Procedura ta jest wywoływana przez procedurę UsunElement. Zadaniem tej procedury jest znalezienie wskaźników
 * na elementy listy bezpośrednio sąsiadujące w liście ze sobą. Znajdowany jest pixel przed tym, który ma być usunięty,
 * oraz ten za nim. Wskaźnik pixel_usuwany to wskaźnik na pixel oryginalny zapisany w mapie, on ma być usunięty.
 * Zatem procedura znajduje wskaźnik na pixel na liście, który jest odpowiednikiem tego oryginalnego. Wskaźnik ten
 * przekazywany jest przez referencje (pixel_do_usuniecia).
 */
void ListaPixeli::ZnajdzPixeleSasiadujaceZUsuwanym ( Pixel* pixel_usuwany, Pixel* &pixel_przed_usuwanym,
                                                     Pixel* &pixel_do_usuniecia, Pixel* &pixel_za_usuwanym )
{
    Pixel* pixel_oryginalny_z_mapy = pixel_usuwany->PobierzAdresPixelaOryginalnegoZMapy();
    Pixel* pixel_pomocniczy = pierwszy;

    pixel_przed_usuwanym = pierwszy;
    pixel_za_usuwanym = pierwszy->nastepny;

    while ( pixel_pomocniczy->PobierzAdresPixelaOryginalnegoZMapy() != pixel_oryginalny_z_mapy )
    {
        pixel_przed_usuwanym = pixel_pomocniczy;
        pixel_pomocniczy = pixel_pomocniczy->nastepny;
    }

    pixel_do_usuniecia = pixel_pomocniczy;
    pixel_za_usuwanym = pixel_pomocniczy->nastepny;
}


