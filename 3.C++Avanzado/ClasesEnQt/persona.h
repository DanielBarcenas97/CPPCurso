#ifndef PERSONA_H
#define PERSONA_H

#include <QString>

class Persona
{
public:
    Persona(QString nombre = "",int edad = 0, QString genero = "", QString ocupacion = "", bool automovil = false);
    //Getters para atributos privados
    QString getNombre();
    int getEdad();
    QString getGenero();
    QString getOcupacion();
    bool getAutomovil();
    //Setters para atributos privados
    void setNombre(QString nombre);
    void setEdad(int edad);
    void setGenero(QString genero);
    void setOcupacion(QString ocupacion);
    void setAutomovil(bool automovil);
private:
    QString nombre;
    int edad;
    QString genero;
    QString ocupacion;
    bool automovil;
};

#endif // PERSONA_H
