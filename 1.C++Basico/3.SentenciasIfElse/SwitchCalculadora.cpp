#include <iostream>
using namespace std;

int num1, num2, op;


int main(){
	cout<<"Ingresa los dos numeros a operar ";
	cin>>num1>>num2;
	cout<<"Que quieres hacer? \n1 o 5 ) Suma\n2) Resta\n3) Multiplicacion\n4) Division"<<endl;
	cin>>op;
	
	switch(op){
		case 1:
		case 5:
			cout<<"Suma: "<<num1+num2<<endl;
			break; // Termina a un switch (o cualquier otra estructura en que sea usado)
		case 2:
			cout<<"Resta: "<<num1-num2<<endl;
			break;
		case 3:
			cout<<"Multiplicacion: "<<num1*num2<<endl;
			break;
		case 4:
			if(num2!=0) cout<<"Division: "<<num1/num2<<endl;
			else cout<<"No se puede dividir entre cero "<<endl;
			break;
		default:// Código para los demás casos
			cout<<"No elegiste un caso programado"<<endl;
			break;
	}
	
	cout<<"Fuera del switch"<<endl;
	
	return 0;
}
