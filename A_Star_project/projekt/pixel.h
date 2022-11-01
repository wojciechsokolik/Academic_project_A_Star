/**
 * \file pixel.h
 * \brief Plik nagłówkowy modułu \a pixel.
 *
 * Moduł \a pixel zawiera definicję klasy Pixel
 * oraz zestaw funkcji służących do obsługi pixeli.
 *
 * \see pixel.cpp
 */

#ifndef PIXEL_H
#define PIXEL_H

#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>

using namespace std;

/** \brief Klasa reprezentująca pojedynczy pixel na mapie.
 *
 * Klasa ta reprezentuje każdy punkt na mapie. Od wartości pixela zależy, czy jest on dostepny czy nie,
 * a co za tym idzie czy robot może wejść na takie pole, czy też, nie.
 * Klasa zawiera wskaźnik na obiekt klasy Pixel, umożliwia to utworzenie dynamicznej listy jednokierunkowej
 * składającej się z tychże obiektów.
 */
class Pixel
{
public:
    /// Konstruktor klasy
    Pixel();
    /// Destruktor klasy
    ~Pixel();

    /// Wskaźnik na pixel następny, obiekt tej samej klasy. Umożliwia utworzenie dynamicznej listy jednokierunkowej.
    Pixel* nastepny;

    /**
     * \brief Procedura ustawiająca wartość pixela.
     * \param wartosc znak określający dostępność pixela
     */
    void UstawWartoscPixela ( char wartosc );

    /**
     * \brief Procedura ustawiająca adres pixela.
     * \param adres wskaźnik do pixela zapisanego w mapie
     */
    void UstawAdresPixela ( Pixel* adres );

    /**
     * \brief Procedura ustawiająca wskaźnik na pixela rodzica.
     * \param adres stała referencja do wskaźnika do pixela rodzica
     */
    void UstawWskaznikRodzica ( Pixel* const &adres );

    /**
     * \brief Procedura ustawiająca współrzędne pixela na mapie.
     * \param wiersz wartość wiersza, w którym znajduje się pixel
     * \param kolumna wartość kolumny, w której znajduje się pixel
     */
    void UstawWspolrzednePixela ( int wiersz, int kolumna );

    /**
     * \brief Procedura ustawiająca wskaźniki do pixeli sąsiadujących z danym.
     * \param tablica tablica statyczna wskaźników do pixeli sąsiadujących
     */
    void UstawSasiadow ( Pixel* tablica [] );

    /**
     * \brief Procedura ustawiająca dostępność pixela.
     */
    void UstawDostep ();

    /**
     * \brief Procedura ustawiająca wskaźnik na pixel znajdujący się na liście, odpowiadający danemu pixelowi na mapie.
     * \param pixel stała referencja do wskaźnika do pixela zapisanego na mapie
     */
    void UstawWskaznikNaPixelZListy ( Pixel* const &pixel );

    /**
     * \brief Procedura ustawiająca obecność pixela na liście zamkniętych.
     */
    void UstawObecnoscNaLiscieZamknietych ();

    /**
     * \brief Procedura ustawiająca nieobecność pixela na liście zamkniętych.
     */
    void UstawNieobecnoscNaLiscieZamknietych ();

    /**
     * \brief Procedura ustawiająca obecność pixela na liście otwartych.
     */
    void UstawObecnoscNaLiscieOtwartych ();

    /**
     * \brief Procedura ustawiająca nieobecność pixela na liście otwartych.
     */
    void UstawNieobecnoscNaLiscieOtwartych ();


    /**
     * \brief Procedura ustawiająca wartość G.
     * \param odleglosc_G wartość odległości G
     */
    void UstawOdlegloscG ( double odleglosc_G );

    /**
     * \brief Procedura ustawiająca wartość H.
     * \param odleglosc_H wartość odległości H
     */
    void UstawOdlegloscH ( double odleglosc_H );

    /**
     * \brief Procedura ustawiająca wartość F.
     */
    void UstawOdlegloscF ();

    /**
     * \brief Procedura ustawiająca wartość F.
     * \param odleglosc wartość odległości F
     */
    void UstawOdlegloscF ( double odleglosc );

    /**
     * \brief Funkcja pobierająca wartość pixela.
     * \return wartość typu char
     */
    char PobierzWartoscPixela () const;

    /**
     * \brief Funkcja pobierająca wskaźnik na pixel zapisany na mapie.
     * \return wskaźnik na obiekt typu Pixel
     */
    Pixel* PobierzAdresPixelaOryginalnegoZMapy () const;

    /**
     * \brief Funkcja pobierająca wskaźnik na pixela rodzica.
     * \return wskaźnik na obiekt typu Pixel
     */
    Pixel* PobierzWskaznikRodzica () const;

    /**
     * \brief Funkcja pobierająca wskaźnik na pixel znajdujący się na liście.
     * \return wskaźnik na obiekt typu Pixel
     */
    Pixel* PobierzWskaznikNaPixelZListy () const;

    /**
     * \brief Funkcja pobierająca wskaźnik na pixel sąsiadujący z danym.
     * \param indeks_sasiada indeks pixela sąsiadującego
     * \return wskaźnik na obiekt typu Pixel
     */
    Pixel* PobierzAdresSasiada ( int indeks_sasiada ) const;

    /**
     * \brief Funkcja pobierająca współrzędną \i pixela.
     * \return wartość typu int
     */
    int PobierzWspolrzednaIPixela () const;

    /**
     * \brief Funkcja pobierająca współrzędną \j pixela.
     * \return wartość typu int
     */
    int PobierzWspolrzednaJPixela () const;


    /**
     * \brief Funkcja pobierająca wartość dostępu pixela.
     * \return wartość logiczna typu bool
     */
    bool PobierzDostep () const;

    /**
     * \brief Funkcja pobierająca obecność pixela na liście zamkniętych pól.
     * \return wartość logiczna typu bool
     */
    bool PobierzObecnoscNaLiscieZamknietych () const;

    /**
     * \brief Funkcja pobierająca obecność pixela na liście otwartych pól.
     * \return wartość logiczna typu bool
     */
    bool PobierzObecnoscNaLiscieOtwartych () const;


    /**
     * \brief Funkcja pobierająca wartość G pixela.
     * \return wartość typu double
     */
    double PobierzOdlegloscG () const;

    /**
     * \brief Funkcja pobierająca wartość H pixela.
     * \return wartość typu double
     */
    double PobierzOdlegloscH () const;

    /**
     * \brief Funkcja pobierająca wartość F pixela.
     * \return wartość typu double
     */
    double PobierzOdlegloscF () const;

    /**
     * \brief Procedura resetująca dane pixela, umożliwiająca wyznaczenie innej ścieżki.)
     */
    void ResetujDane ();

private:
    /// Wartość pixela określająca jego dostępność
    char pixel;

    /// Wartość współrzędnej \a i pixela
    int wspolrzedna_i;
    /// Wartość współrzędnej \a j pixela
    int wspolrzedna_j;

    /** Wskaźnik na pixel zapisany w mapie. Atrybut ten jednoznacznie przyporządkowuje dany obiekt z listy pixeli
     * do obiektu na mapie.
     */
    Pixel* adres_pixela_na_mapie;
    /// Wskaźnik na pixela rodzica
    Pixel* wskaznik_na_rodzica;


    /// Wskaźnik na pixel zapisany w liście pixeli. Jest pomocny przy aktualizowaniu listy pól otwartych.
    Pixel* wskaznik_na_pixel_z_listy;

    /// Wartość dostępu pixela
    bool dostep;

    /// Wartość logiczna obecności na liście pól zamkniętych
    bool obecnosc_na_liscie_zamknietych;
    /// Wartość logiczna obecności na liście pól otwartych
    bool obecnosc_na_liscie_otwartych;

    /// Wartość G pixela (długość dotychczasowo wyznaczonej ścieżki)
    double wartosc_G;
    /// Wartość H pixela (heurystyczna odległość między pixelem aktualnie odwiedzanym a pixelem końcowym)
    double wartosc_H;
    /// Wartość F pixela (suma wartości G i H)
    double wartosc_F;

    /** Tablica statyczna wskaźników do 8 pixeli sąsiadujących.
     * Pixele sąsiadujące są indeksowane następująco:
     * 0 - górny lewy, 1 - górny, 2 - górny prawy
     * 3 - lewy, 4 - prawy
     * 5 - dolny lewy, 6 - dolny, 7 - dolny prawy.
     **/
    Pixel* tablica_sasiadow [8];

};

#endif // PIXEL_H
