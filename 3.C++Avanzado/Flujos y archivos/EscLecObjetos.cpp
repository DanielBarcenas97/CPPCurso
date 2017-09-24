#include <iostream>
#include <fstream>
#include <cstring>
#include <iomanip>

using namespace std;

class Producto{
public:
	char nombre[20];
	float precio;
	int existencia;
	Producto(const string& producto = "",float precio = 0.0 ,int existencia = 0){
		int tamano = producto.size();
		tamano = tamano < 20 ? tamano : 19;
		producto.copy(nombre,tamano);
		nombre[tamano] = '\0';
		this->precio = precio;
		this->existencia = existencia;
	}
};

int main(){
	//ofstream catalogo_esc("Catalogo.dat",ios::out|ios::binary);
	 0
	//Este tipo de declaración nos permite manejar distintos archivos con el mismo
	//objeto
	ofstream catalogo_esc;
	catalogo_esc.open("Catalogo.dat",ios::out|ios::binary);
	
	if(!catalogo_esc.is_open()) {
		cerr << "Error al abrir el archivo." << endl;
		return 1;
	}
	
	int num_productos;
	Producto prod;
	cout << "Ingrese el numero de productos: ";
	cin >> num_productos;
	
	for(int i = 0; i < num_productos; i++) {
		cout << "Ingrese el nombre del producto: ";
		cin >> prod.nombre;
		cout << "Ingrese el precio: ";
		cin >> prod.precio;
		cout << "Ingrese la existencia: ";
		cin >> prod.existencia;
		catalogo_esc.write(reinterpret_cast<char*>(&prod),sizeof(Producto));
	}
	
	catalogo_esc.close();
	
	ifstream catalogo_lect("Catalogo.dat",ios::in|ios::binary);
	if(!catalogo_lect.is_open()) {
		cerr << "Error al abrir el archivo.";
		return 1;
	}
	
	catalogo_lect.read(reinterpret_cast<char*>(&prod),sizeof(Producto));
	
	cout << setw(20) << "Nombre" << setw(10) << "Precio" << setw(10) 
		<< "Existencia" << endl;
	while(catalogo_lect && !catalogo_lect.eof()){
		cout << setw(20) << prod.nombre << setw(10) << prod.precio
			<< setw(10) << prod.existencia << endl;
		catalogo_lect.read(reinterpret_cast<char*>(&prod),sizeof(Producto));
	}
	
	catalogo_lect.close();
}
