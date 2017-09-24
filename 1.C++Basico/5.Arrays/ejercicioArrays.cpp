/*
Programa que reciba numeros del usuario (while) y
verifique si ese numero existe en un arreglo de 10 espacios
lleno de 0's.
Si no existe lo agrega al final
Si existe, te dice que ya esta en el arreglo

PD. No preocuparse por si sellena el arreglo
*/

#include<iostream>

using namespace std;

int main(){
	
	int numeros[10];
	int cont = 0;
	int num = 0;
	
	for(int i = 0; i < 10; i++)
		numeros[i] = 0;
		
	while(cont < 10){
		
		cout << "Dame un numero: ";
		cin >> num;
		
		for(int i= 0; i < 10; i++){
			if(numeros[i] == 0){
				numeros[i] = num;
				break;
			}
			else if(num == numeros[i]){
				cout << "El numero ya esta en el arreglo" << endl;
				break;
			}
			
		}
		cout << endl;
		cout << "Tu arreglo tiene:" << endl;
		
		for(int i = 0; i < 10; i++)
			cout << numeros[i] << " ";
		cout << endl << endl;
		
		++cont;
	}
	
	return 0;
}
