/**
 * \file pixel.cpp
 * \brief Plik implementacji modułu \a pixel.
 *
 * Moduł \a pixel zawiera definicję klasy Pixel
 * oraz zestaw funkcji służących do obsługi pixeli.
 *
 * \see pixel.h
 */

#include "pixel.h"

/**
 * Konstruktor klasy Pixel inicjuje wszystkie atrybuty tej klasy, zapewniając wiadome wartości w poszczególnych
 * polach. Wszystkie wskaźniki oraz wartości liczbowe są zerowane, a wartość pixela domyślnie ustawiona jest na
 * znak '@' (domyślnie jest on niedostępny).
 */
Pixel::Pixel()
{
    pixel = '@';

    nastepny = NULL;
    adres_pixela_na_mapie = NULL;
    wskaznik_na_rodzica = NULL;

    wskaznik_na_pixel_z_listy = NULL;

    dostep = false;
    obecnosc_na_liscie_zamknietych = false;
    obecnosc_na_liscie_otwartych = false;

    wartosc_G = 0.0;
    wartosc_H = 0.0;
    wartosc_F = 0.0;

    wspolrzedna_i = 0;
    wspolrzedna_j = 0;

    for ( int i = 0; i < 8; i++ )
    {
        tablica_sasiadow [i] = NULL;
    }
}

Pixel::~Pixel()
{
}

void Pixel::UstawWartoscPixela ( char wartosc )
{
    if ( this != NULL )
    {
        if ( wartosc == '@' || wartosc == '.' )
        {
            pixel = wartosc;
        }

        else
        {
            pixel = '@';
        }
    }

}


void Pixel::UstawAdresPixela ( Pixel* adres )
{
    if ( this != NULL )
    {
        adres_pixela_na_mapie = adres;
    }
}

void Pixel::UstawWskaznikRodzica ( Pixel* const &adres )
{
    if ( this != NULL )
    {
        wskaznik_na_rodzica = adres;
    }
}

void Pixel::UstawWskaznikNaPixelZListy ( Pixel* const &pixel )
{
    if ( this != NULL )
    {
        wskaznik_na_pixel_z_listy = pixel;
    }
}

void Pixel::UstawWspolrzednePixela ( int wiersz, int kolumna )
{
    if ( this != NULL )
    {
        wspolrzedna_i = wiersz;
        wspolrzedna_j = kolumna;
    }
}

void Pixel::UstawSasiadow ( Pixel* tablica [] )
{
    if ( this != NULL )
    {
        for ( int i = 0; i < 8; i++ )
        {
            tablica_sasiadow [i] = tablica [i];
        }
    }
}

void Pixel::UstawDostep ()
{
    if ( this != NULL )
    {
        if ( pixel == '@' )
        {
            dostep = false;
        }

        else if ( pixel == '.' )
        {
            dostep = true;
        }

        else
        {
            dostep = false;
        }
    }
}

void Pixel::UstawObecnoscNaLiscieZamknietych ()
{
    if ( this != NULL )
    {
        obecnosc_na_liscie_zamknietych = true;
    }
}

void Pixel::UstawNieobecnoscNaLiscieZamknietych ()
{
    if ( this != NULL )
    {
        obecnosc_na_liscie_zamknietych = false;
    }
}

void Pixel::UstawObecnoscNaLiscieOtwartych ()
{
    if ( this != NULL )
    {
        obecnosc_na_liscie_otwartych = true;
    }
}

void Pixel::UstawNieobecnoscNaLiscieOtwartych ()
{
    if ( this != NULL )
    {
        obecnosc_na_liscie_otwartych = false;
    }
}

void Pixel::UstawOdlegloscG ( double odleglosc_G )
{
    if ( this != NULL )
    {
        wartosc_G = odleglosc_G;
    }
}

void Pixel::UstawOdlegloscH ( double odleglosc_H )
{
    if ( this != NULL )
    {
        wartosc_H = odleglosc_H;
    }
}

void Pixel::UstawOdlegloscF ()
{
    if ( this != NULL )
    {
        wartosc_F = wartosc_G + wartosc_H;
    }
}

void Pixel::UstawOdlegloscF ( double odleglosc )
{
    if ( this != NULL )
    {
        wartosc_F = odleglosc;
    }

}

char Pixel::PobierzWartoscPixela () const
{
    if ( this == NULL )
    {
        return '@';
    }

    else
    {
        return pixel;
    }
}

Pixel* Pixel::PobierzAdresPixelaOryginalnegoZMapy () const
{
    if ( this != NULL )
    {
        return adres_pixela_na_mapie;
    }

    else
    {
        return NULL;
    }

}

Pixel* Pixel::PobierzWskaznikRodzica () const
{
    if ( this != NULL )
    {
        return wskaznik_na_rodzica;
    }

    else
    {
        return NULL;
    }

}

Pixel* Pixel::PobierzWskaznikNaPixelZListy () const
{
    if ( this != NULL )
    {
        return wskaznik_na_pixel_z_listy;
    }

    else
    {
        return NULL;
    }

}

Pixel* Pixel::PobierzAdresSasiada ( int indeks_sasiada ) const
{
    if ( this != NULL )
    {
        return tablica_sasiadow[indeks_sasiada];
    }

    else
    {
        return NULL;
    }
}

int Pixel::PobierzWspolrzednaIPixela () const
{
    if ( this != NULL )
    {
        return wspolrzedna_i;
    }

    else
    {
        return 0;
    }
}

int Pixel::PobierzWspolrzednaJPixela () const
{
    if ( this != NULL )
    {
        return wspolrzedna_j;
    }

    else
    {
        return 0;
    }

}

bool Pixel::PobierzDostep () const
{
    if ( this == NULL )
    {
        return false;
    }

    else
    {
        if ( dostep == true )
        {
            return true;
        }

        else
        {
            return false;
        }
    }
}

bool Pixel::PobierzObecnoscNaLiscieZamknietych () const
{
    if ( this != NULL )
    {
        return obecnosc_na_liscie_zamknietych;
    }

    else
    {
        return false;
    }

}

bool Pixel::PobierzObecnoscNaLiscieOtwartych () const
{
    if ( this != NULL )
    {
        return obecnosc_na_liscie_otwartych;
    }

    else
    {
        return false;
    }

}

double Pixel::PobierzOdlegloscG () const
{
    if ( this != NULL )
    {
        return wartosc_G;
    }

    else
    {
        return 0.0;
    }

}

double Pixel::PobierzOdlegloscH () const
{
    if ( this != NULL )
    {
        return wartosc_H;
    }

    else
    {
        return 0.0;
    }

}

double Pixel::PobierzOdlegloscF () const
{
    if ( this != NULL )
    {
        return wartosc_F;
    }

    else
    {
        return 0.0;
    }

}

void Pixel::ResetujDane()
{
    wskaznik_na_rodzica = NULL;

    wartosc_G = 0.0;
    wartosc_H = 0.0;
    wartosc_F = 0.0;

    UstawNieobecnoscNaLiscieZamknietych();
    UstawNieobecnoscNaLiscieOtwartych();
}



