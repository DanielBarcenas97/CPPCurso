#include<iostream>

#define endlx3 <<endl<<endl<<endl

using namespace std;

int main(){
	
	int array[5] = {1,2,3,4,5};
	//Se acepta no poner el tamaño solo si lo inicializamos ahi mismo:
	int array3[] = {2,10};
	
	for(int i = 0; i < 5; i++)
	std::cout << "array[" << i << "] = " << array[i] << std::endl;
	
	//Podemos no inicializarlo en el moomento.
	int array2[5];
	
	std::cout << "Vamos a llenar el arreglo:" << std::endl;
	for(int i = 0; i < 5; i++){
		std::cout << "array2[" << i << "] : ";
		std::cin >> array2[i];
	}
	
	std::cout endlx3;
	
	for(int i = 0; i < 5; i++)
	std::cout << "array2[" << i << "] = " << array2[i] << std::endl;
	
	return 0;
	
}
