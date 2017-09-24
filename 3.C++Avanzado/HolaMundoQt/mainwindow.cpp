#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
//Se genera este slot al dar click derecho en el elemento
//pushButton_saludo y en la opción "Go to slot..."
//Hay que ser cuidadosos con los nombres de nuestros
//elementos y el nombre que aparece en nuestros slots
void MainWindow::on_pushButton_saludo_clicked()
{
    QString nombre = ui->lineEdit_usuario->text();  //Obtenemos dato desde lineEdit
    ui->label_saludo->setText("Hola " + nombre);    //Colocamos dato en etiqueta
    ui->label_saludo->adjustSize();                 //Ajustamos tamaño de la etiqueta
}
