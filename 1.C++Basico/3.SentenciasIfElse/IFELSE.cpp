#include<iostream>
using namespace std;

int main(){
	int num;
	// Pedimos el n�mero al usuario
	cout << "Ingresa un numero entero ";
	cin >> num;
	//  Validar primero una opci�n, validamos si es positivo
	if(num > 0){ // Aqu� va la condici�n, 
				//el resultado debe ser verdadero o falto
		cout << "Tu numero es positivo"<<endl;
	}else if(num == 0){ // Quedan dos posibles casos
						// que el valor sea cero
		cout << "Tu numero es un cero"<<endl;
	}else{				// o que el valor sea negativo
		cout << "Tu numero es negativo"<<endl;
	}
	cout << "Code que siempre se ejecuta"<<endl;
	return 0;
}
