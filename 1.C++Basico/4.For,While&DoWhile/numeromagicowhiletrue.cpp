//numeromagicowhiletrue.cpp
//Programa que utiliza el ciclo infinito while(true)
//para el juego de adivina el numero

#include <iostream>

using namespace std;

int main() {
	
	int numero;
	int numero_magico = 7;
	
	while(true) {
		cout << "Adivina el numero: " << endl;
		cin >> numero;
		
		//El ciclo se ejecutará hasta que se adivine el numero mágico.
		if(numero == numero_magico) {
			cout << "Felicidades, adivinaste!" << endl;
			break;
		}
		else {
			cout << "Error. Intenta otra vez." << endl;
		}
	}
	
	return 0;
}
