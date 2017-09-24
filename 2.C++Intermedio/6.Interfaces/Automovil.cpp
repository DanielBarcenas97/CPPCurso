#include <iostream>
#include "Automovil.h"

Automovil::Automovil(string marca, string modelo){
	this->marca = marca;
	this->modelo = modelo;
}

void Automovil::encender() {
	cout << "Encendiendo motores..." << endl;
}
