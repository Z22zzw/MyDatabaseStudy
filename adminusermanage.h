#ifndef ADMINUSERMANAGE_H
#define ADMINUSERMANAGE_H

#include <QWidget>

namespace Ui {
class AdminUserManage;
}

class AdminUserManage : public QWidget
{
    Q_OBJECT

public:
    explicit AdminUserManage(QWidget *parent = nullptr);
    ~AdminUserManage();

private slots:
    void on_getBack_clicked();

private:
    Ui::AdminUserManage *ui;
};

#endif // ADMINUSERMANAGE_H
