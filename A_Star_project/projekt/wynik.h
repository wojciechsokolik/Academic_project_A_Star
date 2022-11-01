/**
 * \file wynik.h
 * \brief Plik nagłówkowy modułu \a wynik.
 *
 * Moduł \a wynik zawiera funkcje niezbędne
 * do wyświetlenia najkrotszej sciezki w konsoli oraz zapisania najkrótszej ścieżki do pliku tekstowego.
 *
 * \see wynik.cpp
 */

#ifndef WYNIK_H
#define WYNIK_H

#include "mapa.h"
#include "sstream"

/**
 * \brief Procedura pobierająca wszystkie dane z obiektu \a mapa niezbędne do zapisu bądź wyświetlenia ścieżki.
 * \param mapa stała referencja do wskaźnika do obiektu \a mapa
 * \param najkrotsza_sciezka stała referencja do wskaźnika do obiektu \a najkrotsza_sciezka
 * \param wskaznik_na_mape referencja do wskaźnika do dwuwymiarowej tablicy pixeli
 * \param liczba_elementow_listy referencja do wartości liczby elementów listy
 * \param wysokosc_mapy referencja do wartości wysokości mapy
 * \param szerokosc_mapy referencja do wartości szerokości mapy
 */
void PobierzDaneZMapy ( Mapa* const &mapa, ListaPixeli* const &najkrotsza_sciezka, Pixel** &wskaznik_na_mape,
                        int &liczba_elementow_listy, int &wysokosc_mapy, int &szerokosc_mapy );

/**
 * \brief Funkcja sprawdzająca, czy na liście najkrótszej ścieżki znajduje się pixel o danym wskaźniku.
 * \param tablica_wskaźnikow dwuwymiarowa tablica dynamiczna wartości logicznych reprezentujących
 * przynależność pixela do ścieżki
 * \param liczba_elementow_listy wartość liczby elementów listy najkrótszej ściezki
 * \param pixel_z_mapy wskaźnik na pixel zapisany na mapie
 * \return wartość logiczna typu bool
 */
bool SprawdzPixel ( Pixel** tablica_wskaznikow, int liczba_elementow_listy, Pixel* pixel_z_mapy );


/**
 * \brief Procedura tworząca dwuwymiarowę tablicę dynamiczną wartości logicznych reprezentujących
 * przynależność pixela do ścieżki.
 * \param tablica dwuwymiarowa tablica dynamiczna wartości logicznych reprezentujących przynależność pixela do ścieżki
 * \param wysokosc_mapy wartość wysokości mapy
 * \param szerokosc_mapy wartość szerokości mapy
 */
void UtworzTablice( bool** &tablica, int wysokosc_mapy, int szerokosc_mapy );

/**
 * \brief Procedura zerująca dwuwymiarowę tablicę dynamiczną wartości logicznych reprezentujących
 * przynależność pixela do ścieżki.
 * \param tablica dwuwymiarowa tablica dynamiczna wartości logicznych reprezentujących przynależność pixela do ścieżki
 * \param wysokosc_mapy wartość wysokości mapy
 * \param szerokosc_mapy wartość szerokości mapy
 * \see ZerujTablice ( bool** &tablica, int wysokosc_mapy, int szerokosc_mapy )
 */
void ZerujTablice ( bool** &tablica, int wysokosc_mapy, int szerokosc_mapy );

/**
 * \brief Procedura usuwająca dwuwymiarowę tablicę dynamiczną wartości logicznych reprezentujących
 * przynależność pixela do ścieżki.
 * \param tablica dwuwymiarowa tablica dynamiczna wartości logicznych reprezentujących przynależność pixela do ścieżki
 * \param wysokosc_mapy wartość wysokości mapy
 */
void UsunTablice ( bool** &tablica, int wysokosc_mapy );


/**
 * \brief Procedura wypełniająca dwuwymiarowę tablicę dynamiczną wartości logicznych reprezentujących
 * przynależność pixela do ścieżki.
 * \param tablica_wskaznikow dwuwymiarowa tablica dynamiczna wartości logicznych reprezentujących
 * przynależność pixela do ścieżki
 * \param najkrotsza_sciezka stała referencja do wskaźnika do obiektu \a najkrotsza_sciezka
 * \param liczba_elementow_listy wartość liczby elementów listy
 */
void WypelnijTabliceWskaznikow ( Pixel** tablica_wskaznikow, ListaPixeli* const &najkrotsza_sciezka,
                                 int liczba_elementow_listy );

/**
 * \brief Procedura generująca ścieżkę do zapisu.
 * \param wskaznik_na_mape stała referencja do wskaźnika do dwuwymiarowej tablicy dynamicznej pixeli
 * \param najkrotsza_sciezka stała referencja do wskaźnika do obiektu \a najkrotsza_sciezka
 * \param tablica_punktow_nalezacych_do_sciezki dwuwymiarowa tablica dynamiczna wartości logicznych reprezentujących
 * przynależność pixela do ścieżki
 * \param liczba_elementow_listy wartość liczby elementów listy
 * \param wysokosc_mapy wartość wysokości mapy
 * \param szerokosc_mapy wartość szerokości mapy
 */
void GenerujSciezkeDoZapisu ( Pixel** const &wskaznik_na_mape, ListaPixeli* const &najkrotsza_sciezka,
                              bool** tablica_punktow_nalezacych_do_sciezki, int liczba_elementow_listy,
                              int wysokosc_mapy, int szerokosc_mapy );


/**
 * \brief Procedura wyświetlająca najkrótszą ścieżkę w konsoli.
 * \param mapa stała referencja do wskaźnika do obiektu \a mapa
 * \param najkrotsza_sciezka stała referencja do wskaźnika do obiektu \a najkrotsza_sciezka
 * \see PobierzDaneZMapy ( Mapa* const &mapa, ListaPixeli* const &najkrotsza_sciezka, Pixel** &wskaznik_na_mape,
 * int &liczba_elementow_listy, int &wysokosc_mapy, int &szerokosc_mapy )
 * \see UtworzTablice( bool** &tablica, int wysokosc_mapy, int szerokosc_mapy )
 * \see GenerujSciezkeDoZapisu ( Pixel** const &wskaznik_na_mape, ListaPixeli* const &najkrotsza_sciezka,
 * bool** tablica_punktow_nalezacych_do_sciezki, int liczba_elementow_listy, int wysokosc_mapy, int szerokosc_mapy )
 * \see UsunTablice ( bool** &tablica, int wysokosc_mapy )
 */
void WyswietlSciezkeWKonsoli ( Mapa* const &mapa, ListaPixeli* const &najkrotsza_sciezka );

/**
 * \brief Procedura zapisująca najkrótszą ścieżkę do pliku tekstowego.
 * \param mapa stała referencja do wskaźnika do obiektu \a mapa
 * \param najkrotsza_sciezka stała referencja do wskaźnika do obiektu \a najkrotsza_sciezka
 * \see PobierzDaneZMapy ( Mapa* const &mapa, ListaPixeli* const &najkrotsza_sciezka, Pixel** &wskaznik_na_mape,
 * int &liczba_elementow_listy, int &wysokosc_mapy, int &szerokosc_mapy )
 * \see UtworzTablice( bool** &tablica, int wysokosc_mapy, int szerokosc_mapy )
 * \see GenerujSciezkeDoZapisu ( Pixel** const &wskaznik_na_mape, ListaPixeli* const &najkrotsza_sciezka,
 * bool** tablica_punktow_nalezacych_do_sciezki, int liczba_elementow_listy, int wysokosc_mapy, int szerokosc_mapy )
 * \see UsunTablice ( bool** &tablica, int wysokosc_mapy )
 */
void ZapiszSciezkeDoPliku ( Mapa* const &mapa, ListaPixeli* const &najkrotsza_sciezka );

void PrzygotujSciezke ( Mapa* const &mapa, ListaPixeli* const &najkrotsza_sciezka, string &sciezka );

void PrzygotujMape (Mapa* const &mapa, string &str_mapa );

void PobierzDaneZMapy ( Mapa * const &mapa, Pixel **&wskaznik_na_mape, int &wysokosc_mapy, int &szerokosc_mapy );

bool** PrzygotujSciezkeGraficznie ( Mapa* const &mapa, ListaPixeli* const &najkrotsza_sciezka,
                                    bool** tablica_punktow_nalezacych_do_sciezki );

#endif // WYNIK_H
