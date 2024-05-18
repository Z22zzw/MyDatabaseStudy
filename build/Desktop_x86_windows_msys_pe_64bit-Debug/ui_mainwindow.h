/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QLabel *label;
    QLineEdit *accountLine;
    QLabel *label_2;
    QLineEdit *passwordLine;
    QLabel *label_3;
    QComboBox *userType;
    QPushButton *loginButton;
    QPushButton *registerButton;
    QLabel *label_4;

    void setupUi(QWidget *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setLayoutDirection(Qt::RightToLeft);
        label = new QLabel(MainWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(260, 100, 81, 51));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        accountLine = new QLineEdit(MainWindow);
        accountLine->setObjectName("accountLine");
        accountLine->setGeometry(QRect(390, 110, 181, 31));
        label_2 = new QLabel(MainWindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(260, 160, 81, 51));
        label_2->setFont(font);
        passwordLine = new QLineEdit(MainWindow);
        passwordLine->setObjectName("passwordLine");
        passwordLine->setGeometry(QRect(390, 170, 181, 31));
        label_3 = new QLabel(MainWindow);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(260, 220, 141, 51));
        label_3->setFont(font);
        label_3->setLayoutDirection(Qt::LeftToRight);
        userType = new QComboBox(MainWindow);
        userType->addItem(QString());
        userType->addItem(QString());
        userType->setObjectName("userType");
        userType->setGeometry(QRect(470, 230, 101, 31));
        QFont font1;
        font1.setPointSize(15);
        userType->setFont(font1);
        userType->setLayoutDirection(Qt::RightToLeft);
        loginButton = new QPushButton(MainWindow);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(330, 350, 151, 41));
        loginButton->setFont(font1);
        loginButton->setLayoutDirection(Qt::LeftToRight);
        registerButton = new QPushButton(MainWindow);
        registerButton->setObjectName("registerButton");
        registerButton->setGeometry(QRect(330, 410, 151, 41));
        registerButton->setFont(font1);
        registerButton->setLayoutDirection(Qt::LeftToRight);
        label_4 = new QLabel(MainWindow);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(120, 30, 291, 61));
        QFont font2;
        font2.setPointSize(30);
        label_4->setFont(font2);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QWidget *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\345\257\206\347\240\201\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\347\224\250\346\210\267\347\261\273\345\236\213\357\274\232", nullptr));
        userType->setItemText(0, QCoreApplication::translate("MainWindow", "\347\256\241\347\220\206\345\221\230", nullptr));
        userType->setItemText(1, QCoreApplication::translate("MainWindow", "\347\224\250\346\210\267", nullptr));

        loginButton->setText(QCoreApplication::translate("MainWindow", "\347\231\273\345\275\225", nullptr));
        registerButton->setText(QCoreApplication::translate("MainWindow", "\346\263\250\345\206\214", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\350\207\252\345\212\251\347\202\271\351\244\220\347\263\273\347\273\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
