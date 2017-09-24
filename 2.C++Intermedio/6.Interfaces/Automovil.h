//Clase abstracta
//Tiene al menos un método o función virtual
//No podemos crear objetos de esta clase

using namespace std;

class Automovil {
	public:
		string marca;
		string modelo;
		Automovil(string marca, string modelo);
		virtual void encender();
		virtual void claxon() = 0; //Función virtual pura		
};
