//Map

#include <iostream>
#include <map>

using namespace std;

template<typename T>
void mostrarMapa(T mapa);

int main(){
	
	map<int,string> mapa;
	
	mapa[1] = "uno";
	mapa[3] = "tres";
	mapa[0] = "cero";
	mapa[-1] = "negativo";
	
	mostrarMapa(mapa);
	
	//Insertando elementos de otra manera
	
	mapa.insert(pair<int,string>(100,"cien"));
	mapa.insert(pair<int,string>(-10,"otro negativo"));
	mostrarMapa(mapa);
	
	//Eliminando elementos
	mapa.erase(3);
	mostrarMapa(mapa);
}

template<typename T>
void mostrarMapa(T mapa) {
	cout << "Contenido: " << endl;
	for(typename T::iterator i = mapa.begin(); i!= mapa.end(); i++) {
		cout << i->first << ": " << i->second << endl;
	}
}
