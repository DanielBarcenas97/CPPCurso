//funcapmatriz.cpp
//Programa que ejemplifica como el manejo de una matriz
//mediante un arreglo de apuntadores.

#include <iostream>

using namespace std;

const int renglones = 2;
const int columnas = 2;

void llenarMatriz(int *matriz[columnas],int renglones);
void imprimirMatriz(int *matriz[columnas],int renglones);

int main(){
	
	int matriz[renglones][columnas];

	//Declaramos un arreglo de apuntadores
	int	*ap_matriz[columnas];
	//Hacemos que cada apuntador apunte a un renglon de la matriz
	for(int i = 0; i < renglones; i++) {
		ap_matriz[i] = matriz[i];
	}

	llenarMatriz(ap_matriz,renglones);
	cout << endl;
	cout << "El contenido de la matriz es:" << endl;
	imprimirMatriz(ap_matriz,renglones);

	return 0;
}

void llenarMatriz(int *matriz[columnas],int renglones) {
	for(int i = 0; i < renglones; i++){
		for(int j = 0; j < columnas; j++) {
			cout << "Ingrese el elemento " << i << "," << j << " del arreglo: ";
			cin >> matriz[i][j];
		}
	}
}

void imprimirMatriz(int *matriz[columnas],int renglones) {
	for(int i = 0; i < renglones; i++){
		for(int j = 0; j < columnas; j++) {
			cout << "\t" << matriz[i][j];
		}
		cout << endl;
	}
		
}
