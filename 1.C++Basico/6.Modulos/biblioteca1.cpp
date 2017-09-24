//biblioteca1.cpp
//Biblioteca de funciones
//En el archivo.cpp van las definiciones de las funciones

#include "biblioteca1.hpp"	//Incluimos el archivo con los prototipos

float areaCirculo(int radio) {
	return pi*radio*radio;
} 

int factorial(int numero) {
	int resultado = 1;
	for(int i = 1; i <= numero; i++) {
		resultado *= i;
	}
	return resultado;
}
