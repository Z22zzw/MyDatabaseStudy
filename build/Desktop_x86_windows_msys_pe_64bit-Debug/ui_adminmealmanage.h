/********************************************************************************
** Form generated from reading UI file 'adminmealmanage.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINMEALMANAGE_H
#define UI_ADMINMEALMANAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminMealmanage
{
public:
    QTableWidget *tableWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QWidget *adminMealmanage)
    {
        if (adminMealmanage->objectName().isEmpty())
            adminMealmanage->setObjectName("adminMealmanage");
        adminMealmanage->resize(590, 394);
        tableWidget = new QTableWidget(adminMealmanage);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (tableWidget->rowCount() < 6)
            tableWidget->setRowCount(6);
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
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(100, 30, 371, 251));
        QFont font;
        font.setPointSize(15);
        tableWidget->setFont(font);
        pushButton = new QPushButton(adminMealmanage);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(170, 310, 80, 18));
        pushButton_2 = new QPushButton(adminMealmanage);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(260, 310, 80, 18));
        pushButton_3 = new QPushButton(adminMealmanage);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(350, 310, 80, 18));
        pushButton_4 = new QPushButton(adminMealmanage);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(450, 310, 80, 18));

        retranslateUi(adminMealmanage);

        QMetaObject::connectSlotsByName(adminMealmanage);
    } // setupUi

    void retranslateUi(QWidget *adminMealmanage)
    {
        adminMealmanage->setWindowTitle(QCoreApplication::translate("adminMealmanage", "Form", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem->setText(QCoreApplication::translate("adminMealmanage", "\351\243\237\347\211\251\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("adminMealmanage", "\344\273\267\346\240\274", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("adminMealmanage", "\351\243\237\347\211\2511", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("adminMealmanage", "\351\243\237\347\211\2512", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("adminMealmanage", "\351\243\237\347\211\2513", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("adminMealmanage", "\351\243\237\347\211\2514", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("adminMealmanage", "\351\243\237\347\211\2515", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("adminMealmanage", "\351\243\237\347\211\2516", nullptr));
        pushButton->setText(QCoreApplication::translate("adminMealmanage", "\346\267\273\345\212\240", nullptr));
        pushButton_2->setText(QCoreApplication::translate("adminMealmanage", "\344\277\256\346\224\271", nullptr));
        pushButton_3->setText(QCoreApplication::translate("adminMealmanage", "\345\210\240\351\231\244", nullptr));
        pushButton_4->setText(QCoreApplication::translate("adminMealmanage", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminMealmanage: public Ui_adminMealmanage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINMEALMANAGE_H
