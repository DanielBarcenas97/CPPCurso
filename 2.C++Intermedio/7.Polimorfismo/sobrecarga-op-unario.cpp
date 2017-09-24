//Sobrecarga de operadores unarios (++)

#include<iostream> 

using namespace std;

class Caja {
	private:
		int capacidad;
		string color;
	public:
		Caja(int capacidad){
			this->capacidad = capacidad;
		}
		int getCapacidad() {
			return capacidad;
		}
		void setColor(string color){
			this->color = color;
		}
		string getColor() {
			return color;
		}
		//Sobrecargar el preincremento
		Caja operator++(){
			capacidad += 10;
			return Caja(capacidad);
		}
		//Sobrecargar el postincremento
		Caja operator++(int) {
			//Respaldamos el valor antiguo
			Caja resp(capacidad);
			capacidad += 10;
			return resp;
		}
};

int main() {
	
	Caja caja1(50);
	//Copiar objetos
	Caja caja2 = Caja(caja1);
	
	cout << "La caja1 tiene una capacidad de " << caja1.getCapacidad() << endl;
	cout << "La caja2 tiene una capacidad de " << caja2.getCapacidad() << endl;
	cout << endl;
	
	caja2 = caja1++;
	
	cout << "La caja1 tiene una capacidad de " << caja1.getCapacidad() << endl;
	cout << "La caja2 tiene una capacidad de " << caja2.getCapacidad() << endl;
	cout << endl;
	
	caja2 = ++caja1;
	
	cout << "La caja1 tiene una capacidad de " << caja1.getCapacidad() << endl;
	cout << "La caja2 tiene una capacidad de " << caja2.getCapacidad() << endl;
	cout << endl;
}
