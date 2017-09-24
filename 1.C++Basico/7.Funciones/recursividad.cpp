//recursividad.cpp
//Programa ejemplo del uso de funciones recursivas.

#include <iostream> 

//Prototipos de funciones
int factorial(int numero);
int fibonacci(int numero);

using namespace std;

int main() {
	

	//Llamadas a funciones
	cout << "El factorial de 4 es " << factorial(4) <<endl;
	cout << "El cuarto valor de la serie de Fibonacci es " << fibonacci(48) <<endl;
	
	return 0;
}

//Definiciones de funciones
int factorial(int numero) {
	if(numero <= 1) {
		return 1;
	}
	else{
		return numero * factorial(numero-1); //Se llama a la función dentro de sí misma.
	}
}

int fibonacci(int numero) {
	if(numero <= 1) {
		return 1;
	}
	else{
		return fibonacci(numero-1) + fibonacci(numero-2); //Se llama a la función dentro de sí misma.
	}
}
