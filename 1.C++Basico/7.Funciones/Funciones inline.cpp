#include <iostream>

using namespace std;

inline float areaCuadrado(float lado);

int main() {
	
	float lado;
	cout << "Ingrese la longitud del lado del cuadrado: ";
	cin >> lado;
	cout << "El area del cuadrado es " << areaCuadrado(lado) << endl;
	return 0;
}

inline float areaCuadrado(float lado) {
	return lado * lado;
}
