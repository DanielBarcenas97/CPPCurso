#include <iostream>
#include "AutoElectrico.h"

AutoElectrico::AutoElectrico(string marca, string modelo): Automovil(marca,modelo){}

void AutoElectrico::claxon() {
	cout << "Beep Beep" << endl;
}

void AutoElectrico::cargarBateria(){
	cout << "El auto carga su bateria" << endl;
}
