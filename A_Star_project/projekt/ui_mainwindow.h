/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
//#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QPushButton *pbWyswietlSciezkeGraficznie;
    QPushButton *pbUsunNajkrotszaSciezke;
    QPushButton *pbWyznaczNajkrotszaSciezke;
    QPushButton *pbWyswietlMapeGraficznie;
    QPushButton *pbWyswietlMape;
    QPushButton *pbWczytajMape;
    QPushButton *pbZakonczProgram;
    QPushButton *pbUsunMape;
    QPushButton *pbWyswietlSciezke;
    QPushButton *pbZapiszSciezkeDoPliku;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(358, 355);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
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
        MainWindow->setPalette(palette);
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        MainWindow->setAutoFillBackground(false);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pbWyswietlSciezkeGraficznie = new QPushButton(centralWidget);
        pbWyswietlSciezkeGraficznie->setObjectName(QStringLiteral("pbWyswietlSciezkeGraficznie"));
        pbWyswietlSciezkeGraficznie->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1,   	stop:0 rgba(0, 224, 16, 255), stop:1 rgba(0, 64, 255, 255));\n"
"	color: #FFFF30;\n"
"	 border: 2px solid  #00A000;\n"
"     border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1,   	stop:0 rgba(0, 240, 30, 255), stop:1 rgba(0, 80, 255, 255));\n"
"	 border: 2px solid  #00A000;\n"
"     border-radius: 5px;\n"
"}"));

        gridLayout->addWidget(pbWyswietlSciezkeGraficznie, 5, 0, 1, 1);

        pbUsunNajkrotszaSciezke = new QPushButton(centralWidget);
        pbUsunNajkrotszaSciezke->setObjectName(QStringLiteral("pbUsunNajkrotszaSciezke"));
        pbUsunNajkrotszaSciezke->setMaximumSize(QSize(200, 16777215));
        pbUsunNajkrotszaSciezke->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1,   	stop:0 rgba(0, 224, 16, 255), stop:1 rgba(0, 64, 255, 255));\n"
"	color: #FFFF30;\n"
"	 border: 2px solid  #00A000;\n"
"     border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1,   	stop:0 rgba(0, 240, 30, 255), stop:1 rgba(0, 80, 255, 255));\n"
"	 border: 2px solid  #00A000;\n"
"     border-radius: 5px;\n"
"}"));

        gridLayout->addWidget(pbUsunNajkrotszaSciezke, 7, 0, 1, 1);

        pbWyznaczNajkrotszaSciezke = new QPushButton(centralWidget);
        pbWyznaczNajkrotszaSciezke->setObjectName(QStringLiteral("pbWyznaczNajkrotszaSciezke"));
        pbWyznaczNajkrotszaSciezke->setMaximumSize(QSize(200, 16777215));
        pbWyznaczNajkrotszaSciezke->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1,   	stop:0 rgba(0, 224, 16, 255), stop:1 rgba(0, 64, 255, 255));\n"
"	color: #FFFF30;\n"
"	 border: 2px solid  #00A000;\n"
"     border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1,   	stop:0 rgba(0, 240, 30, 255), stop:1 rgba(0, 80, 255, 255));\n"
"	 border: 2px solid  #00A000;\n"
"     border-radius: 5px;\n"
"}"));

        gridLayout->addWidget(pbWyznaczNajkrotszaSciezke, 3, 0, 1, 1);

        pbWyswietlMapeGraficznie = new QPushButton(centralWidget);
        pbWyswietlMapeGraficznie->setObjectName(QStringLiteral("pbWyswietlMapeGraficznie"));
        pbWyswietlMapeGraficznie->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1,   	stop:0 rgba(0, 224, 16, 255), stop:1 rgba(0, 64, 255, 255));\n"
"	color: #FFFF30;\n"
"	 border: 2px solid  #00A000;\n"
"     border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1,   	stop:0 rgba(0, 240, 30, 255), stop:1 rgba(0, 80, 255, 255));\n"
"	 border: 2px solid  #00A000;\n"
"     border-radius: 5px;\n"
"}"));

        gridLayout->addWidget(pbWyswietlMapeGraficznie, 2, 0, 1, 1);

        pbWyswietlMape = new QPushButton(centralWidget);
        pbWyswietlMape->setObjectName(QStringLiteral("pbWyswietlMape"));
        pbWyswietlMape->setMaximumSize(QSize(200, 16777215));
        pbWyswietlMape->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1,   	stop:0 rgba(0, 224, 16, 255), stop:1 rgba(0, 64, 255, 255));\n"
"	color: #FFFF30;\n"
"	 border: 2px solid  #00A000;\n"
"     border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1,   	stop:0 rgba(0, 240, 30, 255), stop:1 rgba(0, 80, 255, 255));\n"
"	 border: 2px solid  #00A000;\n"
"     border-radius: 5px;\n"
"}"));

        gridLayout->addWidget(pbWyswietlMape, 1, 0, 1, 1);

        pbWczytajMape = new QPushButton(centralWidget);
        pbWczytajMape->setObjectName(QStringLiteral("pbWczytajMape"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pbWczytajMape->sizePolicy().hasHeightForWidth());
        pbWczytajMape->setSizePolicy(sizePolicy1);
        pbWczytajMape->setMaximumSize(QSize(200, 16777215));
        QPalette palette1;
        QBrush brush9(QColor(255, 255, 48, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush9);
        QLinearGradient gradient(0, 0, 0, 1);
        gradient.setSpread(QGradient::PadSpread);
        gradient.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient.setColorAt(0, QColor(0, 224, 16, 255));
        gradient.setColorAt(1, QColor(0, 64, 255, 255));
        QBrush brush10(gradient);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush10);
        QBrush brush11(QColor(0, 85, 255, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush11);
        QBrush brush12(QColor(63, 127, 255, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush12);
        QBrush brush13(QColor(0, 42, 127, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush13);
        QBrush brush14(QColor(0, 56, 170, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush14);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush9);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush9);
        QLinearGradient gradient1(0, 0, 0, 1);
        gradient1.setSpread(QGradient::PadSpread);
        gradient1.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient1.setColorAt(0, QColor(0, 224, 16, 255));
        gradient1.setColorAt(1, QColor(0, 64, 255, 255));
        QBrush brush15(gradient1);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush15);
        QLinearGradient gradient2(0, 0, 0, 1);
        gradient2.setSpread(QGradient::PadSpread);
        gradient2.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient2.setColorAt(0, QColor(0, 224, 16, 255));
        gradient2.setColorAt(1, QColor(0, 64, 255, 255));
        QBrush brush16(gradient2);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush16);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush17(QColor(127, 170, 255, 255));
        brush17.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush17);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush9);
        QLinearGradient gradient3(0, 0, 0, 1);
        gradient3.setSpread(QGradient::PadSpread);
        gradient3.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient3.setColorAt(0, QColor(0, 224, 16, 255));
        gradient3.setColorAt(1, QColor(0, 64, 255, 255));
        QBrush brush18(gradient3);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush18);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush13);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush14);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush9);
        QLinearGradient gradient4(0, 0, 0, 1);
        gradient4.setSpread(QGradient::PadSpread);
        gradient4.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient4.setColorAt(0, QColor(0, 224, 16, 255));
        gradient4.setColorAt(1, QColor(0, 64, 255, 255));
        QBrush brush19(gradient4);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush19);
        QLinearGradient gradient5(0, 0, 0, 1);
        gradient5.setSpread(QGradient::PadSpread);
        gradient5.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient5.setColorAt(0, QColor(0, 224, 16, 255));
        gradient5.setColorAt(1, QColor(0, 64, 255, 255));
        QBrush brush20(gradient5);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush20);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush17);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush9);
        QLinearGradient gradient6(0, 0, 0, 1);
        gradient6.setSpread(QGradient::PadSpread);
        gradient6.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient6.setColorAt(0, QColor(0, 224, 16, 255));
        gradient6.setColorAt(1, QColor(0, 64, 255, 255));
        QBrush brush21(gradient6);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush21);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush13);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush14);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush9);
        QLinearGradient gradient7(0, 0, 0, 1);
        gradient7.setSpread(QGradient::PadSpread);
        gradient7.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient7.setColorAt(0, QColor(0, 224, 16, 255));
        gradient7.setColorAt(1, QColor(0, 64, 255, 255));
        QBrush brush22(gradient7);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush22);
        QLinearGradient gradient8(0, 0, 0, 1);
        gradient8.setSpread(QGradient::PadSpread);
        gradient8.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient8.setColorAt(0, QColor(0, 224, 16, 255));
        gradient8.setColorAt(1, QColor(0, 64, 255, 255));
        QBrush brush23(gradient8);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush23);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        pbWczytajMape->setPalette(palette1);
        pbWczytajMape->setLayoutDirection(Qt::LeftToRight);
        pbWczytajMape->setAutoFillBackground(false);
        pbWczytajMape->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1,   	stop:0 rgba(0, 224, 16, 255), stop:1 rgba(0, 64, 255, 255));\n"
"	color: #FFFF30;\n"
"	 border: 2px solid  #00A000;\n"
"     border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1,   	stop:0 rgba(0, 240, 30, 255), stop:1 rgba(0, 80, 255, 255));\n"
"	 border: 2px solid  #00A000;\n"
"     border-radius: 5px;\n"
"}"));

        gridLayout->addWidget(pbWczytajMape, 0, 0, 1, 1);

        pbZakonczProgram = new QPushButton(centralWidget);
        pbZakonczProgram->setObjectName(QStringLiteral("pbZakonczProgram"));
        pbZakonczProgram->setMaximumSize(QSize(200, 16777215));
        pbZakonczProgram->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1,   	stop:0 rgba(0, 224, 16, 255), stop:1 rgba(0, 64, 255, 255));\n"
"	color: #FFFF30;\n"
"	 border: 2px solid  #00A000;\n"
"     border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1,   	stop:0 rgba(0, 240, 30, 255), stop:1 rgba(0, 80, 255, 255));\n"
"	 border: 2px solid  #00A000;\n"
"     border-radius: 5px;\n"
"}"));

        gridLayout->addWidget(pbZakonczProgram, 9, 0, 1, 1);

        pbUsunMape = new QPushButton(centralWidget);
        pbUsunMape->setObjectName(QStringLiteral("pbUsunMape"));
        pbUsunMape->setMaximumSize(QSize(200, 16777215));
        pbUsunMape->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1,   	stop:0 rgba(0, 224, 16, 255), stop:1 rgba(0, 64, 255, 255));\n"
"	color: #FFFF30;\n"
"	 border: 2px solid  #00A000;\n"
"     border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1,   	stop:0 rgba(0, 240, 30, 255), stop:1 rgba(0, 80, 255, 255));\n"
"	 border: 2px solid  #00A000;\n"
"     border-radius: 5px;\n"
"}"));

        gridLayout->addWidget(pbUsunMape, 8, 0, 1, 1);

        pbWyswietlSciezke = new QPushButton(centralWidget);
        pbWyswietlSciezke->setObjectName(QStringLiteral("pbWyswietlSciezke"));
        pbWyswietlSciezke->setMaximumSize(QSize(200, 16777215));
        pbWyswietlSciezke->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1,   	stop:0 rgba(0, 224, 16, 255), stop:1 rgba(0, 64, 255, 255));\n"
"	color: #FFFF30;\n"
"	 border: 2px solid  #00A000;\n"
"     border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1,   	stop:0 rgba(0, 240, 30, 255), stop:1 rgba(0, 80, 255, 255));\n"
"	 border: 2px solid  #00A000;\n"
"     border-radius: 5px;\n"
"}"));

        gridLayout->addWidget(pbWyswietlSciezke, 4, 0, 1, 1);

        pbZapiszSciezkeDoPliku = new QPushButton(centralWidget);
        pbZapiszSciezkeDoPliku->setObjectName(QStringLiteral("pbZapiszSciezkeDoPliku"));
        pbZapiszSciezkeDoPliku->setMaximumSize(QSize(200, 16777215));
        pbZapiszSciezkeDoPliku->setStyleSheet(QLatin1String("QPushButton {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1,   	stop:0 rgba(0, 224, 16, 255), stop:1 rgba(0, 64, 255, 255));\n"
"	color: #FFFF30;\n"
"	 border: 2px solid  #00A000;\n"
"     border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1,   	stop:0 rgba(0, 240, 30, 255), stop:1 rgba(0, 80, 255, 255));\n"
"	 border: 2px solid  #00A000;\n"
"     border-radius: 5px;\n"
"}"));

        gridLayout->addWidget(pbZapiszSciezkeDoPliku, 6, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 358, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Algorytm A *", 0));
        pbWyswietlSciezkeGraficznie->setText(QApplication::translate("MainWindow", "Wy\305\233wietl \305\233cie\305\274k\304\231 graficznie", 0));
        pbUsunNajkrotszaSciezke->setText(QApplication::translate("MainWindow", "Usu\305\204 najkr\303\263tsz\304\205 \305\233cie\305\274k\304\231", 0));
        pbWyznaczNajkrotszaSciezke->setText(QApplication::translate("MainWindow", "Wyznacz najkr\303\263tsz\304\205 \305\233cie\305\274k\304\231", 0));
        pbWyswietlMapeGraficznie->setText(QApplication::translate("MainWindow", "Wy\305\233wietl map\304\231 graficznie", 0));
        pbWyswietlMape->setText(QApplication::translate("MainWindow", "Wy\305\233wietl map\304\231", 0));
        pbWczytajMape->setText(QApplication::translate("MainWindow", "Wczytaj map\304\231", 0));
        pbZakonczProgram->setText(QApplication::translate("MainWindow", "Zako\305\204cz program", 0));
        pbUsunMape->setText(QApplication::translate("MainWindow", "Usu\305\204 map\304\231", 0));
        pbWyswietlSciezke->setText(QApplication::translate("MainWindow", "Wy\305\233wietl \305\233cie\305\274k\304\231", 0));
        pbZapiszSciezkeDoPliku->setText(QApplication::translate("MainWindow", "Zapisz \305\233cie\305\274k\304\231 do pliku", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
