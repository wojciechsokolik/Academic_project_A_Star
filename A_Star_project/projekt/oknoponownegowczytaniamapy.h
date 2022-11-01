#ifndef OKNOPONOWNEGOWCZYTANIAMAPY_H
#define OKNOPONOWNEGOWCZYTANIAMAPY_H

#include <QDialog>

namespace Ui {
class OknoPonownegoWczytaniaMapy;
}

class OknoPonownegoWczytaniaMapy : public QDialog
{
        Q_OBJECT
        
    public:
        explicit OknoPonownegoWczytaniaMapy( QWidget *parent = 0 );
        ~OknoPonownegoWczytaniaMapy();
        
    private:
        Ui::OknoPonownegoWczytaniaMapy *ui;
};

#endif // OKNOPONOWNEGOWCZYTANIAMAPY_H
