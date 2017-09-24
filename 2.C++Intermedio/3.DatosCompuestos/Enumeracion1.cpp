#include <iostream>
using namespace std;

int main(){
    enum Semana{Lunes, Martes, Miercoles,Jueves,Viernes ,Sabado, Domingo}; //Tipo de dato enum
    //Tipo de dato enum Variable Dias contiene valores constantes

    Semana Dia;

    Dia=Lunes;
    cout<<Dia<<endl;

    switch(Dia){
   case Lunes:
       cout<<"Es Lunes"<<endl;
       break;
   case 2:
       cout<<"Es Martes "<<endl;
       break;
   case 3:
       cout<<"Es Miercoles"<<endl;
       break;
   case 4:
       cout<<"Es Jueves"<<endl;
       break;
   case 5:
       cout<<"Es Viernes"<<endl;
       break;
   case 6:
       cout<<"Es Sabado"<<endl;
       break;
   case 7:
       cout<<"Es Domingo"<<endl;
       break;
    }

   return 0;
}
