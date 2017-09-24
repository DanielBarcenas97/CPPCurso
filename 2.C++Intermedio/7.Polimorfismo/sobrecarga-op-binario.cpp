//Sobrecarga de operadores binarios

#include <iostream>

using namespace std;

class Complejo {
	public:
		float real;
		float imaginario;
		Complejo(float real,float imaginario) {
			this->real = real;
			this->imaginario = imaginario;
		}
		void mostrar(){
			if(imaginario > 0) {
				cout << real << "+" << imaginario << "i" << endl;
			}
			else if (imaginario < 0) {
				cout << real << imaginario << "i" << endl;
			}
			else {
				cout << real << endl;
			}
		}
		//Sobrecargando el operador +
		Complejo operator+(const Complejo& comp2){
			float res_real = real + comp2.real;
			float res_img = imaginario + comp2.imaginario;
			return Complejo(res_real,res_img);
		}
};

int main() {
	
	Complejo comp1(3,4);
	Complejo comp2(-1,-5);
	
	cout << "El primer complejo es: ";
	comp1.mostrar();
	cout << "El segundo complejo es: ";
	comp2.mostrar();
	
	Complejo comp3 = comp1 + comp2;
	cout << "La suma es: ";
	comp3.mostrar();
	
}
