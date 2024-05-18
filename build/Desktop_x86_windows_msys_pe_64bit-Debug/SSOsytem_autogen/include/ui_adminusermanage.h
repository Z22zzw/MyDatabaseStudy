/********************************************************************************
** Form generated from reading UI file 'adminusermanage.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINUSERMANAGE_H
#define UI_ADMINUSERMANAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminUserManage
{
public:
    QTableWidget *tableWidget;
    QPushButton *delUser;
    QPushButton *modiUser;
    QPushButton *getBack;
    QPushButton *modiUser_2;

    void setupUi(QWidget *AdminUserManage)
    {
        if (AdminUserManage->objectName().isEmpty())
            AdminUserManage->setObjectName("AdminUserManage");
        AdminUserManage->resize(659, 400);
        tableWidget = new QTableWidget(AdminUserManage);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (tableWidget->rowCount() < 10)
            tableWidget->setRowCount(10);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(6, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(7, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(8, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(9, __qtablewidgetitem12);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(170, 50, 271, 241));
        QFont font;
        font.setPointSize(12);
        tableWidget->setFont(font);
        tableWidget->setAutoScrollMargin(20);
        delUser = new QPushButton(AdminUserManage);
        delUser->setObjectName("delUser");
        delUser->setGeometry(QRect(430, 330, 80, 18));
        modiUser = new QPushButton(AdminUserManage);
        modiUser->setObjectName("modiUser");
        modiUser->setGeometry(QRect(320, 330, 80, 18));
        getBack = new QPushButton(AdminUserManage);
        getBack->setObjectName("getBack");
        getBack->setGeometry(QRect(540, 330, 80, 18));
        modiUser_2 = new QPushButton(AdminUserManage);
        modiUser_2->setObjectName("modiUser_2");
        modiUser_2->setGeometry(QRect(220, 330, 80, 18));

        retranslateUi(AdminUserManage);

        QMetaObject::connectSlotsByName(AdminUserManage);
    } // setupUi

    void retranslateUi(QWidget *AdminUserManage)
    {
        AdminUserManage->setWindowTitle(QCoreApplication::translate("AdminUserManage", "Form", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("AdminUserManage", "\350\264\246\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("AdminUserManage", "\345\257\206\347\240\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("AdminUserManage", "\344\270\212\346\254\241\347\231\273\351\231\206\346\227\266\351\227\264", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("AdminUserManage", "\347\224\250\346\210\2671", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("AdminUserManage", "\347\224\250\346\210\2672", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("AdminUserManage", "\347\224\250\346\210\2673", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("AdminUserManage", "\347\224\250\346\210\2674", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("AdminUserManage", "\347\224\250\346\210\2675", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("AdminUserManage", "\347\224\250\346\210\2676", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("AdminUserManage", "\347\224\250\346\210\2677", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->verticalHeaderItem(7);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("AdminUserManage", "\347\224\250\346\210\2678", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->verticalHeaderItem(8);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("AdminUserManage", "\347\224\250\346\210\2679", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->verticalHeaderItem(9);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("AdminUserManage", "\347\224\250\346\210\26710", nullptr));
        delUser->setText(QCoreApplication::translate("AdminUserManage", "\345\210\240\351\231\244\347\224\250\346\210\267", nullptr));
        modiUser->setText(QCoreApplication::translate("AdminUserManage", "\344\277\256\346\224\271\347\224\250\346\210\267", nullptr));
        getBack->setText(QCoreApplication::translate("AdminUserManage", "\345\256\211\345\205\250\351\200\200\345\207\272", nullptr));
        modiUser_2->setText(QCoreApplication::translate("AdminUserManage", "\346\267\273\345\212\240\347\224\250\346\210\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminUserManage: public Ui_AdminUserManage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINUSERMANAGE_H
