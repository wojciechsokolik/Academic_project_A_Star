#include "oknowyswietleniamapy.h"
#include "ui_oknowyswietleniamapy.h"

OknoWyswietleniaMapy::OknoWyswietleniaMapy( QWidget *parent ) :
    QDialog( parent ),
    ui( new Ui::OknoWyswietleniaMapy )
{
    ui->setupUi( this );

    Mapa* mapa = ( ( MainWindow* )this->parent() )->mapa;
    string str_mapa = ( ( MainWindow* )this->parent() )->str_mapa;

    if ( mapa->PobierzSzerokoscMapy() > 100 )
    {
        ui->tbMapa->setFontPointSize( 1 );
    }

    ui->tbMapa->setText( QString( str_mapa.c_str() ) );
}

OknoWyswietleniaMapy::~OknoWyswietleniaMapy()
{
    delete ui;
}

