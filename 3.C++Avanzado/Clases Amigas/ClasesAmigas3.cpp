#include<iostream>

using namespace std;

class A{ //B es amigo de A, pero A no es amigo de B
private:
    int a,b,c;  //Acceder
public:
    //Amistad
    friend class B; //Clases  Amigas son Siempre Publicas
};                   //Decimos que A puede tomar cosas de B

class B{
private:
    A num;
public:
    void sumar();
};

void B::sumar(){
    cout<<"ingresar un numero a: "<<endl;;
    cin>>num.a;
    cout<<"ingresar un numero b: "<<endl;
    cin>>num.b;
    num.c=num.a+num.b;
    cout<<"Suma: "<<num.c<<endl;
}

int main(){
    B obj;
    obj.sumar();
    return 0;
}
