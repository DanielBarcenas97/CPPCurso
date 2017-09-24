/*
    Intersemestral C++
    Autor: Daniel Barcenas
    Tema:  Operador ternario
*/
using namespace std;  // nombre de espacio que ayuda a poner solo cout en lugar de std :: cout
#include <iostream>   //libreria principal

int main(){  //Funcion principal 
    int seg, hr, min; //Variables locales de tipo entero
    cout << "Introduce los segundos: "; //Salida en pantalla
    cin >> seg; //Ingreso de datos y se guardan en la variable sec 
    cout << seg << " segundos son "; //imprime los segundos ingresasos por el usuario y luego el mensaje "segundos son"
    hr = seg / (3600);//En la variable hr guardamos el numero entero de la div de seg/3600
    /*Ejemplo:
    seg=36090
    hr=seg/3600 --->esto es -->36090/3600=1  *No se necesita la parte decimal para horas y se asigna 1 a hr
    */
    seg %= 3600;  //Obtenemos el residuo de los segundos con respecto a una hora ->es Equivalente poner seg=seg%3600
    /*
    Ejemplo:
    seg=36090
    seg %=36090 Equivalente poner seg=seg % 3600 -> seg=36090%3600 Se asigna a seg 90 porque es el residuo de la division
    */
    min = seg / 60;  //seg ahora es 90 y se divide entre 60 ->  90/60= 1 entero y sobran 30
    seg %= 60; //se vuelve a sacar el residuo de seg que es 90 por lo tanto  seg=90%60 por lo tanto el residuo es 30 y 30 se asigna a seg
    cout << hr << " hora " << min << " minutos y " << seg << " segundos" << endl;
    // Se imprime 1 hora 1 min y 30 segundos

    return 0;
}
