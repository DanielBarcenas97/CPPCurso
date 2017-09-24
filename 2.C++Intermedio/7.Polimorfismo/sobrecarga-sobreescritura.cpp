//Polimorfismo
//Sobrecarga y sobreescritura

#include <iostream>

using namespace std;

class Animal {
	public:
		string nombre;
		bool sueltaPelo;
		Animal() { 
			cout << "Se creo un animal" << endl;
		}
		Animal(string nombre) {
			this->nombre = nombre;
		}
		void comer() {
			cout << "El animal come, nomnomnom" << endl;
		}
		void comer(string comida) {
			cout << "El animal come " << comida << endl;
		}
};

class Perro: public Animal {
	public:
		string juguete;
		string raza;
		//Sobreescritura de atributos
		bool sueltaPelo = false;
		
		Perro(string nombre): Animal(nombre) {}
		Perro(string nombre, string raza): Animal(nombre) {
			this->raza = raza;
		}
		//Sobrecarga de m?todos
		void jugar() {
			cout << "El perro juega con " << juguete << endl;
		}
		void jugar(Perro amigo) {
			cout << "El perro juega con " << amigo.nombre << endl;
		}
		//Sobreescritura de m?todo
		void comer() {
			cout << "El perro come sus croquetas" << endl;
		}
		void comer(string comida) {
			cout << "El perro come " << comida << endl;
		}
};

int main() {
	
	Animal animal1;
	Animal animal2("Fido");
	
	Perro perro1("Firulais");
	Perro perro2("Solovino","callejero");
	
	animal1.comer();
	animal2.comer("papas");
	perro1.comer();
	perro2.comer("pollo");
	
	
	return 0;
}
