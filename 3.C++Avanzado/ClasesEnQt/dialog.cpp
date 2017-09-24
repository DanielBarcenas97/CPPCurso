#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::setData(Persona persona){
    this->persona = persona;
}

void Dialog::fillData(){
    //Podemos desactivar los lineEdits con setReadOnly y setDisabled.
    //Ambos funcionan de manera distinta
    ui->lineEdit_nombre->setReadOnly(true);
    ui->lineEdit_edad->setReadOnly(true);
    ui->lineEdit_genero->setDisabled(true);
    ui->lineEdit_ocupacion->setDisabled(true);
    ui->lineEdit_auto->setDisabled(true);

    ui->lineEdit_nombre->setText(persona.getNombre());
    ui->lineEdit_edad->setText(QString::number(persona.getEdad()));
    ui->lineEdit_genero->setText(persona.getGenero());
    ui->lineEdit_ocupacion->setText(persona.getOcupacion());
    if(persona.getAutomovil()) {
        ui->lineEdit_auto->setText("Sí");
    }
    else{
        ui->lineEdit_auto->setText("No");
    }
}

