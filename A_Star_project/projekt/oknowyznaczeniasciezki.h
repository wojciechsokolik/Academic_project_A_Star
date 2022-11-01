#ifndef OKNOWYZNACZENIASCIEZKI_H
#define OKNOWYZNACZENIASCIEZKI_H

#include <QDialog>
#include "mainwindow.h"
#include <QIntValidator>

namespace Ui {
class OknoWyznaczeniaSciezki;
}

class OknoWyznaczeniaSciezki : public QDialog
{
        Q_OBJECT
        
    public:
        explicit OknoWyznaczeniaSciezki( QWidget *parent = 0 );
        ~OknoWyznaczeniaSciezki();
        
    private slots:
        void on_buttonBox_accepted();

    private:
        Ui::OknoWyznaczeniaSciezki *ui;
};

#endif // OKNOWYZNACZENIASCIEZKI_H
