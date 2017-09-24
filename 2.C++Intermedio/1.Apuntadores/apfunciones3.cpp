//apfunciones3.cpp
//Programa que ejemplifica el uso de funciones con apuntadores a funcion como parámetros.

#include <iostream>

using namespace std;

//Prototipos de funciones
//Función que acepta un apuntaqdor a funcion como parámetro
char* saludo(char* (*saludo)());
char* espanol();
char* ingles();
char* frances();
char* aleman();

enum lenguaje {
	ESPANOL = 1, //Iniciamos en 1 para "alinear" con las opciones del menú
	INGLES,
	FRANCES,
	ALEMAN
};

int main() {

	int opcion;
	char* mensaje;
	cout << "Bienvenido. Seleccione el lenguaje. " << endl;
	cout << "\t(1) Espanol" << endl;
	cout << "\t(2) Ingles" << endl;
	cout << "\t(3) Frances" << endl;
	cout << "\t(4) Aleman" << endl;
	cout << "Ingrese una opcion: ";
	cin >> opcion;


	switch(opcion) {
		case ESPANOL:
		    //Llamamos a la función saludo con otra funcion como argumento
			mensaje = saludo(espanol);
			break;
		case INGLES:
			mensaje = saludo(ingles);
			break;
		case FRANCES:
			mensaje = saludo(frances);
			break;
		case ALEMAN:
			mensaje = saludo(aleman);
			break;
		default:
			cout << "Opcion incorrecta" << endl;
	}

	cout << mensaje;

	return 0;
}

//Esta función evalúa la función que se le ingresa como parámetro.
char* saludo(char* (*saludo)()) {
	return saludo();
}

//Definiciones de funciones que devuelven una cadena.
char* espanol() {
	return "Hola mundo";
}

char* ingles() {
	return "Hello world";
}

char* frances() {
	return "Bonjour tout le monde";
}

char* aleman() {
	return "Hallo Welt";
}
