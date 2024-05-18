#include "adminlistmange.h"
#include "ui_adminlistmange.h"

AdminListMange::AdminListMange(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::AdminListMange)
{
    ui->setupUi(this);
}

AdminListMange::~AdminListMange()
{
    delete ui;
}

