//menuwhiletrue.cpp
//Programa de una calculadora con opción de salida
//Ejemplo de while(true)

#include <iostream>

using namespace std;

int main(){
	
	int num1,num2;
	int resultado;
	int opcion;
	
	while(true) {
		
		cout << "\tCalculadora" << endl;
		cout << "1) Suma" << endl;
		cout << "2) Resta" << endl;
		cout << "3) Multiplicacion" << endl;
		cout << "4) Division" << endl;
		cout << "0) Salir" << endl;
		cout << "Ingresa una opcion: ";
		cin >> opcion;
		
		//El ciclo se ejecutará hasta que la opcion ingresada es cero.
		if (opcion == 0) {
			cout << "Saliendo del programa." << endl;
			break;
		}
		
		cout << "Ingresa los numeros: ";
		cin >> num1 >> num2;
		
		switch(opcion) {
			case 1:
				cout << "La suma de los numeros es " << num1 + num2 << endl;
				break;
			case 2:
				cout << "La resta de los numeros es: " << num1 - num2 << endl;
				break;
			case 3:
				cout << "La multiplicacion es: " << num1 * num2 << endl;
				break;
			case 4: 
				if (num2 != 0) {
					cout << "La division es: " << num1 / num2 << endl;
				}
				else {
					cout << "Error. Division entre cero." << endl;
				}
				break;
			default:
				cout << "Opcion incorrecta." << endl;
		}
		
	}
	
	return 0;
}
