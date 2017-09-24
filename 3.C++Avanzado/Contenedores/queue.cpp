//Queue
//Contenedor que hace de cola (FIFO)
//M�todos principales
//	-push	: Inserta elementos
//	-pop	: Retira elementos
//	-empty	: Verifica si la pila est� vacia
//	-size	: Tama�o de la pila
//	-front 	: Devuelve el elemento en el inicio
//	-back 	: Devuelve el elemento en el final

#include <iostream>
#include <queue>

using namespace std;

int main() {
	
	queue<int> cola;
	
	int numeros;
	
	cout << "Ingresa el numero de elementos: ";
	cin >> numeros;
	
	for(int i = 0; i < numeros; i++) {
		cola.push(i * 2);		//Insertando elementos
	}
	
	if(!cola.empty()) {
		cout << "El elemento en el frente es: " << cola.front() << endl;
		cout << "El elemento en el final es: " << cola.back() << endl;
		cout << "El elemento en el frente es: " << cola.front() << endl;
	}
	
	cout << "El tama�o de la cola es: " << cola.size() << endl;
	
}
