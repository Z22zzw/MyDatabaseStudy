#include "admin.h"
#include "ui_admin.h"
#include "adminmealmanage.h"
#include "adminlistmange.h"

Admin::Admin(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Admin)
{
    ui->setupUi(this);

}

Admin::~Admin()
{
    delete ui;
}

//类内的账密（可删
void Admin::setAccount(int temp){
    account = temp;
}

int Admin::getAccount(){
    return account;
}

void Admin::setPassword(int temp){
    password = temp;
}

int Admin::getPassword(){
    return password;
}

void Admin::on_pushButton_clicked()
{
    this->hide();
    adminum.show();
}

//用户管理的返回
void AdminUserManage::on_getBack_clicked()
{
    Admin* a = new Admin;
    a->show();
    this->hide();
}

//订单管理的返回
void AdminListMange::on_getBack_clicked()
{
    Admin* a = new Admin;
    a->show();
    this->hide();
}

//菜单管理的返回
void adminMealmanage::on_pushButton_4_clicked()
{
    Admin* a = new Admin;
    a->show();
    this->hide();
}

//打开
void Admin::on_pushButton_3_clicked()
{
    this->hide();
    adminlm.show();
}


void Admin::on_pushButton_2_clicked()
{
    this->hide();
    adminmm.show();
}


void Admin::on_pushButton_4_clicked()
{

}




