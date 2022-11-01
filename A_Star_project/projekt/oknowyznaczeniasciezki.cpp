#include "oknowyznaczeniasciezki.h"
#include "ui_oknowyznaczeniasciezki.h"

OknoWyznaczeniaSciezki::OknoWyznaczeniaSciezki( QWidget *parent ) :
    QDialog( parent ),
    ui( new Ui::OknoWyznaczeniaSciezki )
{
    ui->setupUi( this );

    ui->leWspolrzednaIStartu->setValidator( new QIntValidator );
    ui->leWspolrzednaJStartu->setValidator( new QIntValidator );
    ui->leWspolrzednaIMety->setValidator( new QIntValidator );
    ui->leWspolrzednaJMety->setValidator( new QIntValidator );

    ui->leWspolrzednaIStartu->setText( "0" );
    ui->leWspolrzednaJStartu->setText( "0" );
    ui->leWspolrzednaIMety->setText( "0" );
    ui->leWspolrzednaJMety->setText( "0" );


}

OknoWyznaczeniaSciezki::~OknoWyznaczeniaSciezki()
{
    delete ui;
}

void OknoWyznaczeniaSciezki::on_buttonBox_accepted()
{
    ( ( MainWindow* )this->parent() )->wspolrzedna_i_startu = ui->leWspolrzednaIStartu->text().toInt();
    ( ( MainWindow* )this->parent() )->wspolrzedna_j_startu = ui->leWspolrzednaJStartu->text().toInt();
    ( ( MainWindow* )this->parent() )->wspolrzedna_i_mety = ui->leWspolrzednaIMety->text().toInt();
    ( ( MainWindow* )this->parent() )->wspolrzedna_j_mety = ui->leWspolrzednaJMety->text().toInt();
}
