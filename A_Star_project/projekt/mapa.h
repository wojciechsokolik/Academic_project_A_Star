/**
 * \file mapa.h
 * \brief Plik nagłówkowy modułu \a mapa.
 *
 * Moduł \a mapa zawiera definicję klasy Mapa
 * oraz zestaw funkcji służących do zarządzania mapą pixeli.
 *
 * \see mapa.cpp
 */

#ifndef MAPA_H
#define MAPA_H

#include "listapixeli.h"


/** \brief Klasa reprezentująca mapę pixeli.
 *
 * Klasa reprezentuje mapę w postaci dwuwymiarowej tablicy dynamicznej obiektów klasy Pixel.
 */
class Mapa
{
public:
    /// Konstruktor klasy
    Mapa ();
    /// Destruktor klasy
    ~Mapa ();

    /**
     * \brief Funkcja wczytująca mapę.
     * \param nazwa_pliku_do_wczytania_mapy nazwa pliku tekstowego, z którego wczytywana jest mapa
     * \return wartość logiczna bool
     * \see SprawdzPlik ( string nazwa_pliku )
     */
    bool WczytajMape ( string nazwa_pliku_do_wczytania_mapy );

    /**
     * \brief Procedura zapisująca do tablicy statycznej wskaźniki do pixeli sąsiadujących z danym.
     * \param wiersz wartość indeksu wiersza, w którym znajduje się dany pixel
     * \param kolumna wartość indeksu kolumny, w której znajduje się dany pixel
     * \see SprawdzWyjsciePozaObszarTablicy ( int indeks_wiersza, int indeks_kolumny )
     */
    void WczytajSasiadow ( int wiersz, int kolumna, Pixel* tablica_sasiadow [] );

    /**
     * \brief Funkcja pobierająca wskaźnik na dwuwymiarową tablicę dynamiczną pixeli.
     * \return wskaźnik na tablicę dwuwymiarową obiektów klasy Pixel
     */
    Pixel** PobierzWskaznikNaMape () const;

    /**
     * \brief Funkcja pobierająca wartość wysokości mapy.
     * \return wartość typu int
     */
    int PobierzWysokoscMapy () const;

    /**
     * \brief Funkcja pobierająca wartość szerokości mapy.
     * \return wartość typu int
     */
    int PobierzSzerokoscMapy () const;

    /**
     * \brief Funkcja pobierająca wartość rozmiaru pixela.
     * \return wartość typu double
     */
    double PobierzRozmiarPixela () const;

    /**
     * \brief Funkcja pobierająca wartość przekątnej pixela.
     * \return wartość typu double
     */
    double PobierzPrzekatnaPixela () const;

private:

    /// Wskaźnik na dwuwymiarową tablicę obiektów klasy Pixel
    Pixel** mapa;

    /// Wartość wysokości mapy
    int wysokosc_mapy;
    /// Wartość szerokości mapy
    int szerokosc_mapy;

    /// Wartość rozmiaru pixela
    double rozmiar_pixela;
    /// Wartość przekątnej pixela
    double przekatna_pixela;

    /**
     * \brief Funkcja sprawdzająca, czy plik o podanej nazwie istnieje.
     * \param nazwa_pliku nazwa pliku do wczytania mapy
     * \return wartość logiczna typu bool
     */
    bool SprawdzPlik ( string nazwa_pliku );

    /**
     * \brief Funkcja sprawdzająca, czy indeksy pixela przyjmowane w parametrach wychodzą poza obszar mapy.
     * \param indeks_wiersza wartośc indeksu wiersza, w którym znajduje się dany pixel
     * \param indeks_kolumny wartośc indeksu kolumny, w którym znajduje się dany pixel
     * \return wartość logiczna typu bool
     */
    bool SprawdzWyjsciePozaObszarTablicy ( int indeks_wiersza, int indeks_kolumny );

};

#endif // MAPA_H
