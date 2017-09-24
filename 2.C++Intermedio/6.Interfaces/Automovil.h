//Clase abstracta
//Tiene al menos un m�todo o funci�n virtual
//No podemos crear objetos de esta clase

using namespace std;

class Automovil {
	public:
		string marca;
		string modelo;
		Automovil(string marca, string modelo);
		virtual void encender();
		virtual void claxon() = 0; //Funci�n virtual pura		
};
