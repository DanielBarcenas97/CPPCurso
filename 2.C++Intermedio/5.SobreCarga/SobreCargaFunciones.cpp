//masfunciones.cpp
//Programa que ejemplifica la sobrecarga de funciones

#include <iostream> 

using namespace std;

//Sobrecarga de funciones
//El compilador diferenciará entre ellas por el número de argumentos.
int area(int lado);
int area(int base, int altura);

int main() {
	
	cout << area(10) << endl;
	cout << area(10,5) << endl;
	
	return 0;
}

int area(int lado) {
	return lado * lado;
}
int area(int base, int altura) {
	return base * altura;
}
