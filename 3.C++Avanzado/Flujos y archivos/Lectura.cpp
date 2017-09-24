#include <iostream>
#include <fstream>

using namespace std;

int main() {
	ifstream archivo("Archivo.txt",ios::in);
	
	if(!archivo.is_open()) {
		cerr << "El archivo no se pudo abrir." << endl;
		return 1;
	}
	
	string linea;
	
	while(getline(archivo,linea)) {
		cout << linea << endl;
	}
	
	archivo.close();
}
