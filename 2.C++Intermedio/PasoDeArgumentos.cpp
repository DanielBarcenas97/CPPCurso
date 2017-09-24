//args.cpp
//Programa que ejemplifica el paso de argumentos mediante la consola/terminal

#include <iostream>
#include <cstdlib>

using namespace std;

//Prototipo de función
float calculaImpuesto(float precio,float impuesto);

//main que acepta argumentos
int main(int argc, char** argv) {
	
	//Código para listar los argumentos ingresados.
	//Descomentar para ver cómo funciona.
	/*int num_args = argc;
	
	for(int i = 0; i < argc; i++) {
		cout << "El argumento " << i 
			<< " es " << argv[i] << endl;
	}*/
	
	float precio = atof(argv[1]);
	float impuesto = atof(argv[2]);
	
	cout << "El impuesto es " 
		<< calculaImpuesto(precio,impuesto) << endl;
	
	return 0;
}

//Definicion de función
float calculaImpuesto(float precio,float impuesto) {
	return precio * impuesto;
}
