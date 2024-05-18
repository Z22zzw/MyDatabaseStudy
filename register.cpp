#include "register.h"
#include "ui_register.h"
#include <QMessageBox>

Register::Register(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Register)
{
    ui->setupUi(this);
}

Register::~Register()
{
    delete ui;
}

//判断密码和确认密码是否相同//
bool Register::isPassEqual(){
    QString account = ui->account->text();
    QString password = ui->password->text(),sure = ui->sureForPass->text();
    if(!password.compare(sure)){
        QMessageBox message(QMessageBox::NoIcon,"Warning","Fatal Error:repeat password is not equal to password.");
        message.exec();
        return false;
    }
    else
    {
        save(account,password);
        return true;
    }
}

//确认注册//
void Register::on_pushButton_clicked()
{
    if(isPassEqual())
        on_pushButton_2_clicked();
    else
    {
        Register *newRegi = new Register;
        this->hide();
        newRegi->show();
    }
}


void Register::on_EnterPassEdit_returnPressed()
{
    on_pushButton_clicked();
}

