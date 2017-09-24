//apfunciones2.cpp
//Programa que ejemplifica cómo se puede utilizar un arreglo de apuntadores a función

#include <iostream>

using namespace std;

//Prototipos de funciones
void ladrar();
void comer();
void dormir();
void jugar();

int main() {

	int opcion;
	//Declaramos un arreglo de apuntadores a funciones.
	void (*accion[4])() = {ladrar,comer,dormir,jugar};
	cout << "El perro puede realizar estas acciones. " << endl;
	cout << "\t(1) Ladrar" << endl;
	cout << "\t(2) Comer" << endl;
	cout << "\t(3) Dormir" << endl;
	cout << "\t(4) Jugar" << endl;
	cout << "Ingrese una opcion: ";
	cin >> opcion;

	//Llamamos a las funciones mediante los apuntadores en el arreglo.
	switch(opcion) {
		case 1:
		    accion[0]();
			break;
		case 2:
			accion[1]();
			break;
		case 3:
			accion[2]();
			break;
		case 4:
			accion[3]();
			break;
		default:
			cout << "Opcion incorrecta" << endl;
	}


	return 0;
}

//Definiciones de funciones
void ladrar(){
	cout << "Guau guau" << endl;
}
void comer(){
	cout << "Comida!!!!" << endl;
}
void dormir(){
	cout << "El perrito duerme" << endl;
}
void jugar(){
	cout << "Lanza la pelota!!" << endl;
}
