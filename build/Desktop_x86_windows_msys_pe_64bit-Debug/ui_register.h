/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QLineEdit *AccountEdit;
    QLabel *account;
    QLabel *password;
    QLineEdit *PassEdit;
    QLineEdit *EnterPassEdit;
    QLabel *sureForPass;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *Tittle;

    void setupUi(QWidget *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName("Register");
        Register->resize(400, 300);
        AccountEdit = new QLineEdit(Register);
        AccountEdit->setObjectName("AccountEdit");
        AccountEdit->setGeometry(QRect(170, 90, 141, 21));
        QFont font;
        font.setPointSize(12);
        AccountEdit->setFont(font);
        account = new QLabel(Register);
        account->setObjectName("account");
        account->setGeometry(QRect(100, 80, 71, 41));
        QFont font1;
        font1.setPointSize(15);
        account->setFont(font1);
        password = new QLabel(Register);
        password->setObjectName("password");
        password->setGeometry(QRect(100, 120, 61, 41));
        password->setFont(font1);
        PassEdit = new QLineEdit(Register);
        PassEdit->setObjectName("PassEdit");
        PassEdit->setGeometry(QRect(170, 130, 141, 21));
        PassEdit->setFont(font);
        EnterPassEdit = new QLineEdit(Register);
        EnterPassEdit->setObjectName("EnterPassEdit");
        EnterPassEdit->setGeometry(QRect(170, 170, 141, 21));
        EnterPassEdit->setFont(font);
        sureForPass = new QLabel(Register);
        sureForPass->setObjectName("sureForPass");
        sureForPass->setGeometry(QRect(70, 160, 91, 41));
        sureForPass->setFont(font1);
        pushButton = new QPushButton(Register);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(160, 220, 80, 18));
        pushButton_2 = new QPushButton(Register);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(160, 250, 80, 18));
        Tittle = new QLabel(Register);
        Tittle->setObjectName("Tittle");
        Tittle->setGeometry(QRect(160, 30, 121, 41));
        QFont font2;
        font2.setPointSize(20);
        Tittle->setFont(font2);

        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QWidget *Register)
    {
        Register->setWindowTitle(QCoreApplication::translate("Register", "Form", nullptr));
        account->setText(QCoreApplication::translate("Register", "\350\264\246\345\217\267\357\274\232", nullptr));
        password->setText(QCoreApplication::translate("Register", "\345\257\206\347\240\201\357\274\232", nullptr));
        sureForPass->setText(QCoreApplication::translate("Register", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", nullptr));
        pushButton->setText(QCoreApplication::translate("Register", "\347\241\256\350\256\244\346\263\250\345\206\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Register", "\350\277\224\345\233\236\347\231\273\345\275\225", nullptr));
        Tittle->setText(QCoreApplication::translate("Register", "\347\224\250\346\210\267\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
