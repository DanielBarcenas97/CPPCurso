#include <iostream>

using namespace std;

int main(){

    int x=150;
    int *ap=&x;

    cout<<"El valor de x:"<<x<<endl;
    cout<<"La direccion de memoria de x es: "<<&x<<endl;

    cout<<"El valor de ap:"<<ap<<endl;
    cout <<"El contenido de ap: "<<*ap<<endl;
    cout<<"La direccion de ap es:"<<&ap<<endl;


 return 0;
}
