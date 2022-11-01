/**
 * \file algorytm_a_gwiazdka.h
 * \brief Plik nagłówkowy modułu \a algorytm_a_gwiazdka.
 *
 * Moduł \a algorytm_a_gwiazdka zawiera funkcje niezbędne
 * do wyznaczenia najkrotszej sciezki za pomoca algorytmu A*
 *
 * \see algorytm_a_gwiazdka.cpp
 */

#ifndef ALGORYTM_A_GWIAZDKA_H
#define ALGORYTM_A_GWIAZDKA_H

#include "mapa.h"


/**
 * \brief Procedura pobierajaca dane z mapy.
 * \param mapa stała referencja do wskaźnika do obiektu \a mapa
 * \param wskaznik_na_mape wskaźnik na dwuwymiarową tablicę dynamiczną pixeli
 * \param wysokosc_mapy referencja do wartości wysokosci mapy
 * \param szerokosc_mapy referencja do wartości szerokosci mapy
 * \param rozmiar_pixela referencja do wartości rozmiaru pixela
 * \param przekatna_pixela referencja do przekatnej pixela
 * \see ZnajdzNajkrotszaSciezke ( Mapa* const &mapa, ListaPixeli* &najkrotsza_sciezka,
 * int wspolrzedna_i_startu, int wspolrzedna_j_startu, int wspolrzedna_i_mety, int wspolrzedna_j_mety )
 */
void PobierzWszystkieDaneZMapy ( Mapa* const &mapa, Pixel** &wskaznik_na_mape,
                                 int &wysokosc_mapy, int &szerokosc_mapy, double &rozmiar_pixela,
                                 double &przekatna_pixela );

/**
 * \brief Funkcja sprawdzajaca dostepnosc punktow.
 * \param pixel_start stała referencja do wskaźnika do pixela startowego
 * \param pixel_meta stała referencja do wskaźnika do pixela koncowego
 */
int SprawdzPunkty ( Pixel* const &pixel_start, Pixel* const &pixel_meta );


/**
 * \brief Funkcja obliczająca wartość G dla danego pixela.
 * \param pixel_Q stała referencja do wskaźnika do pixela aktualnie odwiedzanego
 * \param indeks_sasiada wartość indeksu pixela sasiadującego z pixelem aktualnie odwiedzanym
 * \param rozmiar_pixela wartość rozmiaru pixela
 * \param przekatna_pixela wartość przekątnej pixela
 */
double ObliczWartoscG ( Pixel* const &pixel_Q, int indeks_sasiada, double rozmiar_pixela, double przekatna_pixela );

/**
 * \brief Funkcja obliczająca wartość H dla danego pixela.
 * \param pixel stała referencja do wskaźnika do pixela aktualnie odwiedzanego
 * \param pixel_meta stała referencja do wskaźnika do pixela końcowego
 * \param rozmiar_pixela wartość rozmiaru pixela
 * \see PoliczOdlegloscOdMety ( Pixel* const &pixel, Pixel* const &pixel_meta, double rozmiar_pixela )
 */
double ObliczWartoscH ( Pixel* const &pixel, Pixel* const &pixel_meta, double rozmiar_pixela );

/**
 * \brief Funkcja obliczająca odległość od mety dla danego pixela.
 * \param pixel stała referencja do wskaźnika do pixela aktualnie odwiedzanego
 * \param pixel_meta stała referencja do wskaźnika do pixela końcowego
 * \param rozmiar_pixela wartość rozmiaru pixela
 */
double PoliczOdlegloscOdMety ( Pixel* const &pixel, Pixel* const &pixel_meta, double rozmiar_pixela );


/**
 * \brief Procedura generująca najkrótszą ścieżkę.
 * \param pixel_koncowy stała referencja do wskaźnika do pixela końcowego
 * \param najkrotsza_sciezka stała referencja do wskaźnika do obiektu \a najkrotsza_sciezka
 * \param pixel_start stała referencja do wskaźnika do pixela startowego
 */
void GenerujNajkrotszaSciezke ( Pixel* const &pixel_koncowy, ListaPixeli* const &najkrotsza_sciezka,
                                Pixel* const &pixel_start );


/**
 * \brief Funkcja główna modułu \a algorytm_a_gwiazdka.
 * \param mapa stała referencja do wskaźnika do obiektu \a mapa
 * \param najkrotsza_sciezka stała referencja do wskaźnika do obiektu \a najkrotsza_sciezka
 * \param wspolrzedna_i_startu wartość współrzędnej \a i pixela startowego
 * \param wspolrzedna_j_startu wartość współrzędnej \a j pixela startowego
 * \param wspolrzedna_i_mety wartość współrzędnej \a i pixela końcowego
 * \param wspolrzedna_j_mety wartość współrzędnej \a j pixela końcowego
 * \see PobierzWszystkieDaneZMapy ( Mapa* const &mapa, Pixel** &wskaznik_na_mape,
 * int &wysokosc_mapy, int &szerokosc_mapy, double &rozmiar_pixela, double &przekatna_pixela )
 * \see SprawdzPunkty ( Pixel* const &pixel_start, Pixel* const &pixel_meta )
 * \see GenerujNajkrotszaSciezke ( Pixel* const &pixel_koncowy, ListaPixeli* const &najkrotsza_sciezka,
 * Pixel* const &pixel_start )
 * \see CzyscDane ( ListaPixeli &pola_otwarte )
 * \see ResetujDaneWPixelach ( Pixel** &wskaznik_na_mape, int wysokosc_mapy, int szerokosc_mapy )
 */
int ZnajdzNajkrotszaSciezke ( Mapa* const &mapa, ListaPixeli* &najkrotsza_sciezka,
                              int wspolrzedna_i_startu, int wspolrzedna_j_startu,
                              int wspolrzedna_i_mety, int wspolrzedna_j_mety );

/**
 * \brief Procedura czyszcząca pamięć po wyznaczeniu najkrótszej ścieżki.
 * \param pola_otwarte referencja do obiektu listy \a pola_otwarte
 */
void CzyscDane ( ListaPixeli &pola_otwarte );

/**
 * \brief Procedura resetująca dane w obiektach pixeli (w celu umożliwienia ponownego wyznaczenia innej ścieżki).
 * \param wskaznik_na_mape wskaźnik na dwuwymiarową tablicę dynamiczną pixeli
 * \param wysokosc_mapy wartość wysokosci mapy
 * \param szerokosc_mapy wartość szerokosci mapy
 */
void ResetujDaneWPixelach ( Pixel** &wskaznik_na_mape, int wysokosc_mapy, int szerokosc_mapy );

bool SprawdzWyjsciePozaObszarTablicy ( Mapa *&mapa, int indeks_wiersza, int indeks_kolumny );

#endif // ALGORYTM_A_GWIAZDKA_H
