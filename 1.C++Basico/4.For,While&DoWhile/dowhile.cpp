//dowhile.cpp
//Programa que ejemplifica la instrucción de repetición do...while


#include <iostream>

using namespace std;

int main(){

	int numero; //Variable de control
	int numero_magico = 7;
	
	//En el bloque do colocamos el código que queremos que se repita
	//Dicho bloque está garantizado que se ejecutará al menos una vez
	do {
		cout << "Adivina el numero: ";
		cin >> numero;
		if (numero != numero_magico) {
			cout << "Error. Intenta otra vez." << endl;
		}
		else {
			cout << "Felicidades." << endl;
		}
	} while(numero != numero_magico); //Y lo hará mientras la condición sea válida.
	
	return 0;
}
