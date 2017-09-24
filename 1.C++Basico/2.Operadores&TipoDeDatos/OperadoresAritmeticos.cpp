/*
    Intersemestral C++
    Autor: Daniel Barcenas
    Tema:  Operador ternario
*/
using namespace std;  // nombre de espacio que ayuda a poner solo cout en lugar de std :: cout
#include <iostream>   //libreria principal

int main(){

    int a;  //Variables de tipo entero
    int b;
    int c=0; //podemos asignar un valor o no.

    cout << "\n Introduce el  primer Numero para que se guarde en la variable a \n"; 
    cin >>a;  //guardar en a
    cout << "\n Introduce el  segundo Numero para que se guarde en la variable b \n";
    cin >>b;  //guardar en b

    c=a+b; //Asignacion de la operacion a+b a c
    cout <<"\n La suma de los numero a mas b es: " <<c; //salida en pantalla de la suma hecha en la linea  20
    cout <<"\n La resta de los numero a menos b es: " <<a-b; //se pueden hacer operaciones al momento de imprimir
    cout <<"\n La divicion de los numeros a entre b es: " <<(float)a/b; //casteo a Float de la division de a/b para que salga como float
    cout <<"\n La multiplicaion de los numeros a y b es: " <<a*b;
    cout <<"\n El modulo a%b es: " <<a%b;

    return 0;
}
