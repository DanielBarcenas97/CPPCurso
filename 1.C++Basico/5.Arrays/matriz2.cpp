#include<iostream>

using namespace std;

int main(){
	
	int matriz1[3][2];
	int matriz2[3][2];
	int suma[3][2];
	
	cout << "LLena la matriz 1" << endl;
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 2; j++){
			cout << "matriz[" << i << "][" << j << "] : ";
			cin >> matriz1[i][j];
		}
	}
	cout << endl;
	
	cout << "Llena la matriz 2" << endl;
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 2; j++){
			cout << "matriz[" << i << "][" << j << "] : ";
			cin >> matriz2[i][j];
		}
	}
	cout << endl;
	
	//Suma de matrices:
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 2; j++){
			suma[i][j] = matriz1[i][j] + matriz2[i][j];
			cout << "\t" << suma[i][j];
		}
		cout << endl;
	}
	cout << endl;
	
	int m1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int m2[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int multi[3][3] = {{0,0,0},{0,0,0},{0,0,0}};
	
	//Multiplicación de matrices:
	for(int k = 0; k < 3; k++){
		for(int i = 0; i < 3; i++){
			for(int j = 0; j < 3; j++){
				multi[k][i] += m1[k][j] * m2[j][i];
			}
		}
	}
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout << "\t" << multi[i][j];
		}
		
		cout << endl;
	}
	
	cout << endl << endl << endl;
	
	return 0;
}
