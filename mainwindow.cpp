#include "mainwindow.h"
#include "register.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>

//存储模块 后可用数据库
using namespace std;

static int id = 0;
QString accounts[10];
QString passwords[10];

//密码的储存(注册的时候)
void Register::save(QString account,QString password){
    accounts[id] = account;
    passwords[id] = password;
    id++;
}

MainWindow::MainWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //这里设置echo模式为密文Password模式
    ui->passwordLine->setEchoMode(QLineEdit::Password);
}

MainWindow::~MainWindow()
{
    delete ui;
}

bool isAPright(QString account,QString password){
    for(int i = 0;i < id;i++){
        if(accounts[i]==account && passwords[i]==password){
            return true;
        }
    }
    return false;
}

//登录按钮以及账号密码的检测的实现
void MainWindow::on_loginButton_clicked()
{
    this->close();
    QString program = ui->userType->currentText();
    QString account = ui->accountLine->text();
    QString password = ui->passwordLine->text();
    if(program == "管理员"){
        //这里后面改为数据库的账号密码内容
        if(account=='1'&&password=='1')
            admin.show();
        else
            {
            QMessageBox message(QMessageBox::NoIcon,"Warning","Fatal Wrong:Account or Password is wrong or not exited.");
            message.exec();
            qDebug() << "Fatal Wrong:Account or Password is not right form or it's a false account.";
        }
    }
    else
        if(isAPright(account,password)){
            user.show();
        }
        else{
            QMessageBox message(QMessageBox::NoIcon,"Warning","Fatal Wrong:Account or Password is wrong or not exited.");
            message.exec();
            qDebug() << "Fatal Wrong:Account or Password is not right form or it's a false account.";
        }
}


void MainWindow::on_passwordLine_returnPressed(){
    on_loginButton_clicked();
}

void Admin::on_pushButton_5_clicked()
{
    // QMessageBox message(QMessageBox::NoIcon, "Tip", "Back successfully ");
    // message.exec();
    MainWindow* m = new MainWindow;
    m->show();
    this->hide();
}

void MainWindow::on_registerButton_clicked()
{
    this->hide();
    regi.show();
}


void Register::on_pushButton_2_clicked()
{
    MainWindow* m = new MainWindow;
    m->show();
    this->hide();
}
