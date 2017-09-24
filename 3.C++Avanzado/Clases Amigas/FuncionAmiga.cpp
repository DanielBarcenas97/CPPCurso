#include <iostream>
using namespace std;

class Persona{

  private:
  	string Nombre;
  	friend void FuncionAmiga(Persona&); //Valor por refeferencia

  public:
  	Persona(string _Nombre="Sin Nombre"){
  		Nombre=_Nombre;
  	}
  	void setNombre(string _Nombre){
  		Nombre=_Nombre;
  	}
  	string GetNombre(){
  		return Nombre;
  	}
};

void FuncionAmiga(Persona &unaPersona){
	unaPersona.Nombre="Pepe";
}

int main(){
	Persona p;
	cout<<p.GetNombre();
	cout<<endl;
	FuncionAmiga(p);
	cout<<p.GetNombre();
	return 0;
}
