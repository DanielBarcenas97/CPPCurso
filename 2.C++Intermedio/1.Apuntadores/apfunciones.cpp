//apfunciones.cpp
//Programa que ejemplifica la sintáxis y uso básico de apuntadores a funciones

#include <iostream>

using namespace std;

void imprimeMensaje();
int minimum(int a,int b);

int main() {

	void (*ap_funcion1)() = NULL;
	int (*ap_funcion2)(int,int) = NULL;

	int num1,num2;

	ap_funcion1 = imprimeMensaje;
	ap_funcion2 = minimum;

	ap_funcion1();

	cout << "Ingrese dos datos a comparar: ";
	cin >> num1 >> num2;
	cout << "El valor mínimo es " << ap_funcion2(num1,num2) << endl;

	return 0;
}

void imprimeMensaje() {
	cout << "Hola mundo" << endl;
}

int minimum(int a,int b) {
	return a < b ? a : b;
}