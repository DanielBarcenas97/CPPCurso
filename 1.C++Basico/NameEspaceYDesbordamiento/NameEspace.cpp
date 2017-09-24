#include <iostream>

using namespace std;

//Definimos un namespace con sus elementos
namespace Espacio1 {
	const float pi = 3.14;
	int factorial(int numero);
}

//Definimos otro namespace con sus elementos
namespace Espacio2 {
	const float pi = 3.14159;
	int factorial(int numero);
}

//Una variable global
const float pi = 3.1416;

int main() {
	
	//Imprimimos las distintas constantes en los distintos namespaces
	cout << "Variable global pi: " << pi << endl;
	cout << "pi de Espacio1: " << Espacio1::pi << endl;
	cout << "pi de Espacio2: " << Espacio2::pi << endl;
	
	//Llamamos a las funciones en los namespaces
	int resultado = Espacio1::factorial(10);
	int resultado2 = Espacio2::factorial(10);
	
	
	return 0;
}

//Definimos las funciones de los namespaces
int Espacio1::factorial(int numero) {
	cout << "Ejecutando factorial de Espacio1" << endl;
	int resultado = 1;
	for(int i = 1; i <= numero; i++) {
		resultado *= i;
	}
	return resultado;
}

int Espacio2::factorial(int numero) {
	cout << "Ejecutando factorial de Espacio2" << endl;
	if(numero <= 1) {
		return 1;
	}
	else{
		return numero * factorial(numero-1);
	}
}
