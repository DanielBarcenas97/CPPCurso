//biblioteca1.cpp
//Biblioteca de funciones
//En el archivo.cpp van las definiciones de las funciones

#include "biblioteca2.hpp"	//Incluimos el archivo con los prototipos

int fibonacci(int numero) {
	if(numero <= 1) {
		return 1;
	}
	else{
		return fibonacci(numero-1) + fibonacci(numero-2);
	}
}
