#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow( QWidget *parent ) :
    QMainWindow( parent ),
    ui( new Ui::MainWindow )
{
    ui->setupUi( this );

    nazwa_pliku_z_mapa = "";
    mapa = NULL;
    najkrotsza_sciezka = NULL;

    okno_wyswietlenia_mapy = NULL;
    okno_wyswietlenia_mapy_graficznie = NULL;
    okno_wyswietlenia_sciezki = NULL;
    okno_wyswietlenia_sciezki_graficznie = NULL;

    str_mapa = "";
    str_najkrotsza_sciezka = "";

    tablica_punktow_nalezacych_do_sciezki = NULL;

    wspolrzedna_i_startu = 0;
    wspolrzedna_j_startu = 0;
    wspolrzedna_i_mety = 0;
    wspolrzedna_j_mety = 0;
}

MainWindow::~MainWindow()
{
    delete mapa;
    mapa = NULL;

    delete najkrotsza_sciezka;
    najkrotsza_sciezka = NULL;

    okno_wyswietlenia_mapy = NULL;
    okno_wyswietlenia_mapy_graficznie = NULL;
    okno_wyswietlenia_sciezki = NULL;
    okno_wyswietlenia_sciezki_graficznie = NULL;

    if ( tablica_punktow_nalezacych_do_sciezki != NULL )
    {
        for ( int i = 0; i < mapa->PobierzWysokoscMapy(); i++ )
        {
            delete [] tablica_punktow_nalezacych_do_sciezki [i];
        }

        delete [] tablica_punktow_nalezacych_do_sciezki;
        tablica_punktow_nalezacych_do_sciezki = NULL;
    }

    str_mapa = "";
    str_najkrotsza_sciezka = "";

    delete ui;
}

void MainWindow::on_pbWczytajMape_clicked()
{
    if ( mapa )
    {
        OknoPonownegoWczytaniaMapy okno_ponownego_wczytania_mapy;
        okno_ponownego_wczytania_mapy.setModal( true );

        if ( okno_ponownego_wczytania_mapy.exec() == QDialog::Accepted )
        {
            OknoWczytaniaMapy okno_wczytania_mapy( this );
            okno_wczytania_mapy.setModal( true );

            if ( okno_wczytania_mapy.exec() == QDialog::Accepted )
            {
                mapa = new Mapa;
                bool flaga_wczytania_mapy = mapa->WczytajMape( nazwa_pliku_z_mapa );

                if ( !flaga_wczytania_mapy )
                {
                    delete mapa;
                    mapa = NULL;

                    QMessageBox::critical( this, tr( "Error " ),
                                           tr( "Operacja wczytywania mapy zako??czona niepowodzeniem. " ) );
                }

                if ( flaga_wczytania_mapy )
                {
                    QMessageBox::information( this, tr( "Info " ),
                                              tr( "Operacja wczytywania mapy zako??czona pomy??lnie. " ) );
                }

                nazwa_pliku_z_mapa = "";
            }
        }
    }

    else
    {
        OknoWczytaniaMapy okno_wczytania_mapy( this );
        okno_wczytania_mapy.setModal( true );

        if ( okno_wczytania_mapy.exec() == QDialog::Accepted )
        {
            mapa = new Mapa;
            bool flaga_wczytania_mapy = mapa->WczytajMape( nazwa_pliku_z_mapa );

            if ( !flaga_wczytania_mapy )
            {
                delete mapa;
                mapa = NULL;

                QMessageBox::critical( this, tr( "Error " ),
                                       tr( "Operacja wczytywania mapy zako??czona niepowodzeniem. " ) );
            }

            if ( flaga_wczytania_mapy )
            {
                QMessageBox::information( this, tr( "Info " ),
                                          tr( "Operacja wczytywania mapy zako??czona pomy??lnie. " ) );
            }

            nazwa_pliku_z_mapa = "";
        }
    }
}

void MainWindow::on_pbWyswietlMape_clicked()
{
    if ( !mapa )
    {
        QMessageBox::critical( this, tr( "Error " ), tr( "Brak mapy w bazie. " ) );
    }

    else
    {
        str_mapa = "";
        PrzygotujMape( mapa, str_mapa );

        okno_wyswietlenia_mapy = new OknoWyswietleniaMapy( this );
        okno_wyswietlenia_mapy->show();
    }
}

void MainWindow::on_pbWyswietlMapeGraficznie_clicked()
{
    if ( !mapa )
    {
        QMessageBox::critical( this, tr( "Error " ), tr( "Brak mapy w bazie. " ) );
    }

    else
    {
        okno_wyswietlenia_mapy_graficznie = new OknoWyswietleniaMapyGraficznie( this );
        okno_wyswietlenia_mapy_graficznie->show();
    }

}

void MainWindow::on_pbWyznaczNajkrotszaSciezke_clicked()
{
    if ( !mapa )
    {
        QMessageBox::critical( this, tr( "Error " ), tr( "Brak mapy w bazie. " ) );
    }

    else if ( najkrotsza_sciezka )
    {
        OknoPonownegoWyznaczeniaSciezki okno_ponownego_wyznaczenia_sciezki;
        okno_ponownego_wyznaczenia_sciezki.setModal( true );

        if ( okno_ponownego_wyznaczenia_sciezki.exec() == QDialog::Accepted )
        {
            int flaga_wyznaczenia_najkrotszej_sciezki = 0;
            bool flaga_pobrania_punktow = true;

            OknoWyznaczeniaSciezki okno_wyznaczenia_sciezki( this );
            okno_wyznaczenia_sciezki.setModal( true );

            if ( okno_wyznaczenia_sciezki.exec() == QDialog::Accepted )
            {
                if ( SprawdzWyjsciePozaObszarTablicy( mapa, wspolrzedna_i_startu, wspolrzedna_j_startu ) )
                {
                    flaga_pobrania_punktow = false;
                }

                if ( SprawdzWyjsciePozaObszarTablicy( mapa, wspolrzedna_i_mety, wspolrzedna_j_mety ) )
                {
                    flaga_pobrania_punktow = false;
                }

                if ( !flaga_pobrania_punktow )
                {
                    QMessageBox::critical( this, tr( "Error " ),
                                           tr( "Podane wsp????rz??dne wykraczaj?? poza obszar mapy. Nie mo??na wyznaczy?? najkr??tszej ??cie??ki. " ) );
                }

                else
                {
                    flaga_wyznaczenia_najkrotszej_sciezki = ZnajdzNajkrotszaSciezke ( mapa, najkrotsza_sciezka,
                                                                                      wspolrzedna_i_startu, wspolrzedna_j_startu,
                                                                                      wspolrzedna_i_mety, wspolrzedna_j_mety );

                    if ( flaga_wyznaczenia_najkrotszej_sciezki == 1 )
                    {
                        QMessageBox::critical( this, tr( "Error " ),
                                               tr( "Podane punkty startowy i ko??cowy s?? niedostepne. Nie mo??na wyznaczy?? najkr??tszej ??cie??ki. " ) );
                    }

                    else if ( flaga_wyznaczenia_najkrotszej_sciezki == 2 )
                    {
                        QMessageBox::critical( this, tr( "Error " ),
                                               tr( "Podany punkt startowy jest niedost??pny, punkt ko??cowy jest dost??pny. Nie mo??na wyznaczy?? najkr??tszej ??cie??ki. " ) );
                    }

                    else if ( flaga_wyznaczenia_najkrotszej_sciezki == 3 )
                    {
                        QMessageBox::critical( this, tr( "Error " ),
                                               tr( "Podany punkt startowy jest dost??pny, punkt ko??cowy jest niedost??pny. Nie mo??na wyznaczy?? najkr??tszej ??cie??ki. " ) );
                    }

                    else if ( flaga_wyznaczenia_najkrotszej_sciezki == 4 )
                    {
                        QMessageBox::information( this, tr( "Info " ),
                                                  tr( "Podane punkty startowy i ko??cowy s?? dost??pne. Wyznaczono najkr??tsz?? ??cie??k??. " ) );
                    }

                    else if ( flaga_wyznaczenia_najkrotszej_sciezki == 5 )
                    {
                        QMessageBox::critical( this, tr( "Info " ),
                                               tr( "Podane punkty startowy i ko??cowy s?? dost??pne. Nie istnieje ??adna ??cie??ka pomi??dzy tymi punktami. " ) );
                    }
                }
            }
        }
    }

    else
    {
        int flaga_wyznaczenia_najkrotszej_sciezki = 0;
        bool flaga_pobrania_punktow = true;

        OknoWyznaczeniaSciezki okno_wyznaczenia_sciezki( this );
        okno_wyznaczenia_sciezki.setModal( true );

        if ( okno_wyznaczenia_sciezki.exec() == QDialog::Accepted )
        {
            if ( SprawdzWyjsciePozaObszarTablicy( mapa, wspolrzedna_i_startu, wspolrzedna_j_startu ) )
            {
                flaga_pobrania_punktow = false;
            }

            if ( SprawdzWyjsciePozaObszarTablicy( mapa, wspolrzedna_i_mety, wspolrzedna_j_mety ) )
            {
                flaga_pobrania_punktow = false;
            }

            if ( !flaga_pobrania_punktow )
            {
                QMessageBox::critical( this, tr( "Error " ),
                                       tr( "Podane wsp????rz??dne wykraczaj?? poza obszar mapy. Nie mo??na wyznaczy?? najkr??tszej ??cie??ki. " ) );
            }

            else
            {
                flaga_wyznaczenia_najkrotszej_sciezki = ZnajdzNajkrotszaSciezke ( mapa, najkrotsza_sciezka,
                                                                                  wspolrzedna_i_startu, wspolrzedna_j_startu,
                                                                                  wspolrzedna_i_mety, wspolrzedna_j_mety );

                if ( flaga_wyznaczenia_najkrotszej_sciezki == 1 )
                {
                    QMessageBox::critical( this, tr( "Error " ),
                                           tr( "Podane punkty startowy i ko??cowy s?? niedostepne. Nie mo??na wyznaczy?? najkr??tszej ??cie??ki. " ) );
                }

                else if ( flaga_wyznaczenia_najkrotszej_sciezki == 2 )
                {
                    QMessageBox::critical( this, tr( "Error " ),
                                           tr( "Podany punkt startowy jest niedost??pny, punkt ko??cowy jest dost??pny. Nie mo??na wyznaczy?? najkr??tszej ??cie??ki. " ) );
                }

                else if ( flaga_wyznaczenia_najkrotszej_sciezki == 3 )
                {
                    QMessageBox::critical( this, tr( "Error " ),
                                           tr( "Podany punkt startowy jest dost??pny, punkt ko??cowy jest niedost??pny. Nie mo??na wyznaczy?? najkr??tszej ??cie??ki. " ) );
                }

                else if ( flaga_wyznaczenia_najkrotszej_sciezki == 4 )
                {
                    QMessageBox::information( this, tr( "Info " ),
                                              tr( "Podane punkty startowy i ko??cowy s?? dost??pne. Wyznaczono najkr??tsz?? ??cie??k??. " ) );
                }

                else if ( flaga_wyznaczenia_najkrotszej_sciezki == 5 )
                {
                    QMessageBox::critical( this, tr( "Info " ),
                                           tr( "Podane punkty startowy i ko??cowy s?? dost??pne. Nie istnieje ??adna ??cie??ka pomi??dzy tymi punktami. " ) );
                }
            }
        }
    }
}

void MainWindow::on_pbWyswietlSciezke_clicked()
{
    if ( !najkrotsza_sciezka && !mapa )
    {
        QMessageBox::critical( this, tr( "Error " ),
                               tr( "Brak mapy w bazie. Brak ??cie??ki w bazie. Operacja wy??wietlenia mapy zako??czona niepowodzeniem. " ) );
    }

    else if ( !mapa )
    {
        QMessageBox::critical( this, tr( "Error " ),
                               tr( "Brak mapy w bazie. Operacja wy??wietlenia mapy zako??czona niepowodzeniem. " ) );
    }

    else if ( !najkrotsza_sciezka )
    {
        QMessageBox::critical( this, tr( "Error " ),
                               tr( "Brak ??cie??ki w bazie. Operacja wy??wietlenia mapy zako??czona niepowodzeniem. " ) );
    }

    else
    {
        str_najkrotsza_sciezka = "";
        PrzygotujSciezke( mapa, najkrotsza_sciezka, str_najkrotsza_sciezka );

        okno_wyswietlenia_sciezki = new OknoWyswietleniaSciezki( this );
        okno_wyswietlenia_sciezki->show();
    }
}

void MainWindow::on_pbWyswietlSciezkeGraficznie_clicked()
{
    if ( !najkrotsza_sciezka && !mapa )
    {
        QMessageBox::critical( this, tr( "Error " ),
                               tr( "Brak mapy w bazie. Brak ??cie??ki w bazie. Operacja wy??wietlenia mapy zako??czona niepowodzeniem. " ) );
    }

    else if ( !mapa )
    {
        QMessageBox::critical( this, tr( "Error " ),
                               tr( "Brak mapy w bazie. Operacja wy??wietlenia mapy zako??czona niepowodzeniem. " ) );
    }

    else if ( !najkrotsza_sciezka )
    {
        QMessageBox::critical( this, tr( "Error " ),
                               tr( "Brak ??cie??ki w bazie. Operacja wy??wietlenia mapy zako??czona niepowodzeniem. " ) );
    }

    else
    {
        tablica_punktow_nalezacych_do_sciezki = PrzygotujSciezkeGraficznie( mapa, najkrotsza_sciezka,
                                                                            tablica_punktow_nalezacych_do_sciezki );

        okno_wyswietlenia_sciezki_graficznie = new OknoWyswietleniaSciezkiGraficznie( this );
        okno_wyswietlenia_sciezki_graficznie->show();
    }

}


void MainWindow::on_pbZapiszSciezkeDoPliku_clicked()
{
    if ( !najkrotsza_sciezka && !mapa )
    {
        QMessageBox::critical( this, tr( "Error " ),
                               tr( "Brak mapy w bazie. Brak ??cie??ki w bazie. Operacja zapisania ??cie??ki zako??czona niepowodzeniem. " ) );
    }

    else if ( !mapa )
    {
        QMessageBox::critical( this, tr( "Error " ),
                               tr( "Brak mapy w bazie. Operacja zapisania ??cie??ki zako??czona niepowodzeniem. " ) );
    }

    else if ( !najkrotsza_sciezka )
    {
        QMessageBox::critical( this, tr( "Error " ),
                               tr( "Brak ??cie??ki w bazie. Operacja zapisania ??cie??ki zako??czona niepowodzeniem. " ) );
    }

    else
    {
        ZapiszSciezkeDoPliku( mapa, najkrotsza_sciezka );
        QMessageBox::information( this, tr( "Info " ), tr( "Zapisano ??cie??k?? do pliku. " ) );
    }
}

void MainWindow::on_pbUsunNajkrotszaSciezke_clicked()
{
    if ( !najkrotsza_sciezka )
    {
        QMessageBox::critical( this, tr( "Error " ),
                               tr( "Brak ??cie??ki w bazie. Operacja usuni??cia ??cie??ki zako??czona niepowodzeniem. " ) );
    }

    else
    {
        delete najkrotsza_sciezka;
        najkrotsza_sciezka = NULL;

        QMessageBox::information( this, tr( "Info " ),
                                  tr( "Operacja usuni??cia ??cie??ki zako??czona pomy??lnie. " ) );
    }
}

void MainWindow::on_pbUsunMape_clicked()
{
    if ( !mapa )
    {
        QMessageBox::critical( this, tr( "Error " ),
                               tr( "Brak mapy w bazie. Operacja usuni??cia mapy zako??czona niepowodzeniem. " ) );
    }

    else
    {
        delete mapa;
        mapa = NULL;

        QMessageBox::information( this, tr( "Info " ),
                                  tr( "Operacja usuni??cia mapy zako??czona pomy??lnie. " ) );
    }
}

void MainWindow::on_pbZakonczProgram_clicked()
{
    this->close();
}

