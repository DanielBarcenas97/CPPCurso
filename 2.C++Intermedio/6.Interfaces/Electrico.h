//Interfaz
//Contiene solo m�todos virtuales, atributos y constantes
//Todos sus m�todos son virtuales

using namespace std;

class Electrico {
	string clave_bateria;
	virtual void cargarBateria() = 0;
};
