#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include "register.h"
#include "admin.h"
#include "User.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_loginButton_clicked();

    void on_passwordLine_returnPressed();

    void on_registerButton_clicked();

private:
    Ui::MainWindow *ui;
    Register regi;
    Admin admin;
    User user;
};
#endif // MAINWINDOW_H
