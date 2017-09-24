/*
    Intersemestral C++
    Autor: Daniel Barcenas
    Tema:  Operador ternario
*/
using namespace std;  // nombre de espacio que ayuda a poner solo cout en lugar de std :: cout
#include <iostream>   //libreria principal


int main(void){ //funcion Principal
    float a,d;  //variables locales de tipo flotante
    int b,c;    //varibles locales de tipo entero

    d=a=3.1416; //Asignacion en cadena del valor 3.1416 a las variables d y a
    b=c=5;      //Asignacion en cadena del valor 5 a las variables b y c

    cout <<"El valor de a y d es:"<<a <<" " <<d;  //Salida en pantalla
    cout <<"\n El valor de b es:"<<b;             //Aqui sale el valor de b que es igual a 5   
    cout <<"\n El valor de c es:"<<c;             //Aqui sale el valor de c que es igual a 5  

    a = static_cast<float>(a + c); //Conversion de  la operacion de a+b a tipo Float y se asigna a la variable a
    d = static_cast<float>(b + c); //Conversion de  la operacion de b+c a tipo Float y se asigna a la variable d
    c = static_cast<int>(a + d);    //Conversion de  la operacion de a+d a tipo Entero y se asigna a la variable c

    cout <<"\n \n El nuevo valor de a es:"<<a; //Aqui sale el valor de a que es igual a 8.1416   
    cout <<"\n El nuevo valor de d es:"<<d;    //Aqui sale el valor de d que es igual a 10
    cout <<"\n El nuevo valor de c es:" <<c;   //Aqui sale el valor de b que es igual a  18
 
    return 0; 

}
