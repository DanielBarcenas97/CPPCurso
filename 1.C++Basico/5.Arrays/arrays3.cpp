#include<iostream>

using namespace std;

int main(){
	
	//Sustituir elementos en una cadena:
	char cadena[] = "hola mundo";
	char letra,reemplazo;
	
	cout << "Tu cadena es: " << cadena << endl;
	cout << "Que letra quieres cambiar?  ";
	cin >> letra;
	cout << "¿Que letra quieres poner en su lugar?  ";
	cin >> reemplazo;
	
	for(int i = 0; i < 11; i++){
		if(letra == cadena[i])
			cadena[i] = reemplazo;
	}
	
	cout << "Tu cadena final es: " << cadena << endl;
	
	cout << endl << endl << endl;
	//Cambiar orden del arreglo:
	int numeros[5] = {1,2,3,4,5};
	int numerosV[5];
	int j = 4;
	
	for(int i = 0; i < 5; i++){
		numerosV[i] = numeros[j];
		--j;
	}
	
	for(int i = 0; i < 5; i++){
		cout << numeros[i] << "\t";
		}
	cout << endl << endl;
		
	for(int i = 0; i < 5; i++){
		cout << numerosV[i] << "\t";
		}
	
	return 0;
}
