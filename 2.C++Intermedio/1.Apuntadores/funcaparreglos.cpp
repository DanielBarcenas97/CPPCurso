//funcaparreglos.cpp
//Programa que ejemplifica como usar un arreglo mediante apuntadores.

#include <iostream>

using namespace std;

void llenarArreglo(int *arreglo,int tamano);
void imprimirArreglo(int *arreglo,int tamano);
void multiplicarArreglo(int *arreglo,int tamano,int valor = 2);

int main(){
	
	int arreglo[10];
	int tamano = 10;

	llenarArreglo(arreglo,tamano);
	multiplicarArreglo(arreglo,tamano,3);
	imprimirArreglo(arreglo,tamano);

	return 0;
}

void llenarArreglo(int *arreglo,int tamano) {
	for(int i = 0; i < tamano; i++){
		cout << "Ingrese el elemento " << i << " del arreglo: ";
		cin >> arreglo[i];
	}
}

void imprimirArreglo(int *arreglo,int tamano) {
	for(int i = 0; i < tamano; i++) {
		cout << "El elemento " << i << " del arreglo es " << arreglo[i] << endl;
	}
}

void multiplicarArreglo(int *arreglo,int tamano,int valor) {
	for(int i = 0; i < tamano; i++) {
		arreglo[i] *= valor;
	}
}