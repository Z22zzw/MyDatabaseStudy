#ifndef ADMIN_H
#define ADMIN_H

#include <QWidget>
#include "adminusermanage.h"
#include "adminlistmange.h"
#include "adminmealmanage.h"

namespace Ui {
class Admin;
}

class Admin : public QWidget
{
    Q_OBJECT

public:
    explicit Admin(QWidget *parent = nullptr);
    ~Admin();

    void setAccount(int temp);

    int getAccount();

    void setPassword(int temp);

    int getPassword();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_2_clicked();

private:
    int account = 1;
    int password = 1;
    Ui::Admin *ui;
    AdminUserManage adminum;
    adminMealmanage adminmm;
    AdminListMange adminlm;
};

#endif // ADMIN_H
