//funcap.cpp
//Programa que ejemplifica algunas declaraciones de apuntadores
//y su uso en funciones para paso de parametros por referencia

#include <iostream> 

using namespace std;

//Pŕototipo de función con apuntador como parámetro
void incrementar(int* x);

int main(){
	
	int a = 15;		//Declaramos una variable de tipo entero y la inicializamos
	int* ap_a = &a;	//Declaramos un apuntador a entero y lo inicializamos con la dirección de a.
	int b,c,d;		//Declaramos tres variables de tipo entero
	int *ap_b,ap_c;	//Declaramos un apuntador a entero ap_b, y una variable de tipo entero ap_c
	int* ap,* ap2;	//Declaramos dos apuntadores a entero, ap y ap2
	
	
	cout << "a vale: " << a << endl;

	//Como la función recibe un apuntador a entero (o dirección de memoria que aloja un entero)
	//Usamos el operador & o un apuntador
	//incrementar(&a); 
	incrementar(ap_a); // Equivale a incrementar(&a)
	cout << "La variable incrementada vale" << a << endl;
	
	return 0;
}

//Definición de la función
void incrementar(int* x) {
	(*x)++;
}
