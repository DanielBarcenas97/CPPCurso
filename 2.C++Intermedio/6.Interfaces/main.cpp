#include <iostream>

#include "AutoElectrico.h"

int main() {
	
	AutoElectrico mi_coche("Nissan","Tsuru");
	
	mi_coche.claxon();
	mi_coche.cargarBateria();
	
	return 0;
}
