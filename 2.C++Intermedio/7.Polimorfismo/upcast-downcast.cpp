//Polimorfismo
//Upcasting y downcasting

#include<iostream>

using namespace std;

class Pokemon {
protected:
	string nombre;
public:
	Pokemon(string nombre) {
		this->nombre = nombre;
	}
	string getNombre() {
		return nombre;
	}
	//Un método virtual nos ayuda a forzar a que se ejecute el primer
	//método no virtual encontrado en la jerarquía de clases
	//en caso de haber sobreescritura de éstos
	virtual void comer() {
		cout << nombre << " come su comida." << endl;
	}
	void jugar() {
		cout << nombre << " juega." << endl;
	}
};

class Pikachu: public Pokemon {
public:
	Pikachu(string nombre = "Pikachu"): Pokemon(nombre)	 {}
	void comer() {
		cout << nombre << " come baterías." << endl;
	}
	void jugar() {
		cout << nombre << " juega en la central electrica." << endl;
	}
};

class Charmander: public Pokemon {
public:
	Charmander(string nombre = "Charmander"): Pokemon(nombre) {}
	void comer() {
		cout << nombre << " come aire." << endl;
	}
	void jugar() {
		cout << nombre << " juega en un volcan." << endl;
	}
};

int main() {
	
	Pokemon *arreglo[4];
	
	arreglo[0] = new Pikachu();
	arreglo[1] = new Pikachu("Spark");
	arreglo[2] = new Charmander();
	arreglo[3] = new Charmander("Flamita");
	
	arreglo[2]->comer();
	arreglo[2]->jugar();
	
	//Usando un apuntador a la superclase, podemos tratar a los objetos
	//de las subclases como si fueran de la superclase.
	//Siempre y cuando la conversión (dynamic_cast) sea válida.
	Pokemon* ap_poke = arreglo[2];
	cout << endl;
	for(int i = 0; i < 4; i++){
		ap_poke = dynamic_cast<Pikachu*>(arreglo[i]);
		if(ap_poke != NULL) {
			cout << ap_poke->getNombre() << " es un Pikachu." << endl;
			ap_poke->jugar();
		}
		ap_poke = dynamic_cast<Charmander*>(arreglo[i]);
		if(ap_poke != NULL) {
			cout << ap_poke->getNombre() << " en un Charmander" << endl;
		}
	}
	
	//Usando apuntadores a las subclases, podemos tratar a los objetos
	//de la superclase como si fueran de la subclase.
	//Siempre y cuando la conversión (dynamic_cast) sea válida.
	Pikachu* ap_pika = NULL;
	Charmander* ap_char = NULL;
	cout << endl;
	for(int i = 0; i < 4; i++){
		ap_pika = dynamic_cast<Pikachu*>(arreglo[i]);
		if(ap_pika != NULL) {
			cout << ap_pika->getNombre() << " es un Pikachu." << endl;
			ap_pika->jugar();
		}
		ap_char = dynamic_cast<Charmander*>(arreglo[i]);
		if(ap_char != NULL) {
			cout << ap_char->getNombre() << " en un Charmander" << endl;
			ap_char->jugar();
		}
	}
}
