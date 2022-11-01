/********************************************************************************
** Form generated from reading UI file 'oknowyznaczeniasciezki.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OKNOWYZNACZENIASCIEZKI_H
#define UI_OKNOWYZNACZENIASCIEZKI_H

#include <QtCore/QVariant>
//#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_OknoWyznaczeniaSciezki
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *lbWspolrzednaIStartu;
    QLineEdit *leWspolrzednaIStartu;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lbWspolrzednaJStartu;
    QLineEdit *leWspolrzednaJStartu;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lbWspolrzednaIMety;
    QLineEdit *leWspolrzednaIMety;
    QHBoxLayout *horizontalLayout_4;
    QLabel *lbWspolrzednaJMety;
    QLineEdit *leWspolrzednaJMety;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *OknoWyznaczeniaSciezki)
    {
        if (OknoWyznaczeniaSciezki->objectName().isEmpty())
            OknoWyznaczeniaSciezki->setObjectName(QStringLiteral("OknoWyznaczeniaSciezki"));
        OknoWyznaczeniaSciezki->resize(303, 211);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(150, 150, 150, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(225, 225, 225, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(187, 187, 187, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(75, 75, 75, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(100, 100, 100, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush7(QColor(202, 202, 202, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        OknoWyznaczeniaSciezki->setPalette(palette);
        verticalLayout = new QVBoxLayout(OknoWyznaczeniaSciezki);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lbWspolrzednaIStartu = new QLabel(OknoWyznaczeniaSciezki);
        lbWspolrzednaIStartu->setObjectName(QStringLiteral("lbWspolrzednaIStartu"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lbWspolrzednaIStartu->sizePolicy().hasHeightForWidth());
        lbWspolrzednaIStartu->setSizePolicy(sizePolicy);
        lbWspolrzednaIStartu->setMaximumSize(QSize(120, 16777215));

        horizontalLayout->addWidget(lbWspolrzednaIStartu);

        leWspolrzednaIStartu = new QLineEdit(OknoWyznaczeniaSciezki);
        leWspolrzednaIStartu->setObjectName(QStringLiteral("leWspolrzednaIStartu"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(leWspolrzednaIStartu->sizePolicy().hasHeightForWidth());
        leWspolrzednaIStartu->setSizePolicy(sizePolicy1);
        leWspolrzednaIStartu->setMaximumSize(QSize(50, 16777215));
        leWspolrzednaIStartu->setDragEnabled(false);

        horizontalLayout->addWidget(leWspolrzednaIStartu);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lbWspolrzednaJStartu = new QLabel(OknoWyznaczeniaSciezki);
        lbWspolrzednaJStartu->setObjectName(QStringLiteral("lbWspolrzednaJStartu"));
        sizePolicy.setHeightForWidth(lbWspolrzednaJStartu->sizePolicy().hasHeightForWidth());
        lbWspolrzednaJStartu->setSizePolicy(sizePolicy);
        lbWspolrzednaJStartu->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_2->addWidget(lbWspolrzednaJStartu);

        leWspolrzednaJStartu = new QLineEdit(OknoWyznaczeniaSciezki);
        leWspolrzednaJStartu->setObjectName(QStringLiteral("leWspolrzednaJStartu"));
        sizePolicy1.setHeightForWidth(leWspolrzednaJStartu->sizePolicy().hasHeightForWidth());
        leWspolrzednaJStartu->setSizePolicy(sizePolicy1);
        leWspolrzednaJStartu->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_2->addWidget(leWspolrzednaJStartu);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        lbWspolrzednaIMety = new QLabel(OknoWyznaczeniaSciezki);
        lbWspolrzednaIMety->setObjectName(QStringLiteral("lbWspolrzednaIMety"));
        sizePolicy.setHeightForWidth(lbWspolrzednaIMety->sizePolicy().hasHeightForWidth());
        lbWspolrzednaIMety->setSizePolicy(sizePolicy);
        lbWspolrzednaIMety->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_3->addWidget(lbWspolrzednaIMety);

        leWspolrzednaIMety = new QLineEdit(OknoWyznaczeniaSciezki);
        leWspolrzednaIMety->setObjectName(QStringLiteral("leWspolrzednaIMety"));
        sizePolicy1.setHeightForWidth(leWspolrzednaIMety->sizePolicy().hasHeightForWidth());
        leWspolrzednaIMety->setSizePolicy(sizePolicy1);
        leWspolrzednaIMety->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_3->addWidget(leWspolrzednaIMety);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        lbWspolrzednaJMety = new QLabel(OknoWyznaczeniaSciezki);
        lbWspolrzednaJMety->setObjectName(QStringLiteral("lbWspolrzednaJMety"));
        sizePolicy.setHeightForWidth(lbWspolrzednaJMety->sizePolicy().hasHeightForWidth());
        lbWspolrzednaJMety->setSizePolicy(sizePolicy);
        lbWspolrzednaJMety->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_4->addWidget(lbWspolrzednaJMety);

        leWspolrzednaJMety = new QLineEdit(OknoWyznaczeniaSciezki);
        leWspolrzednaJMety->setObjectName(QStringLiteral("leWspolrzednaJMety"));
        sizePolicy1.setHeightForWidth(leWspolrzednaJMety->sizePolicy().hasHeightForWidth());
        leWspolrzednaJMety->setSizePolicy(sizePolicy1);
        leWspolrzednaJMety->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_4->addWidget(leWspolrzednaJMety);


        verticalLayout->addLayout(horizontalLayout_4);

        buttonBox = new QDialogButtonBox(OknoWyznaczeniaSciezki);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1,   	stop:0 rgba(0, 224, 16, 255), stop:1 rgba(0, 64, 255, 255));\n"
"	color: #FFFF30;\n"
"	 border: 2px solid  #00A000;\n"
"     border-radius: 5px;\n"
"	 width: 50;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1,   	stop:0 rgba(0, 240, 30, 255), stop:1 rgba(0, 80, 255, 255));\n"
"	 border: 2px solid  #00A000;\n"
"     border-radius: 5px;\n"
"}\n"
"\n"
""));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        buttonBox->raise();

        retranslateUi(OknoWyznaczeniaSciezki);
        QObject::connect(buttonBox, SIGNAL(accepted()), OknoWyznaczeniaSciezki, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), OknoWyznaczeniaSciezki, SLOT(reject()));

        QMetaObject::connectSlotsByName(OknoWyznaczeniaSciezki);
    } // setupUi

    void retranslateUi(QDialog *OknoWyznaczeniaSciezki)
    {
        OknoWyznaczeniaSciezki->setWindowTitle(QApplication::translate("OknoWyznaczeniaSciezki", "Wsp\303\263\305\202rz\304\231dne punkt\303\263w", 0));
        lbWspolrzednaIStartu->setText(QApplication::translate("OknoWyznaczeniaSciezki", "Wsp\303\263\305\202rz\304\231dna I startu:", 0));
        lbWspolrzednaJStartu->setText(QApplication::translate("OknoWyznaczeniaSciezki", "Wsp\303\263\305\202rz\304\231dna J startu:", 0));
        lbWspolrzednaIMety->setText(QApplication::translate("OknoWyznaczeniaSciezki", "Wsp\303\263\305\202rz\304\231dna I mety:", 0));
        lbWspolrzednaJMety->setText(QApplication::translate("OknoWyznaczeniaSciezki", "Wsp\303\263\305\202rz\304\231dna J mety:", 0));
    } // retranslateUi

};

namespace Ui {
    class OknoWyznaczeniaSciezki: public Ui_OknoWyznaczeniaSciezki {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OKNOWYZNACZENIASCIEZKI_H
