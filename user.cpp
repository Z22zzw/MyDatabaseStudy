#include "user.h"
#include "ui_user.h"

User::User(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::User)
{
    ui->setupUi(this);
}

User::~User()
{
    delete ui;
}

void User::setAccount(int temp){
    account = temp;
}

int User::getAccount(){
    return account;
}

void User::setPassword(int temp){
    password = temp;
}

int User::getPassword(){
    return password;
}
