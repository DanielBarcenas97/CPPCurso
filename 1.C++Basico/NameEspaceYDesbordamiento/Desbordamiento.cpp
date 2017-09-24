//overflow.cpp
//Programa que ejemplifica lo que sucede al sobrepasar el l�mite m�ximo de los tipos de dato.
//Conocido como desbordamiento.

#include <climits> //Aqu� est�n constantes de valor m�ximo de tipos de dato.
#include <iostream>

using namespace std;

int main() {
	
	int max_int = INT_MAX;
	
	cout << "El valor maximo de int es: " << max_int << endl;
	max_int++;
	cout << "El valor maximo de int es: " << max_int++ << endl;
	cout << "El valor maximo de int es: " << INT_MIN << endl;
	
	unsigned int max_uint = UINT_MAX;
	cout << endl;
	cout << "El valor maximo de unsigned int es: " << max_uint << endl;
	max_uint++;
	cout << "El valor maximo de unsigned int es: " << max_uint << endl;
	
	return 0;
}
