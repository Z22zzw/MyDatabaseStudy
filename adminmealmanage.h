#ifndef ADMINMEALMANAGE_H
#define ADMINMEALMANAGE_H

#include <QWidget>

namespace Ui {
class adminMealmanage;
}

class adminMealmanage : public QWidget
{
    Q_OBJECT

public:
    explicit adminMealmanage(QWidget *parent = nullptr);
    ~adminMealmanage();

private slots:
    void on_pushButton_4_clicked();

private:
    Ui::adminMealmanage *ui;
};

#endif // ADMINMEALMANAGE_H
