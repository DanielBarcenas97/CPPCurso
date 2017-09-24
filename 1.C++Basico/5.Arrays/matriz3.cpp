/*
Programa que pregunta que dimension de tablero quieres
coloque una A aleatoriamente en el tablero
y tengas 3 intentos para adivinar donde esta
usando las coordenadas de la matriz
en todo momento te muestre cuantos intentos te quedan
*/

#include<iostream>
#include<cstdlib> //contiene rand
#include<time.h>

using namespace std;

int main(){
	
	int n = 0;
	int opcion,op1,op2;
	
	cout << "Selecciona un tablero:" << endl;
	cout << "1.- 2x2" << endl;
	cout << "2.- 3x3" << endl;
	cout << "3.- 4x4" << endl;
	cout << "4.- 5x5" << endl;
	
	cin >> opcion;
	
	switch(opcion){
		case 1:
			n = 2;
		break;
		case 2:
			n = 3;
		break;
		case 3:
			n = 4;
		break;
		case 4:
			n = 5;
		break;
		default:
			cout << "Opcion no valida, pondre 3x3 >:v" << endl;
			n = 3;
		break;
	}
	
	char tablero[n][n];
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			tablero[i][j] = 'X';
			cout << "\t" << tablero[i][j];
		}
		
		cout << endl;
	}
	
	cout << endl << endl << endl;
	
	srand(time(NULL));
	tablero[rand()%n][rand()%n] = 'A';
	
	int i = 3;
	
	while(i > 0){
	
		cout << "Tienes " << i << " intentos" << endl << endl;
		cout << "Adivina donde esta la A (dame las coordenadas separadas por espacio):  ";
		cin >> op1 >> op2;
		if(op1 >= n || op2 >= n){
			cout << "Coordenadas fuera de rango" << endl;
		}else{
		if(tablero[op1][op2] == 'A'){
			cout << "Ganaste!! :V" << endl << endl;
			break;
		}
		else
			cout << "NEL equis de :'v" << endl << endl;
		--i;
		 }
	}
	return 0;
}
