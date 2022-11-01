#ifndef OKNOWYSWIETLENIASCIEZKIGRAFICZNIE_H
#define OKNOWYSWIETLENIASCIEZKIGRAFICZNIE_H

#include <QDialog>
#include "mainwindow.h"

namespace Ui {
class OknoWyswietleniaSciezkiGraficznie;
}

class OknoWyswietleniaSciezkiGraficznie : public QDialog
{
        Q_OBJECT
        
    public:
        explicit OknoWyswietleniaSciezkiGraficznie( QWidget *parent = 0 );
        ~OknoWyswietleniaSciezkiGraficznie();
        
    private:
        Ui::OknoWyswietleniaSciezkiGraficznie *ui;
};

#endif // OKNOWYSWIETLENIASCIEZKIGRAFICZNIE_H
