//funcmatrix.cpp
//Programa ejemplo del uso de funciones con matrices.

#include <iostream>

using namespace std;

const int renglones = 2;
const int columnas = 2;

//Prototipos de funciones
void imprimirMatriz(int matriz[][columnas],int renglones);
//void imprimirMatrizTriDim(int matriz[][columnas][profundidad],int renglones);

int main() {
	
	int matriz[renglones][columnas] = {{2,5},{6,7}};
	imprimirMatriz(matriz,renglones);
	
	return 0;
}

//Definiciones de funciones
void imprimirMatriz(int matriz[][columnas],int renglones) {
	for(int i = 0; i < renglones; i++) {
		for(int j = 0; j < renglones; j++) {
			cout << "matriz[" << i << "][" << j << "]=" << matriz[i][j] << endl;
		}
	}
}
