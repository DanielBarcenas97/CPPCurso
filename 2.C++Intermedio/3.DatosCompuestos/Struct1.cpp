#include <iostream>
#include <cstdlib>
using namespace std;

struct alumno{
    int edad;
    char nombre[50];
    long telefono;
    float promedio;
    char direccion[50];

};

int main(){
    /*
    alumno alu1; //Creamos una variable del tipo e dato alumno
    alu1.telefono=2281390401;
    Strcpy(alu1.dirección,”Calle Coatepec” );
    cout<<"Vamos a guardar edad en alu1 "<<endl;
    cin>>alu1.edad;
    cout <<alu1.edad;
    */

    struct alumno grupo[2];
    float promedio;

    for(int i=0; i<2; i++){
        system("cls");
        cout<<"En el alumno:  "<<i+1<<" Vamos a guardar sus datos"<<endl;
        cout<<"Edad"<<endl;
        cin>>grupo[i].edad;
        cin.ignore();
        cout<<"Nombre"<<endl;
        cin.getline(grupo[i].nombre,50);
        cout<<"Telefono"<<endl;
        cin>>grupo[i].telefono;
        cout<<"Promedio"<<endl;
        cin>>grupo[i].promedio;
        cout<<"Direccion"<<endl;
        cin.getline(grupo[i].direccion,50);
        promedio+=grupo[i].promedio;

    }

    for (int i=0; i<2; i++){
        cout<<"En el alumno:  "<<i+1<<" tiene los siguientes datos:"<<endl;
        cout<<"Edad: "<<grupo[i].edad<<endl;
        cout<<"Nombre"<<grupo[i].nombre<<endl;
        cout<<"Telefono"<<grupo[i].telefono<<endl;
        cout<<"Promedio"<<grupo[i].promedio<<endl;
        cout<<"Direccion"<<grupo[i].direccion<<endl;

    }

    cout<<"El promedio del grupo es:"<<promedio/2<<endl;







    return 0;
}
