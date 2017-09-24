#include "calculadoraimc.h"
#include "ui_calculadoraimc.h"

CalculadoraIMC::CalculadoraIMC(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CalculadoraIMC)
{
    ui->setupUi(this);
}

CalculadoraIMC::~CalculadoraIMC()
{
    delete ui;
}

void CalculadoraIMC::on_pushButton_calcular_clicked()
{
    float masa = ui->lineEdit_masa->text().toFloat();
    float altura = ui->lineEdit_altura->text().toFloat();
    float imc = masa / (altura * altura);
    ui->label_resultado->setText("Tu IMC es " + QString::number(imc));
}
