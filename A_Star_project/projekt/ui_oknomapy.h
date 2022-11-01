/********************************************************************************
** Form generated from reading UI file 'oknomapy.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OKNOMAPY_H
#define UI_OKNOMAPY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_OknoMapy
{
public:
    QVBoxLayout *verticalLayout;
    QGraphicsView *graphicsView;

    void setupUi(QDialog *OknoMapy)
    {
        if (OknoMapy->objectName().isEmpty())
            OknoMapy->setObjectName(QStringLiteral("OknoMapy"));
        OknoMapy->resize(673, 478);
        verticalLayout = new QVBoxLayout(OknoMapy);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        graphicsView = new QGraphicsView(OknoMapy);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));

        verticalLayout->addWidget(graphicsView);


        retranslateUi(OknoMapy);

        QMetaObject::connectSlotsByName(OknoMapy);
    } // setupUi

    void retranslateUi(QDialog *OknoMapy)
    {
        OknoMapy->setWindowTitle(QApplication::translate("OknoMapy", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class OknoMapy: public Ui_OknoMapy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OKNOMAPY_H
