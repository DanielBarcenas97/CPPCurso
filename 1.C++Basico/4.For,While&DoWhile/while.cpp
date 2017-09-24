//while.cpp
//Programa que ejemplifica varios usos de la instrucci�n de repetici�n while

#include <iostream>

using namespace std;

int main() {
	
	//Contador

	int i = 0;	//Variable de control
	
	//El bloque de c�digo se repetir� mientras la condici�n sea verdadera.
	while(i < 10) {
		//En este caso solo hacemos que imprima el valor de i.
		cout << "Contando... " << i << endl;
		i++;	//Y modificamos la variable de control.
	}
	
	//Juego: Adivina el n�mero.
	//El c�digo se repetir� hasta que el n�mero ingresado sea igual al numero m�gico

	int numero = 0;	//Variable de control
	int numero_magico = 7;

	//El bloque de c�digo se repetir� mientras la condici�n sea verdadera.
	while(numero != numero_magico) {
		cout << "Adivina el valor: ";
		cin >> numero;	//Y modificamos la variable de control.
		
	}
	
}
