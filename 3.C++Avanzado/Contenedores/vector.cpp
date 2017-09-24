//Vector
//Contenedor que hace de arreglo dinámico (lista ligada)
//Métodos principales
//	-push_back	: Inserta elemento al final
//	-pop_back	: Retira elemento al final
//	-insert 	: Inserta un elemento en el lugar especificado
//	-erase		: Retira un elemento en el lugar especificado
//	-clear		: Limpia el vector
//	-empty		: Verifica si el vector está vacio
//	-size		: Tamaño del vector
//	-front 		: Devuelve el elemento en el inicio
//	-back 		: Devuelve el elemento en el final
//	-at			: Devuelve el elemento en cierto índice

#include <iostream>
#include <vector>

using namespace std;

template<typename T>
void mostrar(T contenedor);	//Funcion para mostrar los contenidos del contenedor

int main() {
	vector<int> vect1;
	vector<int> vect2;
	
	int elementos;
	std::cout << "Ingrese el numero de elementos: ";
	std::cin >> elementos;
	
	for(int i = 0; i < elementos; i++) {
		vect1.push_back(2 * i + 1);	//Insertamos elementos al final
	}
	mostrar(vect1);
	
	//Inicializando un vector a partir de un arreglo
	int arreglo[] = {20,30,60,40,10,70,0,100};
	vect2 = vector<int>(arreglo,arreglo+6);
	mostrar(vect2);
	
	//Insertar elementos en el vector
	vect1.insert(vect1.begin(),55);		//Inserta al inicio
	vect1.insert(vect1.begin()+3,75);	//Inserta en la 3a posicion
	mostrar(vect1);
	
	//Insertando elementos desde otro vector
	//Inserta en el inicio de vect1, el rango desde el inicio al final de vect2.
	vect1.insert(vect1.begin(),vect2.begin(),vect2.end());
	mostrar(vect1);
	
	//Accediendo y modificando a elementos
	cout << "El elemento 7 del vector es: " << vect1[6] << endl;
	vect1[7] = 1000;
	
	//Eliminar elementos
	vect1.erase(vect1.begin()+1);	//Eliminamos el indice 1
	vect1.erase(vect1.begin()+2,vect1.begin()+5); //Eliminando desde 2 hasta 5
	
	mostrar(vect1);
	
	
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
