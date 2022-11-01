#ifndef OKNOWCZYTANIAMAPY_H
#define OKNOWCZYTANIAMAPY_H

#include <QDialog>
#include "mainwindow.h"

using namespace std;

namespace Ui {
class OknoWczytaniaMapy;
}

class OknoWczytaniaMapy : public QDialog
{
        Q_OBJECT
        
    public:
        explicit OknoWczytaniaMapy( QWidget *parent );
        ~OknoWczytaniaMapy();
        
    private slots:

        void on_buttonBox_accepted();

    private:
        Ui::OknoWczytaniaMapy *ui;
};

#endif // OKNOWCZYTANIAMAPY_H
