#ifndef OKNOPONOWNEGOWYZNACZENIASCIEZKI_H
#define OKNOPONOWNEGOWYZNACZENIASCIEZKI_H

#include <QDialog>

namespace Ui {
class OknoPonownegoWyznaczeniaSciezki;
}

class OknoPonownegoWyznaczeniaSciezki : public QDialog
{
        Q_OBJECT
        
    public:
        explicit OknoPonownegoWyznaczeniaSciezki( QWidget *parent = 0 );
        ~OknoPonownegoWyznaczeniaSciezki();
        
    private slots:

    private:
        Ui::OknoPonownegoWyznaczeniaSciezki *ui;
};

#endif // OKNOPONOWNEGOWYZNACZENIASCIEZKI_H
