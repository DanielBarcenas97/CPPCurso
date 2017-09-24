//apuntadores2.cpp
//Programa que ejemplifica algunas de las distintas operaciones
//que se pueden realizar con apuntadores.

#include <iostream>

using namespace std;

int main() {
	
	int x = 100;
	int y = 500;
	
	int* ap = NULL;
	
	ap = &x;		//ap apunta a la dirección de memoria de x.
	*ap = 300;		//El contenido de ap (x) ahora vale 300.
	y = *ap;		//y ahora vale el contenido de ap (x=300).
	x -= 50;		//A x se le restan 50 (x=250).
	*ap += 100;		//Al contenido de ap (x) se le suma 100. x ahora vale 350.
	
	//¿Cuánto valen "x" y "y" al final?
	
	cout << "x vale " << x << endl;
	cout << "y vale " << y << endl;
	cout << "ap vale " << ap << endl;
	cout << "el contenido de ap vale " << *ap << endl;
	
	return 0;
}
