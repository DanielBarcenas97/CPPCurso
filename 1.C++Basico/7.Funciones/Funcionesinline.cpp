//funcionesinline.cpp
//Programa ejemplo del uso de funciones inline.

#include <iostream>

using namespace std;

//Prototipos de funciones
inline float areaCuadrado(float lado);
inline int factorial(int numero);
inline void imprimirMensajes();

int main() {
	
	float lado;
	cout << "Ingrese la longitud del lado del cuadrado: ";
	cin >> lado;
	cout << "El area del cuadrado es " << areaCuadrado(lado) << endl;
	
	cout << "El factorial de 10 es " << factorial(10) << endl;
	
	imprimirMensajes();
	return 0;
}

//Definiciones de funciones
inline float areaCuadrado(float lado) {
	return lado * lado;
}

inline int factorial(int numero) {
	int resultado = 1;
	for(int i = 1; i <= numero; i++) {
		resultado *= i;
	}
	return resultado;
}

inline void imprimirMensajes() {
	cout << "Este es un mensaje" << endl;
	cout << "Desde una funcion." << endl;
	return;
}
