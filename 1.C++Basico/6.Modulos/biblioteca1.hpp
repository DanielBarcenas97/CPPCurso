//biblioteca1.hpp
//Archivo de cabecera de biblioteca1
//En el .hpp van constantes y prototipos de funciones

//Las siguientes directivas ayudan a evitar que el archivo se incluya más de una vez
//Evitando así algunas colisiones de nombres.
#ifndef BIBLIOTECA1_H	//Si el identificador no esta definido.
#define BIBLIOTECA1_H	//Lo define.

const int pi = 3.14159;
float areaCirculo(int radio);
int factorial(int numero);

#endif
