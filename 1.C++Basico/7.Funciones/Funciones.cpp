//funciones.cpp
//Programa ejemplo del uso de funciones.

#include <iostream>

using namespace std;

//Variables globales
const float pi = 3.14159;

//Prototipos de funciones
int suma(int a,int b);
float areaCirculo(int radio);

int main() {
	
	int num1;
	int num2;
	
	cout << "Ingresa dos numeros: "  << endl;
	cin >> num1 >> num2;
	
	//Llamadas a función	
	int resultado = suma(num1,num2);
	cout << "La suma de los dos numeros es " <<  resultado << endl;
	
	cout << "El area del circulo de radio 4 es " << areaCirculo(4) << endl;
	cout << "El valor de pi es " << pi << endl;
	
	return 0;
}

//Definición de funciones
int suma(int a, int b) {
	int resultado = a + b;
	return resultado;
}

float areaCirculo(int radio) {
	return pi*radio*radio;
}
