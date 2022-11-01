#include "oknowyswietleniasciezkigraficznie.h"
#include "ui_oknowyswietleniasciezkigraficznie.h"

OknoWyswietleniaSciezkiGraficznie::OknoWyswietleniaSciezkiGraficznie( QWidget *parent ) :
    QDialog( parent ),
    ui( new Ui::OknoWyswietleniaSciezkiGraficznie )
{
    ui->setupUi( this );

    Mapa* mapa = ( ( MainWindow* )this->parent() )->mapa;

    if ( mapa != NULL )
    {
        Pixel** wskaznik_na_mape = mapa->PobierzWskaznikNaMape();
        int wysokosc_mapy = mapa->PobierzWysokoscMapy();
        int szerokosc_mapy = mapa->PobierzSzerokoscMapy();
        bool** tablica_punktow_nalezacych_do_sciezki =
                ( ( MainWindow* )this->parent() )->tablica_punktow_nalezacych_do_sciezki;

        QImage obraz = QImage( szerokosc_mapy, wysokosc_mapy, QImage::Format_RGB32 );

        for ( int i = 0; i < wysokosc_mapy; i++ )
        {
            for ( int j = 0; j < szerokosc_mapy; j++ )
            {
                if ( tablica_punktow_nalezacych_do_sciezki[i][j] )
                {
                    obraz.setPixel( j, i, qRgb( 255, 0, 0 ) );
                }

                else if ( wskaznik_na_mape[i][j].PobierzDostep() )
                {
                    obraz.setPixel( j, i, qRgb( 255, 255, 255 ) );
                }

                else
                {
                    obraz.setPixel( j, i, qRgb( 0, 0, 0 ) );
                }
            }

        }

        QGraphicsScene* scena = new QGraphicsScene( this );

        scena->addPixmap( QPixmap::fromImage( obraz ) );

        ui->graphicsView->setScene( scena );

        wskaznik_na_mape = NULL;
    }

    mapa = NULL;

}

OknoWyswietleniaSciezkiGraficznie::~OknoWyswietleniaSciezkiGraficznie()
{
    delete ui;
}
