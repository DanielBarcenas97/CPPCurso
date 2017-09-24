//while.cpp
//Programa que ejemplifica varios usos de la instrucción de repetición while

#include <iostream>

using namespace std;

int main() {
	
	//Contador

	int i = 0;	//Variable de control
	
	//El bloque de código se repetirá mientras la condición sea verdadera.
	while(i < 10) {
		//En este caso solo hacemos que imprima el valor de i.
		cout << "Contando... " << i << endl;
		i++;	//Y modificamos la variable de control.
	}
	
	//Juego: Adivina el número.
	//El código se repetirá hasta que el número ingresado sea igual al numero mágico

	int numero = 0;	//Variable de control
	int numero_magico = 7;

	//El bloque de código se repetirá mientras la condición sea verdadera.
	while(numero != numero_magico) {
		cout << "Adivina el valor: ";
		cin >> numero;	//Y modificamos la variable de control.
		
	}
	
}
