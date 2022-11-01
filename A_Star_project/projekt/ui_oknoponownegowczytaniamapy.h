/********************************************************************************
** Form generated from reading UI file 'oknoponownegowczytaniamapy.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OKNOPONOWNEGOWCZYTANIAMAPY_H
#define UI_OKNOPONOWNEGOWCZYTANIAMAPY_H

#include <QtCore/QVariant>
//#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_OknoPonownegoWczytaniaMapy
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pbTak;
    QPushButton *pbNie;

    void setupUi(QDialog *OknoPonownegoWczytaniaMapy)
    {
        if (OknoPonownegoWczytaniaMapy->objectName().isEmpty())
            OknoPonownegoWczytaniaMapy->setObjectName(QStringLiteral("OknoPonownegoWczytaniaMapy"));
        OknoPonownegoWczytaniaMapy->resize(209, 122);
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
        OknoPonownegoWczytaniaMapy->setPalette(palette);
        verticalLayout = new QVBoxLayout(OknoPonownegoWczytaniaMapy);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(OknoPonownegoWczytaniaMapy);
        label->setObjectName(QStringLiteral("label"));
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pbTak = new QPushButton(OknoPonownegoWczytaniaMapy);
        pbTak->setObjectName(QStringLiteral("pbTak"));
        pbTak->setStyleSheet(QLatin1String("QPushButton {\n"
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

        horizontalLayout->addWidget(pbTak);

        pbNie = new QPushButton(OknoPonownegoWczytaniaMapy);
        pbNie->setObjectName(QStringLiteral("pbNie"));
        pbNie->setStyleSheet(QLatin1String("QPushButton {\n"
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

        horizontalLayout->addWidget(pbNie);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(OknoPonownegoWczytaniaMapy);
        QObject::connect(pbTak, SIGNAL(clicked()), OknoPonownegoWczytaniaMapy, SLOT(accept()));
        QObject::connect(pbNie, SIGNAL(clicked()), OknoPonownegoWczytaniaMapy, SLOT(reject()));

        QMetaObject::connectSlotsByName(OknoPonownegoWczytaniaMapy);
    } // setupUi

    void retranslateUi(QDialog *OknoPonownegoWczytaniaMapy)
    {
        OknoPonownegoWczytaniaMapy->setWindowTitle(QApplication::translate("OknoPonownegoWczytaniaMapy", "Ponowne wczytanie mapy", 0));
        label->setText(QApplication::translate("OknoPonownegoWczytaniaMapy", "W bazie istnieje juz wczytana mapa. Czy pomimo tego chcesz wczytac nowa mape?", 0));
        pbTak->setText(QApplication::translate("OknoPonownegoWczytaniaMapy", "Tak", 0));
        pbNie->setText(QApplication::translate("OknoPonownegoWczytaniaMapy", "Nie", 0));
    } // retranslateUi

};

namespace Ui {
    class OknoPonownegoWczytaniaMapy: public Ui_OknoPonownegoWczytaniaMapy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OKNOPONOWNEGOWCZYTANIAMAPY_H
