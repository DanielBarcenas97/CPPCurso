#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	int x = 10000;
	float y = 20.48;
	float z = x / y;
	
	//Cambio de base
	cout << showbase;	//Muestra la base del número
	cout << "El numero 10000 en hexadecimal: " << hex << x << endl;
	cout << noshowbase;	//Oculta la base del número
	cout << "El numero 10000 en octal es: " << oct << x << endl;
	
	cout << "Regresando a base 10..." << dec << x << endl;
	
	//Ancho de cadena
	//setw() hay que ponerlo cada vez que se quiera utilizar
	cout << setw(10) << x << endl;
	cout << setw(10) << right << y << endl;
	cout << setw(10) << showbase << internal << hex << x << noshowbase << endl;
	cout.fill('*');
	cout << setw(10) << left << x << endl;
	
	//Impresión en mayusculas y minusculas
	cout << endl;
	cout << showbase << uppercase << hex << x << endl;
	cout << nouppercase << hex << x << endl;
	cout << noshowbase << dec;
	
	//Impresión con decimales
	cout << "z con todos sus decimales: " << z << endl;
	cout << "z con 2 decimales y notacion exp: " << setprecision(2) << z << endl;
	cout << "z con 2 decimales: " << fixed << z << endl;
	cout << "z con 5 decimales: " << setprecision(6) << z << endl;
	cout << "z sin decimales: " << setprecision(0) << z << endl;
	
	//Impresión de valores booleanos
	cout << "true: " << true << endl;
	cout << "false: " << false << endl;
	cout << boolalpha << "true: " << true << endl;
	cout << boolalpha << "false: " << false << endl;
	cout << noboolalpha;
	
	
	
	
}
