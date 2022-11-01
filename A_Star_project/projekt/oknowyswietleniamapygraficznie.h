#ifndef OKNOWYSWIETLENIAMAPYGRAFICZNIE_H
#define OKNOWYSWIETLENIAMAPYGRAFICZNIE_H

#include <QDialog>
#include "mainwindow.h"

namespace Ui {
class OknoWyswietleniaMapyGraficznie;
}

class OknoWyswietleniaMapyGraficznie : public QDialog
{
        Q_OBJECT
        
    public:
        explicit OknoWyswietleniaMapyGraficznie( QWidget *parent = 0 );
        ~OknoWyswietleniaMapyGraficznie();

        
    private:
        Ui::OknoWyswietleniaMapyGraficznie *ui;
};

#endif // OKNOWYSWIETLENIAMAPYGRAFICZNIE_H
