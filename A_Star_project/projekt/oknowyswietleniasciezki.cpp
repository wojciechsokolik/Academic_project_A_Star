#include "oknowyswietleniasciezki.h"
#include "ui_oknowyswietleniasciezki.h"

OknoWyswietleniaSciezki::OknoWyswietleniaSciezki( QWidget *parent ) :
    QDialog( parent ),
    ui( new Ui::OknoWyswietleniaSciezki )
{
    ui->setupUi( this );

    Mapa* mapa = ( ( MainWindow* )this->parent() )->mapa;

    string sciezka = ( ( MainWindow* )this->parent() )->str_najkrotsza_sciezka;;

    if ( mapa->PobierzSzerokoscMapy() > 100 )
    {
        ui->tbNajkrotszaSciezka->setFontPointSize( 1 );
    }

    ui->tbNajkrotszaSciezka->setText( QString( sciezka.c_str() ) );

}

OknoWyswietleniaSciezki::~OknoWyswietleniaSciezki()
{
    delete ui;
}
