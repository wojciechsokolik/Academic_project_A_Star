#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include "mapa.h"
#include "wynik.h"
#include "algorytm_a_gwiazdka.h"
#include "oknowczytaniamapy.h"
#include "oknowyswietleniamapy.h"
#include "oknowyznaczeniasciezki.h"
#include "oknowyswietleniasciezki.h"
#include "oknoponownegowyznaczeniasciezki.h"
#include "oknoponownegowczytaniamapy.h"
#include "oknowyswietleniamapygraficznie.h"
#include "oknowyswietleniasciezkigraficznie.h"

using namespace std;

class OknoWyswietleniaMapy;
class OknoWyswietleniaMapyGraficznie;
class OknoWyswietleniaSciezki;
class OknoWyswietleniaSciezkiGraficznie;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
        Q_OBJECT
        
    public:
        explicit MainWindow( QWidget *parent = 0 );
        ~MainWindow();

        string nazwa_pliku_z_mapa;
        Mapa* mapa;
        ListaPixeli* najkrotsza_sciezka;

        string str_najkrotsza_sciezka;
        string str_mapa;

        bool** tablica_punktow_nalezacych_do_sciezki;

        int wspolrzedna_i_startu;
        int wspolrzedna_j_startu;
        int wspolrzedna_i_mety;
        int wspolrzedna_j_mety;
        
    private slots:

        void on_pbWczytajMape_clicked();

        void on_pbWyswietlMape_clicked();

        void on_pbWyznaczNajkrotszaSciezke_clicked();

        void on_pbWyswietlSciezke_clicked();

        void on_pbZapiszSciezkeDoPliku_clicked();

        void on_pbUsunNajkrotszaSciezke_clicked();

        void on_pbUsunMape_clicked();

        void on_pbWyswietlMapeGraficznie_clicked();

        void on_pbWyswietlSciezkeGraficznie_clicked();

        void on_pbZakonczProgram_clicked();


    private:
        Ui::MainWindow *ui;

        OknoWyswietleniaMapy* okno_wyswietlenia_mapy;
        OknoWyswietleniaMapyGraficznie* okno_wyswietlenia_mapy_graficznie;
        OknoWyswietleniaSciezki* okno_wyswietlenia_sciezki;
        OknoWyswietleniaSciezkiGraficznie* okno_wyswietlenia_sciezki_graficznie;

        void WyswietlMape();
};

#endif // MAINWINDOW_H

