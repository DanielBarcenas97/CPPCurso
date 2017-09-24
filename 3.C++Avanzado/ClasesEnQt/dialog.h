#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
//Incluimos la clase Persona en las interfaces que requieran de ella
#include "persona.h"

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    //Función para cargar datos de objetos en una interfaz
    void setData(Persona persona);
    //Función para llenar los campos de la interfaz
    void fillData();
    ~Dialog();

private:
    Ui::Dialog *ui;
    //Declaramos un objeto de tipo persona
    Persona persona;
};

#endif // DIALOG_H
