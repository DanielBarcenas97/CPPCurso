//breakcontinue.cpp
//Ejemplo del funcionamiento de las instrucciones de control break y continue

#include <iostream> 

using namespace std;

int main() {
	
	//Iteramos sobre un rango de números (0-15)
	for(int i = 0; i < 15; i++) {
		/*if (i != 3 && i <= 9 )  { 
			cout << i << endl;
		}*/

		//Mandamos un mensaje en caso de encontrar un múltiplo de 3,
		//interrumpimos la iteración y pasamos a la siguiente
		if (i % 3 == 0) {
			cout << "Encontre un multiplo de 3, me lo voy a saltar..." << endl;
			continue;
		}

		//Aquí ordenamos imprimir un mensaje al encontrar un 6, pero no lo hará
		//ya que se nunca va a llegar a este punto por el if anterior.
		if (i == 6) {
			cout << "Imprimo un 6. La verdad es que no imprimo nada :(" << endl;
		}

		//break fuerza la interrupción del ciclo completamente.
		if (i > 9) {
			cout << "Llegue al 9. Terminando ciclo for." << endl;
			break;
		}
		cout << i << endl;
	}
	
	return 0;
} 
