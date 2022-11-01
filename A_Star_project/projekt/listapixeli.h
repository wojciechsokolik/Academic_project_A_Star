/**
 * \file listapixeli.h
 * \brief Plik nagłówkowy modułu \a listapixeli.
 *
 * Moduł \a listapixeli zawiera deklarację klasy ListaPixeli
 * oraz zestaw funkcji służących do zarządzania listą pixeli.
 *
 * \see listapixeli.cpp
 */

#ifndef LISTAPIXELI_H
#define LISTAPIXELI_H

#include "pixel.h"


/** \brief Klasa reprezentująca listę pixeli.
 *
 * Klasa reprezentująca dynamiczną listę jednokierunkową, której elementami są obiekty klasy Pixel.
 * Klasa ta pełni funkcję listy pól otwartych na mapie, które wymagają jeszcze sprawdzenia.
 * Klasa zawiera wskaźnik na pierwszy element w celu umożliwienia przeprowadzania operacji na liście.
 */
class ListaPixeli
{
public:
    /// Konstruktor klasy
    ListaPixeli ();
    /// Destruktor klasy
    ~ListaPixeli ();

    /**
     * \brief Procedura dodająca nowy element klasy Pixel.
     * \param nowy_pixel referencja do wskaźnika do obiektu nowego pixela
     */
    void DodajNowyElement ( Pixel* &nowy_pixel );

    /**
     * \brief Procedura dodająca nowy element klasy Pixel w odpowiednie miejsce w liście.
     * \param nowy_pixel referencja do wskaźnika do obiektu nowego pixela
     */
    void DodajNowyElementZSortowaniem ( Pixel* &nowy_pixel );

    /**
     * \brief Funkcja pobierająca liczbę elementów tworzących listę.
     * \return wartość typu int
     */
    int PobierzLiczbeElementowListy () const;

    /**
     * \brief Funkcja sprawdzająca czy lista zawiera elementy.
     * \return wartość logiczna typu bool
     */
    bool SprawdzPustoscListy ();

    /**
     * \brief Funkcja pobierająca wskaźnik na element listy o indeksie przyjmowanym w parametrze.
     * \param indeks_elementu
     * \return wskaźnik na obiekt klasy Pixel
     */
    Pixel* ZnajdzElement ( int indeks_elementu ) const;

    /**
     * \brief Funkcja pobierająca wskaźnik na element listy o najmniejszej wartości F.
     * \return wskaźnik na obiekt klasy Pixel
     */
    Pixel* ZnajdzNajlepszyPixel () const;

    /**
     * \brief Procedura usuwająca z listy element o wskaźniku - adresie pixela z mapy
     */
    void UsunElement ( Pixel* pixel_usuwany );

    /**
     * \brief Procedura usuwająca listę.
     */
    void UsunListe ();

private:
    /// Wskaźnik na pierwszy element listy
    Pixel* pierwszy;

    /// Wartość rozmiaru pixela
    double rozmiar_pixela;
    /// Wartość przekątnej pixela
    double przekatna_pixela;

    /// Wartość liczby elementów listy
    int liczba_elementow;

    /**
     * \brief Funkcja pobierająca wskaźnik na ostatni element listy.
     * \return wskaźnik na obiekt klasy Pixel
     */
    Pixel* ZnajdzOstatniElement ();

    /**
     * \brief Procedura znajdująca wskaźniki na elementy listy będące bezpośrednio powiązane z elementem usuwanym.
     */
    void ZnajdzPixeleSasiadujaceZUsuwanym ( Pixel* usuwany, Pixel* &pixel_przed_usuwanym,
                                            Pixel* &pixel_do_usuniecia, Pixel* &pixel_za_usuwanym );

};

#endif // LISTAPIXELI_H
