/********************************************************************************
** Form generated from reading UI file 'oknowyswietleniasciezki.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OKNOWYSWIETLENIASCIEZKI_H
#define UI_OKNOWYSWIETLENIASCIEZKI_H

#include <QtCore/QVariant>
//#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_OknoWyswietleniaSciezki
{
public:
    QVBoxLayout *verticalLayout;
    QTextBrowser *tbNajkrotszaSciezka;

    void setupUi(QDialog *OknoWyswietleniaSciezki)
    {
        if (OknoWyswietleniaSciezki->objectName().isEmpty())
            OknoWyswietleniaSciezki->setObjectName(QStringLiteral("OknoWyswietleniaSciezki"));
        OknoWyswietleniaSciezki->resize(612, 453);
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
        OknoWyswietleniaSciezki->setPalette(palette);
        verticalLayout = new QVBoxLayout(OknoWyswietleniaSciezki);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tbNajkrotszaSciezka = new QTextBrowser(OknoWyswietleniaSciezki);
        tbNajkrotszaSciezka->setObjectName(QStringLiteral("tbNajkrotszaSciezka"));
        QFont font;
        font.setFamily(QStringLiteral("Lucida Console"));
        tbNajkrotszaSciezka->setFont(font);
        tbNajkrotszaSciezka->setLineWrapMode(QTextEdit::NoWrap);

        verticalLayout->addWidget(tbNajkrotszaSciezka);


        retranslateUi(OknoWyswietleniaSciezki);

        QMetaObject::connectSlotsByName(OknoWyswietleniaSciezki);
    } // setupUi

    void retranslateUi(QDialog *OknoWyswietleniaSciezki)
    {
        OknoWyswietleniaSciezki->setWindowTitle(QApplication::translate("OknoWyswietleniaSciezki", "Najkr\303\263tsza \305\233cie\305\274ka", 0));
    } // retranslateUi

};

namespace Ui {
    class OknoWyswietleniaSciezki: public Ui_OknoWyswietleniaSciezki {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OKNOWYSWIETLENIASCIEZKI_H
