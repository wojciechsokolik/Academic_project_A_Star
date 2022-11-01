/**
 * \file mapa.cpp
 * \brief Plik implementacji modułu \a mapa.
 *
 * Moduł \a mapa zawiera definicję klasy Mapa
 * oraz zestaw funkcji służących do zarządzania mapą pixeli.
 *
 * \see mapa.h
 */

#include "mapa.h"

/**
 * Konstruktor klasy Mapa inicjuje wszystkie atrybuty tej klasy, zapewniając wiadome wartości w poszczególnych
 * polach. Wskaźnik na mapę pixeli, wysokość mapy oraz szerokość są zerowane, a rozmiar pixela oraz przekątna są ustawione
 * na domyślną wartość odpowiednio: 10.0 i 14.14.
 */
Mapa::Mapa()
{
    rozmiar_pixela = 10.0;
    przekatna_pixela = 14.14;

    wysokosc_mapy = 0;
    szerokosc_mapy = 0;

    mapa = NULL;
}

/**
 * Destruktor mapy zapewnia zwolnienie zaalokowanej wcześniej pamięci na dwuwymiarową tablicę dynamiczną obiektów
 * klasy Pixel.
 */
Mapa::~Mapa()
{
    if ( mapa != NULL )
    {
        for ( int i = 0; i < wysokosc_mapy; i++ )
        {
            delete [] mapa [i];
        }

        delete [] mapa;

        mapa = NULL;
    }
}

/**
 * Funkcja ta najpierw sprawdza, czy plik o podanej nazwie istnieje i czy można go otworzyć.
 * Jeżeli tak, to otwiera ten plik i wczytuje do zmiennej buforowej 3 pierwsze linijki pliku.
 * Zawierają one podstawowe informacje na temat mapy. Następnie wczytuje z pliku informacje
 * dotyczące wymiarów mapy. Potem alokowana jest pamięć na dwuwymiarową tablicę dynamiczną
 * obiektów klasy Pixel. Następnie wywoływana jest podwójna pętla, która wczytuje z pliku
 * kolejno znak po znaku oraz wywołuje kolejne metody klasy Pixel. Ustawiana jest wartość
 * pixela, jego współrzędne, adres na mapie i dostęp oraz wczytywani są jego sąsiedzi.
 * Funkcja zwraca wartość bool określającą czy operacja wczytywania się powiodła.
 */
bool Mapa::WczytajMape (  string nazwa_pliku_do_wczytania_mapy )
{
    if ( !SprawdzPlik ( nazwa_pliku_do_wczytania_mapy ) )
    {
        return false;
    }

    else
    {
        ifstream odczyt;
        odczyt.open ( ( nazwa_pliku_do_wczytania_mapy ).c_str() );

        char znak;
        Pixel* tablica_sasiadow [8];
        string wiersz;

        for ( int i = 0; i < 3; i++ )
        {
            odczyt >> wiersz;
        }

        odczyt >> wysokosc_mapy;
        odczyt >> wiersz;
        odczyt >> szerokosc_mapy;
        odczyt >> wiersz;

        mapa = new Pixel *[wysokosc_mapy];

        for ( int i = 0; i < wysokosc_mapy; i++ )
        {
            mapa [i] = new Pixel [szerokosc_mapy];
        }

        for ( int i = 0; i < wysokosc_mapy; i++ )
        {
            for ( int j = 0; j < szerokosc_mapy; j++ )
            {
                odczyt >> znak;
                mapa [i][j].UstawWartoscPixela ( znak );
                mapa [i][j].UstawWspolrzednePixela ( i, j );
                mapa [i][j].UstawAdresPixela ( &mapa[i][j] );
                mapa [i][j].UstawDostep ();
                WczytajSasiadow ( i, j, tablica_sasiadow );
                mapa [i][j].UstawSasiadow ( tablica_sasiadow );
            }
        }

        odczyt.close();

        return true;
    }
}

/**
 * Procedura ta wypełnia tablicę sąsiadów wskaźnikami do pixeli sąsiadujących z danym pixelem
 * na mapie. Uwzględnia również wyjście poza obszar mapy.
 */
void Mapa::WczytajSasiadow ( int wiersz, int kolumna, Pixel* tablica_sasiadow [] )
{
    Pixel* sasiad = NULL;

    if ( !SprawdzWyjsciePozaObszarTablicy ( wiersz-1, kolumna-1 ) )
    {
        sasiad = &mapa[wiersz-1][kolumna-1];
        tablica_sasiadow[0] = sasiad;
    }

    else
    {
        tablica_sasiadow[0] = NULL;
    }

    if ( !SprawdzWyjsciePozaObszarTablicy ( wiersz-1, kolumna ) )
    {
        sasiad = &mapa[wiersz-1][kolumna];
        tablica_sasiadow[1] = sasiad;
    }

    else
    {
        tablica_sasiadow[1] = NULL;
    }

    if ( !SprawdzWyjsciePozaObszarTablicy ( wiersz-1, kolumna+1 ) )
    {
        sasiad = &mapa[wiersz-1][kolumna+1];
        tablica_sasiadow[2] = sasiad;
    }

    else
    {
        tablica_sasiadow[2] = NULL;
    }

    if ( !SprawdzWyjsciePozaObszarTablicy ( wiersz, kolumna-1 ) )
    {
        sasiad = &mapa[wiersz][kolumna-1];
        tablica_sasiadow[3] = sasiad;
    }

    else
    {
        tablica_sasiadow[3] = NULL;
    }

    if ( !SprawdzWyjsciePozaObszarTablicy ( wiersz, kolumna+1 ) )
    {
        sasiad = &mapa[wiersz][kolumna+1];
        tablica_sasiadow[4] = sasiad;
    }

    else
    {
        tablica_sasiadow[4] = NULL;
    }

    if ( !SprawdzWyjsciePozaObszarTablicy ( wiersz+1, kolumna-1 ) )
    {
        sasiad = &mapa[wiersz+1][kolumna-1];
        tablica_sasiadow[5] = sasiad;
    }

    else
    {
        tablica_sasiadow[5] = NULL;
    }

    if ( !SprawdzWyjsciePozaObszarTablicy ( wiersz+1, kolumna ) )
    {
        sasiad = &mapa[wiersz+1][kolumna];
        tablica_sasiadow[6] = sasiad;
    }

    else
    {
        tablica_sasiadow[6] = NULL;
    }

    if ( !SprawdzWyjsciePozaObszarTablicy ( wiersz+1, kolumna+1 ) )
    {
        sasiad = &mapa[wiersz+1][kolumna+1];
        tablica_sasiadow[7] = sasiad;
    }

    else
    {
        tablica_sasiadow[7] = NULL;
    }
}

bool Mapa::SprawdzPlik ( string nazwa_pliku )
{
    ifstream odczyt;
    odczyt.open ( ( nazwa_pliku ).c_str () );

    if ( !odczyt.is_open () )
    {
        return false;
    }

    else
    {
        odczyt.close ();
        return true;
    }
}

bool Mapa::SprawdzWyjsciePozaObszarTablicy ( int indeks_wiersza, int indeks_kolumny )
{
    if ( indeks_wiersza < 0 || indeks_kolumny < 0 || indeks_wiersza >= wysokosc_mapy || indeks_kolumny >= szerokosc_mapy)
    {
        return true;
    }

    else
    {
        return false;
    }
}


Pixel** Mapa::PobierzWskaznikNaMape () const
{
    if ( this != NULL )
    {
        return mapa;
    }

    else
    {
        return NULL;
    }
}

int Mapa::PobierzWysokoscMapy () const
{
    if ( this != NULL )
    {
        return wysokosc_mapy;
    }

    else
    {
        return 0;
    }
}

int Mapa::PobierzSzerokoscMapy() const
{
    if ( this != NULL )
    {
        return szerokosc_mapy;
    }

    else
    {
        return 0;
    }
}

double Mapa::PobierzRozmiarPixela () const
{
    if ( this != NULL )
    {
        return rozmiar_pixela;
    }

    else
    {
        return 0.0;
    }
}

double Mapa::PobierzPrzekatnaPixela () const
{
    if ( this != NULL )
    {
        return przekatna_pixela;
    }

    else
    {
        return 0.0;
    }

}

