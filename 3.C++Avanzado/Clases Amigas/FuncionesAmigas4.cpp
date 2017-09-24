#include <iostream>
using namespace std;
class Numero
{
    friend void establecer(double ,Numero &);//establecer es una funcion amiga.
    public:
        Numero(double);//constructor.
        void mostrar();
    private:
        double x;//dato miembro.
};

Numero::Numero(double b){
  x = b;
}

void Numero::mostrar()
{
  cout << "El numero es: " << x << endl;
}

void establecer(double a, Numero &objeto)
{
  objeto.x = a; //puede modificar el dato miembro porque es amiga.
}

int main(){
  cout << "Creamos el objeto Pi" << endl;
  Numero Pi(7.8);
  Pi.mostrar();
  cout << "Modificamos con la funcion amiga" << endl;
  establecer(3.14,Pi);//utilizamos la funcion amiga.
  Pi.mostrar();
  return 0;
}
