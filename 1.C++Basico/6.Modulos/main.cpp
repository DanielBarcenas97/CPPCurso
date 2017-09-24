#include <iostream>

//Incluimos archivos de cabecera (con prototipos)
#include "biblioteca1.hpp"	
#include "biblioteca2.hpp"

using namespace std;

int main() {
	
	int numero;
	cout << "Ingresa un numero para calcular el factorial: " << endl;
	cin >> numero;
	cout << "El resultado es " << factorial(numero) << endl;
	
	cout << "Y el numero de la serie Fibonacci correspondiente es " << fibonacci(numero);
	
	return 0;
}
