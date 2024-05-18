#ifndef USER_H
#define USER_H

#include <QWidget>

namespace Ui {
class User;
}

class User : public QWidget
{
    Q_OBJECT

public:
    explicit User(QWidget *parent = nullptr);
    ~User();

    void setAccount(int temp);

    int getAccount();

    void setPassword(int temp);

    int getPassword();

private:
    Ui::User *ui;
    int account = 1;
    int password = 1;
};

#endif // USER_H
