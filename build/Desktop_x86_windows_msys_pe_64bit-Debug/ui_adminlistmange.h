/********************************************************************************
** Form generated from reading UI file 'adminlistmange.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINLISTMANGE_H
#define UI_ADMINLISTMANGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminListMange
{
public:
    QTableWidget *tableWidget;
    QPushButton *modiUser_2;
    QPushButton *getBack;
    QPushButton *modiUser;
    QPushButton *delUser;

    void setupUi(QWidget *AdminListMange)
    {
        if (AdminListMange->objectName().isEmpty())
            AdminListMange->setObjectName("AdminListMange");
        AdminListMange->resize(650, 396);
        tableWidget = new QTableWidget(AdminListMange);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(100, 30, 381, 261));
        modiUser_2 = new QPushButton(AdminListMange);
        modiUser_2->setObjectName("modiUser_2");
        modiUser_2->setGeometry(QRect(190, 330, 80, 18));
        getBack = new QPushButton(AdminListMange);
        getBack->setObjectName("getBack");
        getBack->setGeometry(QRect(510, 330, 80, 18));
        modiUser = new QPushButton(AdminListMange);
        modiUser->setObjectName("modiUser");
        modiUser->setGeometry(QRect(290, 330, 80, 18));
        delUser = new QPushButton(AdminListMange);
        delUser->setObjectName("delUser");
        delUser->setGeometry(QRect(400, 330, 80, 18));

        retranslateUi(AdminListMange);

        QMetaObject::connectSlotsByName(AdminListMange);
    } // setupUi

    void retranslateUi(QWidget *AdminListMange)
    {
        AdminListMange->setWindowTitle(QCoreApplication::translate("AdminListMange", "Form", nullptr));
        modiUser_2->setText(QCoreApplication::translate("AdminListMange", "\346\267\273\345\212\240\350\256\242\345\215\225", nullptr));
        getBack->setText(QCoreApplication::translate("AdminListMange", "\345\256\211\345\205\250\350\277\224\345\233\236", nullptr));
        modiUser->setText(QCoreApplication::translate("AdminListMange", "\344\277\256\346\224\271\350\256\242\345\215\225", nullptr));
        delUser->setText(QCoreApplication::translate("AdminListMange", "\345\210\240\351\231\244\350\256\242\345\215\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminListMange: public Ui_AdminListMange {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINLISTMANGE_H
