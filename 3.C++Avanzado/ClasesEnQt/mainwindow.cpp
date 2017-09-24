#include "mainwindow.h"
#include "ui_mainwindow.h"
//Incluimos la clase Persona en las interfaces que requieran de ella
#include "persona.h"
#include "dialog.h"

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

void MainWindow::on_pushButton_listo_clicked()
{
    //Obtenemos datos de interfaz
    QString nombre = ui->lineEdit_nombre->text();
    int edad = ui->lineEdit_edad->text().toInt();
    QString genero;
    //Los metodos isChecked de los botones regresan un valor booleano de true cuando son seleccionados
    if (ui->radioButton_H->isChecked()) {
         genero = "Hombre";
    }
    else if (ui->radioButton_M->isChecked()) {
         genero = "Mujer";
    }
    //El método CurrentText de los ComboBox nos devuelven la selección actual en forma de cadena
    QString ocupacion = ui->comboBox_ocupacion->currentText();
    bool automovil = ui->checkBox_auto->isChecked();
    //Creamos la interfaz que generará ese botón
    Dialog ventana;
    //Mandamos los datos a la interfaz
    ventana.setData(Persona(nombre,edad,genero,ocupacion,automovil));
    ventana.fillData();
    //Y la ejecutamos
    ventana.setModal(true);
    ventana.exec();

}
