#include "oknoponownegowczytaniamapy.h"
#include "ui_oknoponownegowczytaniamapy.h"

OknoPonownegoWczytaniaMapy::OknoPonownegoWczytaniaMapy( QWidget *parent ) :
    QDialog( parent ),
    ui( new Ui::OknoPonownegoWczytaniaMapy )
{
    ui->setupUi(this);
}

OknoPonownegoWczytaniaMapy::~OknoPonownegoWczytaniaMapy()
{
    delete ui;
}
