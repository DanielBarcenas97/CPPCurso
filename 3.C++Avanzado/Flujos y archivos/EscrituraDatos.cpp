#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {
	
	ofstream catalogo("Datos.txt",ios::out);
	
	if(!catalogo.is_open()) {
		cerr << "No se pudo abrir el archivo." << endl;
		return 1;
		//exit(EXIT_FAILURE);
	}
	
	int num_productos;
	float precio;
	string nombre;
	int existencia;
	
	cout << "Ingrese el numero de productos: ";
	cin >> num_productos;
	
	for(int i = 0; i < num_productos; i++) {
		cout << "Ingrese el nombre del producto: ";
		cin >> nombre;
		cout << "Ingrese el precio: ";
		cin >> precio;
		cout << "Ingrese la existencia: ";
		cin >> existencia;
		catalogo << nombre << " " << precio << " " << existencia << endl;
	}
	catalogo.close();
	
	ifstream catalogo_lect("Datos.txt",ios::in);
	
	if(!catalogo_lect.is_open()) {
		cerr << "No se pudo abrir el archivo." << endl;
		return 1;
	}
	
	//while(!catalogo_lect.eof()) {
	while(catalogo_lect >> nombre >> precio >> existencia) {
		cout << setw(8) << nombre << setw(8) << precio 
			<< setw(8) << existencia << endl;
	}
	
	catalogo_lect.close();
}
