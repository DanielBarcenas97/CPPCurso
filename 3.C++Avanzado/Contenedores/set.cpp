#include <iostream>
#include <set>

using namespace std;

template<typename T>
void mostrar(T contenedor);	//Funcion para mostrar los contenidos del contenedor

int main() {
	//set<int> conjunto;
	multiset<int> conjunto;
	
	int num_elementos;
	cout << "Ingrese el numero de elementos: ";
	cin >> num_elementos;
	for(int i = 0; i < num_elementos; i++) {
		conjunto.insert(2 * i);		//Insertando elementos
	}
	mostrar(conjunto);
	
	conjunto.insert(2);
	mostrar(conjunto);
	
	//Elimina elementos del conjunto
	conjunto.erase(4);
	mostrar(conjunto);
	
	//Contando elementos
	cout << "El numero de 2 en el conjunto es: " << conjunto.count(2) << endl;
	
}

template<typename T>
void mostrar(T contenedor) {
	cout << "Contenido: ";
	//Iteramos a lo largo del contenedor, con un iterador (apuntador)
	for(typename T::iterator i = contenedor.begin(); i != contenedor.end(); i++) {
		cout << " " << *i;
	}
	cout << endl;
}
