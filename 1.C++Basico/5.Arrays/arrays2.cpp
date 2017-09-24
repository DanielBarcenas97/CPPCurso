#include<iostream>

int main(){
	
	int calificaciones[30];
	float promedio = 0.0;
	
	//Llenando el arreglo:
	for(int i = 0; i < 30; i++)
		for(int j = 8; j < 11; j++){
			//Llenamos 3 espacios del arreglo en cada iteracion:
			calificaciones[i] = j;
			calificaciones[i+1] = j;
			calificaciones[i+2] = j;
			//Saltamos i porque ya llenamos esos 2 espacios:
			i += 2;
			//Si te sales del arreglo, termina el ciclo.
			if(i >= 30)
				break;
		}
		
		//Mostramos el arreglo:
//	for(int i = 0; i < 30; i++)
//		std::cout << calificaciones[i] << std::endl;
		
	//Obtenemos el promedio:
	
	//Sumatoria:
	for(int i = 0; i < 30; i++){
		promedio += calificaciones[i];
	}
	//division:
	promedio /= 30;
	
	std::cout << "El promedio del grupo es: " << promedio << std::endl;
	
	return 0;
}
