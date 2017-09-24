//funcapmatriz.cpp
//Programa que ejemplifica como pasar una matriz mediante apuntadores.

#include <iostream>

using namespace std;

void llenarMatriz(int **matriz,int renglones,int columnas);
void imprimirMatriz(int **matriz,int renglones,int columnas);
void liberarMatriz(int **matriz,int renglones,int columnas);

int main(){

	//Declaramos variables de renglones y columnas así como el apuntador de la matriz
	int renglones;
	int columnas;
	int	**matriz = NULL;

	//Pedimos al usuario los valores deseados
	cout << "Ingrese el numero de renglones: ";
	cin >> renglones;
	cout << "Ingrese el numero de columnas: ";
	cin >> columnas;

	//Reserva dinámica de memoria para los renglones
	matriz = new int*[columnas];
	//Reserva dinámica de memoria para las columnas
	for(int i = 0; i < renglones; i++) {
		matriz[i] = new int[renglones];
	}
	//Validación de memoria (si la reserva fue exitosa o no)
	//Si no es así, que termine la ejecución
	if(matriz == NULL) {
		cout << "Error.Memoria insuficiente." << endl;
		return 1;
	}

	llenarMatriz(matriz,renglones,columnas);
	cout <<"-------------------------------" <<endl;
	cout << "El contenido de la matriz es:" << endl;
	imprimirMatriz(matriz,renglones,columnas);
    liberarMatriz(matriz,renglones,columnas);

	return 0;
}

void llenarMatriz(int **matriz,int renglones,int columnas) {
	for(int i = 0; i < renglones; i++){
		for(int j = 0; j < columnas; j++) {
			cout << "Ingrese el elemento " << i << "," << j << " del arreglo: ";
			cin >> matriz[i][j];
		}
	}
}

void imprimirMatriz(int **matriz,int renglones,int columnas) {
	for(int i = 0; i < renglones; i++){
		for(int j = 0; j < columnas; j++) {
			cout << "\t" << matriz[i][j];
		}
		cout << endl;
	}

}

void liberarMatriz(int **matriz,int renglones,int columnas){

    for(int i = 0; i < columnas; i++){
        delete []matriz[i]; //boraar  columnas
	}
	delete []matriz; //borrar filas

    //cout<<"Memoria Liberada \n";

}
