#include "login.h"
#include "ui_login.h"
#include "menuprincipal.h"
#include <QMessageBox>
Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}

void Login::on_pushButton_login_clicked()
{
    QString usuario = ui->lineEdit_user->text();
    QString contrasena = ui->lineEdit_pass->text();
    QString nombre_usuario = "user";
    QString cont_valida = "pass";

    if(usuario == nombre_usuario && contrasena == cont_valida){
        QMessageBox::information(this,"Login","Datos válidos");

        menup.show();
    }
    else{
        QMessageBox::warning(this,"Login","Datos incorrectos");
    }

}
