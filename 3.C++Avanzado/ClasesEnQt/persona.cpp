#include "persona.h"

Persona::Persona(QString nombre,int edad,QString genero,QString ocupacion, bool automovil){
    this->nombre = nombre;
    this->edad = edad;
    this->genero = genero;
    this->ocupacion = ocupacion;
    this->automovil = automovil;
}

//Getters para atributos privados
QString Persona::getNombre(){
    return nombre;
}

int Persona::getEdad(){
    return edad;
}

QString Persona::getGenero(){
    return genero;
}

QString Persona::getOcupacion(){
    return ocupacion;
}

bool Persona::getAutomovil(){
    return automovil;
}

//Setters para atributos privados
void Persona::setNombre(QString nombre){
    this->nombre = nombre;
}

void Persona::setEdad(int edad){
    this->edad = edad;
}

void Persona::setGenero(QString genero){
    this->genero = genero;
}

void Persona::setOcupacion(QString ocupacion){
    this->ocupacion = ocupacion;
}

void Persona::setAutomovil(bool automovil){
    this->automovil = automovil;
}
