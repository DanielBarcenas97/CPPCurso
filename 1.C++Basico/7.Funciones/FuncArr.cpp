//funciarr.cpp
//Programa ejemplo del uso de funciones con arreglos.

#include <iostream>

//Constante que nos indica el tamaño del arreglo a usar
const int TAM = 5;

//Prototipos de funciones
//Muestra el arreglo
void mostrarArreglo(int arreglo[],int tamano);
//Si el arreglo es {0,1,2,3,4}, lo cambie a {0,2,4,6,8}
void dobleArreglo2(int arreglo[],int tamano);
//Obtener el promedio de los elementos de un arreglo
float promedioArreglo(int arreglo[],int tamano);

int main() {
	
	int arreglo[TAM] = {0,1,2,3,4};
	
	//Llamadas a función
	mostrarArreglo(arreglo,TAM);
	dobleArreglo2(arreglo,TAM);
	std::cout << std::endl;
	mostrarArreglo(arreglo,TAM);
	std::cout << "El promedio de los elementos del arreglo es " 
			<< promedioArreglo(arreglo,TAM) << std::endl;
	return 0;
}

//Definiciones de funciones
void mostrarArreglo(int arreglo[],int tamano){
	for(int i = 0; i < tamano; i++) {
		std::cout << "arreglo[" << i << "]= " << arreglo[i] << std::endl;
	}
	return;
}

void dobleArreglo2(int arreglo[],int tamano) {
	for(int i = 0; i < tamano; i++) {
		arreglo[i] *= 2;
	}
	return;
}

float promedioArreglo(int arreglo[],int tamano) {
	float suma = 0;
	for(int i = 0; i < tamano; i++) {
		suma += arreglo[i];
	}
	float promedio = suma / tamano;
	return promedio;
}

