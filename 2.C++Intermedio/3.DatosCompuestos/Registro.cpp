#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

void ingresar(struct persona p[100],int n);
void imprimir(struct persona p[100],int n);

struct persona{
    int id;
    char nombre[50];
    char ape_paterno[50];
    char ape_materno[50];
    char direccion[50];
    int edad;
};

int main(void){
    struct persona p[100];
    int n;
    cout<<"N de personas: "; cin>>n;
    ingresar(p,n);
    imprimir (p,n);
    return 0;
}

void ingresar(struct persona p[100],int n){
    for(int i=0;i<n;i++){
        system("cls");
        p[i].id=i+1;
        cout<<"Id           :"<< p[i].id<<endl;
        cin.ignore();
        cout<<"Nombre       :"; cin.getline(p[i].nombre,50);
        cout<<"A Paterno    :"; cin.getline(p[i].ape_paterno,50);
        cout<<"A Materno    :"; cin.getline(p[i].ape_materno,50);
        cout<<"Direccion    :"; cin.getline(p[i].direccion,50);
        cout<<"Edad         :"; cin>>p[i].edad; cout<<endl;
    }
}
void imprimir(struct persona p[100],int n){
    system("cls");
    cout<<setw(10)<<"Nombre"<<setw(15)<<"A.Paterno"<<setw(15)<<"A.Materno"<<setw(15)<<"Direccion"<<setw(15)<<"Edad"<<endl;
    cout<<"===========================================================================================\n";

    for(int i=0; i<n; i++){
        cout <<setw(10)<<p[i].nombre<<setw(15);
        cout <<p[i].ape_paterno<<setw(15);
        cout <<p[i].ape_materno<<setw(15);
        cout <<p[i].direccion<<setw(15);
        cout <<p[i].edad<<endl;
    }
}
