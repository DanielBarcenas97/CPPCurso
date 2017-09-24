#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include "menuprincipal.h"

namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = 0);
    ~Login();

private slots:
    void on_pushButton_login_clicked();

private:
    Ui::Login *ui;
    //Declarar QMainWindow aquí
    MenuPrincipal menup;
};

#endif // LOGIN_H
