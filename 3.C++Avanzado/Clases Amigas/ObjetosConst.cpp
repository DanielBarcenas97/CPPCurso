#include <iostream>
using namespace std;
class Auto{
public:
    Auto(string n , string c){
    nombre=n;
    color=c;
    }
    void GetDatos() const{
    cout<<"Es marca: "<<nombre<<" y de "<<" Color: "<<color<<endl;

    }

    void GetDatos(){
    cout<<"Es marca: "<<nombre<<endl;
    cout<<"Es de Color: "<<color<<endl;
    }

private:
    string nombre;
    string color;


};


int main(){
    //objeto Constante
   const Auto miAuto("Audi","Rojo");
   miAuto.GetDatos();
   cout<<endl;
   //objeto no constante
   Auto miAuto2("Bmw","Blanco");
   miAuto2.GetDatos();

   return 0;
}
