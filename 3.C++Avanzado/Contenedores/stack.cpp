//Stack
//Contenedor que hace de pila (LIFO)
//Métodos principales
//	-push	: Inserta elementos
//	-pop	: Retira elementos
//	-empty	: Verifica si la pila está vacia
//	-size	: Tamaño de la pila
//	-top 	: Devuelve el elemento en el tope

#include <iostream>
#include <stack>	//Pila/Stack

using namespace std;

int main() {
	
	stack<int> pila1;
	stack<int> pila2;
	
	int numeros;
	int elemento;
	
	cout << "Ingrese el numero de elementos: ";
	cin >> numeros;
	
	for(int i = 0; i < numeros; i++ ){
		cout << "Ingrese el elemento a agregar: ";
		cin >> elemento;
		pila1.push(elemento); //Insertando elementos
	}
	
	cout << "La pila esta vacia: " << boolalpha << pila1.empty() << endl;
	
	cout << "El tamaño de la pila es: " << pila1.size() << endl;
	
	//Es muy recomendable checar si la pila está vacía antes de 
	//ejecutar los métodos top y pop.
	cout << "El elemento en el tope de la pila: " << pila1.top() << endl;
	
	if (!pila1.empty()) {
		pila1.pop();	//Retirando elementos de la pila
	}
		
	cout << "El elemento en el tope de la pila: " << pila1.top() << endl;
	
	cout << "El numero de elementos en la pila2: " << pila2.size()  << endl;
	cout << "El numero de elementos en la pila1: " << pila1.size()  << endl;
	
	//Colocar bandera -std=c++11 al compilar
	pila1.swap(pila2);
	
	cout << "El numero de elementos en la pila2: " << pila2.size()  << endl;
	cout << "El numero de elementos en la pila1: " << pila1.size()  << endl;
}


