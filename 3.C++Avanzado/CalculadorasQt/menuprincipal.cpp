#include "menuprincipal.h"
#include "ui_menuprincipal.h"
#include "calculadoraimc.h"

MenuPrincipal::MenuPrincipal(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MenuPrincipal)
{
    ui->setupUi(this);
}

MenuPrincipal::~MenuPrincipal()
{
    delete ui;
}

void MenuPrincipal::on_pushButton_clicked()
{
    CalculadoraIMC calc;
    calc.setModal(true);
    calc.exec();
}
