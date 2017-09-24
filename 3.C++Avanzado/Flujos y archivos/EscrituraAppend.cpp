#include <iostream>
#include <fstream>

using namespace std;

int main() {
	ofstream archivo("Archivo.txt",ios::app);
	
	if(!archivo.is_open()) {
		cerr << "Error al abrir el archivo." << endl;
		return 1;
		//exit(EXIT_FAILURE); <--- se encuentra en <cstdlib>
	}
	
	string linea;
	getline(cin,linea);
	while(linea != "exit") {
		archivo << linea << endl;
		getline(cin,linea);
	}
	
	archivo.close();
	
	return 0;
}
