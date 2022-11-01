#include "oknowczytaniamapy.h"
#include "ui_oknowczytaniamapy.h"


OknoWczytaniaMapy::OknoWczytaniaMapy( QWidget *parent ):
    QDialog( parent ),
    ui( new Ui::OknoWczytaniaMapy )
{
    ui->setupUi( this );
}

OknoWczytaniaMapy::~OknoWczytaniaMapy()
{
    delete ui;
}

void OknoWczytaniaMapy::on_buttonBox_accepted()
{
    string nazwa_pliku_do_wczytania_mapy = ui->leNazwaPlikuZMapa->text().toStdString();
    nazwa_pliku_do_wczytania_mapy = ui->leNazwaPlikuZMapa->text().toStdString();
    ( ( MainWindow* )this->parent() )->nazwa_pliku_z_mapa = nazwa_pliku_do_wczytania_mapy;
    ui->leNazwaPlikuZMapa->clear();
}
