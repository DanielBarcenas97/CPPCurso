/*
    Intersemestral C++
    Autor: Rogelio Lopez
    Tema: Operador ternario
*/
#include <iostream>
using namespace std;
// Variable global
int edad;
// string es el tipo de dato que se usa para manejar cadenas.
string categoria;
int main(){
    cout <<"Dame tu edad: ";
    cin>>edad;
    // categoria= (edad<30 ? "Joven":"Adulto");
    // Para usar el operador ternario dentro de una impresión se debe de poner entre parentesis.
    cout <<"Eres un: " <<(edad<30 ? "Joven":"Adulto");
    return 0;
}
