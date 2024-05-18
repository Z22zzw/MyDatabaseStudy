#include "adminusermanage.h"
#include "ui_adminusermanage.h"

AdminUserManage::AdminUserManage(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::AdminUserManage)
{
    ui->setupUi(this);
}

AdminUserManage::~AdminUserManage()
{
    delete ui;
}



