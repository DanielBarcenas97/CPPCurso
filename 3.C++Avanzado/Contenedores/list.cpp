//Lista

#include <iostream>
#include <list>

using namespace std;

template<typename T>
void mostrar(T contenedor);	//Funcion para mostrar los contenidos del contenedor
bool mayorAF(char caracter);

int main (){
	list<char> lista;
	
	int num_elementos;
	char elemento;
	
	cout << "Ingresa el numero de elementos: " << endl;
	cin >> num_elementos;
	for (int i = 0; i< num_elementos; i++) {
		cout << "Ingresa el dato a insertar: ";
		cin >> elemento;
		lista.push_back(elemento);	//Insertamos elementos al final
	}
	mostrar(lista);
	lista.push_front('z');	//Insertamos elementos al inicio
	lista.push_front('b');
	mostrar(lista);
	
	//Insertar elementos en la lista
	list<char>::iterator it = lista.begin();	//Colocamos un iterador al inicio
	advance(it,2);								//Lo recorremos dos lugares
	lista.insert(it,'A');						//E insertamos elemento
	mostrar(lista);
	
	//Eliminar elementos
	it = lista.begin();		//Colocamos iterador al inicio
	advance(it,3);			//Lo recorremos
	lista.erase(it);		//Eliminamos
	mostrar(lista);
	
	//Ordenar elementos
	lista.sort();
	mostrar(lista);
	
	//Invertir elementos
	lista.reverse();
	mostrar(lista);
	
	//Remover elementos
	lista.remove('A');
	mostrar(lista);
	
	//Remover condicionalmente
	lista.remove_if(mayorAF);
	mostrar(lista);
	
	//Remover elementos repetidos
	lista.unique();
	mostrar(lista);
	
	
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

bool mayorAF(char caracter) {
	return caracter > 'F';
}









