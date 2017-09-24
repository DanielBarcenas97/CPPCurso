//apuntadores.cpp
//Programa que ejemplifica la declaración de apuntadores
//y los operadores de referencia (*) y desreferencia (&)

#include <iostream>

using namespace std;

int main() {
	
	int x = 150;	//Declaramos una variable de tipo entero con el valor 150
	int* ap = &x;	//Declaramos un apuntador a entero con que apunta a x.
	//int* ap;		//Sólo se declara un apuntador a entero. No es recomendable hacerlo de esta manera.
	//int* ap = NULL;	//Se declara un apuntador y se inicializa en NULL. Hay que recordar asignarle un valor antes de utilizarlo
	
	cout << "El valor de x: " << x << endl;
	cout << "La dirección de memoria de x:" << &x << endl;
	
	cout << "El valor ap: " << ap << endl;
	cout << "El contenido de ap: " << *ap << endl;
	cout << "La dirección de memoria de ap: " << &ap <<endl;
	
	return 0;
}
