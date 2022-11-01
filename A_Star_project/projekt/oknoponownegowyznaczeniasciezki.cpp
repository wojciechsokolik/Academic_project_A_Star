#include "oknoponownegowyznaczeniasciezki.h"
#include "ui_oknoponownegowyznaczeniasciezki.h"

OknoPonownegoWyznaczeniaSciezki::OknoPonownegoWyznaczeniaSciezki( QWidget *parent ) :
    QDialog( parent ),
    ui( new Ui::OknoPonownegoWyznaczeniaSciezki )
{
    ui->setupUi( this );
}

OknoPonownegoWyznaczeniaSciezki::~OknoPonownegoWyznaczeniaSciezki()
{
    delete ui;
}
