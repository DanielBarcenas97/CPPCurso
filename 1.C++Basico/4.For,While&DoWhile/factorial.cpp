//factorial.cpp
//Programa que calcula el factorial de un número

#include <iostream>

using namespace std;

int main() {
	
	int n;
	int fact = 1;	//Variable acumulador, lleva la cuenta
	cout << "Ingresa un numero: " << endl;
	cin >> n;
	

	//Forma descendente
	/*for(int i = n; i >= 1 ; i--) {
		fact *= i;

	}*/

	//Forma ascendente
	for(int i = 1; i <= n; i++) {
		fact *= i;
	}
	
	cout << "El factorial de " << n << " es " << fact << endl;
		
	return 0;
}
