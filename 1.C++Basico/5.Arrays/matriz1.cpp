#include<iostream>

using namespace std;

int main(){
	
	int matriz[2][2];
	
	//LLenar una matriz
	
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			cout << "matriz[" << i << "][" << j << "] : ";
			cin >> matriz[i][j];
		}
	}
	cout << endl;
	
	//Recorrer una matriz
	
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			cout << "\t" << matriz[i][j];
		}
		
		cout << endl;
	}
	
	cout << endl << endl << endl;
	
	//Cambiar elementos de la matriz:
	
	matriz[1][0] = 132;
	
	cout << "Matriz despues de cambiar un valor:" << endl << endl;
	
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			cout << "\t" << matriz[i][j];
		}
		
		cout << endl;
	}
	
	return 0;
}
