//for.cpp
//Programa que ejemplifica la estructura de repeticion for

#include <iostream>

using namespace std;

int main() {
	
	//for(valor inicial;condicion de paro;modificacion)
	//El ciclo se repetirá tantas veces sea el tamaño del rango entre valor inicial y la condición

	//Contador 1-10
	for(int i = 1; i < 11; i += 2) {
		cout << "Un mensaje que se repite. Mensaje numero: " << i << endl;
	}
	

	//Cuenta regresiva 10-0
	for(int i = 10; i >= 0; i--) {
		cout << "Cuenta regresiva... " << i << endl;
	}
	
	cout << endl;
	
	int numero;
	
	//Imprimiendo patrones
	cout << "Ingresa un numero: ";
	cin >> numero;
	
	for(int j = 0; j <= numero; j++) {
	
		for(int i = 0; i < j; i++) {
			cout << "*";
		}
		cout << endl;
		
	}
	
}
