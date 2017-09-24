 #include <iostream>

using namespace std;

class Pelota{
private:
    static int PelotasCreadas; //Declaracion del atributo static
public:
    //Constructor
    Pelota(){
       PelotasCreadas++;
    }
    //Funcion para obtener el numero de pelotas.
    int GetPelotasCreadas(){
       return PelotasCreadas;
    }
};

int Pelota::PelotasCreadas=0; //inicializacion de atributo static

int main(){
   //Creamos objetos pelota.
   Pelota p1,p2,p3,p4;

  cout<<"Las Pelotas Creadas son:"<<p3.GetPelotasCreadas()<<endl;


}
