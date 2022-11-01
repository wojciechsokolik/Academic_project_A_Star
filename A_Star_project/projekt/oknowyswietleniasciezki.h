#ifndef OKNOWYSWIETLENIASCIEZKI_H
#define OKNOWYSWIETLENIASCIEZKI_H

#include <QDialog>
#include "mainwindow.h"

namespace Ui {
class OknoWyswietleniaSciezki;
}

class OknoWyswietleniaSciezki : public QDialog
{
        Q_OBJECT
        
    public:
        explicit OknoWyswietleniaSciezki( QWidget *parent = 0 );
        ~OknoWyswietleniaSciezki();
        
    private:
        Ui::OknoWyswietleniaSciezki *ui;
};

#endif // OKNOWYSWIETLENIASCIEZKI_H
