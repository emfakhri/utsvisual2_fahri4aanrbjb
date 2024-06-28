/********************************************************************************
** Form generated from reading UI file 'klinikhewan.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KLINIKHEWAN_H
#define UI_KLINIKHEWAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_KlinikHewan
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *KlinikHewan)
    {
        if (KlinikHewan->objectName().isEmpty())
            KlinikHewan->setObjectName("KlinikHewan");
        KlinikHewan->resize(800, 600);
        centralwidget = new QWidget(KlinikHewan);
        centralwidget->setObjectName("centralwidget");
        KlinikHewan->setCentralWidget(centralwidget);
        menubar = new QMenuBar(KlinikHewan);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        KlinikHewan->setMenuBar(menubar);
        statusbar = new QStatusBar(KlinikHewan);
        statusbar->setObjectName("statusbar");
        KlinikHewan->setStatusBar(statusbar);

        retranslateUi(KlinikHewan);

        QMetaObject::connectSlotsByName(KlinikHewan);
    } // setupUi

    void retranslateUi(QMainWindow *KlinikHewan)
    {
        KlinikHewan->setWindowTitle(QCoreApplication::translate("KlinikHewan", "KlinikHewan", nullptr));
    } // retranslateUi

};

namespace Ui {
    class KlinikHewan: public Ui_KlinikHewan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KLINIKHEWAN_H
