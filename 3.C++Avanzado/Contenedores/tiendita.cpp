#include <iostream>
#include <vector>

using namespace std;

class Producto {
public:
	string nombre;
	float precio;
	int cantidad;
	Producto(string nombre, float precio, int cantidad) {
		this->nombre = nombre;
		this->precio = precio;
		this->cantidad = cantidad;
	}	
};

int main() {
	vector<Producto> tiendita;
	int num_productos;
	string nombre;
	float precio;
	int cantidad;
	
	cout << "Ingresa el numero de productos: ";
	cin >> num_productos;
	for(int i = 0; i< num_productos; i++) {
		cout << "Nombre: ";
		cin >> nombre;
		cout << "Precio: ";
		cin >> precio;
		cout << "Cantidad: ";
		cin >> cantidad;
		tiendita.push_back(Producto(nombre,precio,cantidad));
	}
	cout << endl;
	cout << "En la tiendita hay:" << endl;
	
	for(int i = 0; i < tiendita.size(); i++) {
		cout << tiendita[i].nombre << "\t" << tiendita[i].precio << "\t" 
		<< tiendita[i].cantidad << endl;
	}
	
}
