//Interfaz
//Contiene solo métodos virtuales, atributos y constantes
//Todos sus métodos son virtuales

using namespace std;

class Electrico {
	string clave_bateria;
	virtual void cargarBateria() = 0;
};
