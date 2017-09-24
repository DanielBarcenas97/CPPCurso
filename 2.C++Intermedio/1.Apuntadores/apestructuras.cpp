//apestructuras.cpp
//Programa que ejemplifica el uso de apuntadores a estructuras.

#include <iostream>

using namespace std;

struct Automovil {
	string marca;
	string modelo;
	float precio;
};

int main() {

	//Se crean dos estructruas de tipo Automovil
	Automovil auto1;
	Automovil auto2;

	//Se crea un apuntador que apunta a la estructura otro_auto
	Automovil *ap1 = NULL;
	Automovil *ap2 = &auto2;

	//Podemos utilizar el operador punto para acceder/modificar a una estructura.
	cout << "Ingrese la marca del automovil: ";
	cin >> auto1.marca;
	cout << "Ingrese el modelo del automovil: ";
	cin >> auto1.modelo;
	cout << "Ingrese el precio del automovil: ";
	cin >> auto1.precio;

	//O el operador flecha para acceder si estamos utilizando apuntadores.
	cout << "Ingrese la marca del automovil: ";
	cin >> ap2->marca;
	cout << "Ingrese el modelo del automovil: ";
	cin >> ap2->modelo;
	cout << "Ingrese el precio del automovil: ";
	cin >> ap2->precio;
	
	//Imprimiendo datos
	cout << "Datos del automovil 1" << endl;
	cout << "Marca: " << auto1.marca << endl;
	cout << "Modelo: " << auto1.modelo << endl;
	cout << "Precio: " << auto1.precio << endl;
	cout << "Datos del automovil 2" << endl;
	cout << "Marca: " << ap2->marca << endl;
	cout << "Modelo: " << ap2->modelo << endl;
	cout << "Precio: " << ap2->precio << endl;

	//Cambiamos el apuntador, ahora apuntan a la misma estructura.
	ap1 = ap2;

	//Y con los dos podemos modificar la misma estructura
	ap1->marca = "Renault";
	ap2->modelo = "Megane";

	cout << "Datos del automovil con apuntador" << endl;
	cout << "Marca: " << ap1->marca;
	cout << "Modelo: " << ap1->modelo;
	cout << "Precio: " << ap1->precio;	

	return 0;	
}

