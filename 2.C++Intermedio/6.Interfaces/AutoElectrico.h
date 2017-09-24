#include "Automovil.h"
#include "Electrico.h"

class AutoElectrico: public Automovil, public Electrico {
	public:
	//Tenemos que sobreescribir los métodos virtuales puros
	AutoElectrico(string marca, string modelo);
	void claxon();
	void cargarBateria();
};
