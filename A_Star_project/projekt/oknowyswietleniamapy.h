#ifndef OKNOWYSWIETLENIAMAPY_H
#define OKNOWYSWIETLENIAMAPY_H

#include <QDialog>
#include "mainwindow.h"

using namespace std;

namespace Ui {
class OknoWyswietleniaMapy;
}

class OknoWyswietleniaMapy : public QDialog
{
        Q_OBJECT
        
    public:
        explicit OknoWyswietleniaMapy( QWidget *parent = 0 );
        ~OknoWyswietleniaMapy();
        
    private slots:

    private:
        Ui::OknoWyswietleniaMapy *ui;
};

#endif // OKNOWYSWIETLENIAMAPY_H
