#ifndef ADMINLISTMANGE_H
#define ADMINLISTMANGE_H

#include <QWidget>

namespace Ui {
class AdminListMange;
}

class AdminListMange : public QWidget
{
    Q_OBJECT

public:
    explicit AdminListMange(QWidget *parent = nullptr);
    explicit AdminListMange(Ui::AdminListMange *ui) : ui(ui) {}
    ~AdminListMange();

private slots:
    void on_getBack_clicked();

    void on_pushbutto_4_clicked();

private:
    Ui::AdminListMange *ui;
};

#endif // ADMINLISTMANGE_H
