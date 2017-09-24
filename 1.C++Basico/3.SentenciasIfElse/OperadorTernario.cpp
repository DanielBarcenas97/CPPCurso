#include <iostream>
using namespace std;

int edad;
int x,y,z;

int main(){
	/*
	cout<<"Ingresa tu edad ";
	cin>>edad;
	// Operador Ternario
	// Tres partes	 Condición	 ?   Resultado True : Resultado False
	cout<<"Eres "<<(  edad<30    ?      "Joven"     :    "Adulto" );
	*/
	cout<<"Ingresa tres valores enteros ";
	cin >> x >> y >> z;
	cout<<"X="<<x<<" Y="<<y<<" Z="<<z<<endl;
	cout<<"El valor mayor es: ";
	(x>y && x>z) ? cout<<"X" : ( (y>z) ? cout<<"Y" : cout<<"Z" );	
	
	return 0;
}





