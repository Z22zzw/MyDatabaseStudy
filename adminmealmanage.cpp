#include "adminmealmanage.h"
#include "ui_adminmealmanage.h"

adminMealmanage::adminMealmanage(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::adminMealmanage)
{
    ui->setupUi(this);
}

adminMealmanage::~adminMealmanage()
{
    delete ui;
}

