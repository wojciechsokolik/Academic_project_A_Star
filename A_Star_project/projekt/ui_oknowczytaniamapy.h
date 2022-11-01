/********************************************************************************
** Form generated from reading UI file 'oknowczytaniamapy.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OKNOWCZYTANIAMAPY_H
#define UI_OKNOWCZYTANIAMAPY_H

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

class Ui_OknoWczytaniaMapy
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *lbNazwaPlikuZMapa;
    QLineEdit *leNazwaPlikuZMapa;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *OknoWczytaniaMapy)
    {
        if (OknoWczytaniaMapy->objectName().isEmpty())
            OknoWczytaniaMapy->setObjectName(QStringLiteral("OknoWczytaniaMapy"));
        OknoWczytaniaMapy->resize(262, 110);
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
        OknoWczytaniaMapy->setPalette(palette);
        verticalLayout = new QVBoxLayout(OknoWczytaniaMapy);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lbNazwaPlikuZMapa = new QLabel(OknoWczytaniaMapy);
        lbNazwaPlikuZMapa->setObjectName(QStringLiteral("lbNazwaPlikuZMapa"));

        horizontalLayout->addWidget(lbNazwaPlikuZMapa);

        leNazwaPlikuZMapa = new QLineEdit(OknoWczytaniaMapy);
        leNazwaPlikuZMapa->setObjectName(QStringLiteral("leNazwaPlikuZMapa"));

        horizontalLayout->addWidget(leNazwaPlikuZMapa);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(OknoWczytaniaMapy);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        buttonBox->setMinimumSize(QSize(0, 0));
        buttonBox->setBaseSize(QSize(0, 0));
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
        buttonBox->setCenterButtons(false);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(OknoWczytaniaMapy);
        QObject::connect(buttonBox, SIGNAL(accepted()), OknoWczytaniaMapy, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), OknoWczytaniaMapy, SLOT(reject()));

        QMetaObject::connectSlotsByName(OknoWczytaniaMapy);
    } // setupUi

    void retranslateUi(QDialog *OknoWczytaniaMapy)
    {
        OknoWczytaniaMapy->setWindowTitle(QApplication::translate("OknoWczytaniaMapy", "Plik z map\304\205", 0));
        lbNazwaPlikuZMapa->setText(QApplication::translate("OknoWczytaniaMapy", "Nazwa pliku z map\304\205:", 0));
    } // retranslateUi

};

namespace Ui {
    class OknoWczytaniaMapy: public Ui_OknoWczytaniaMapy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OKNOWCZYTANIAMAPY_H
