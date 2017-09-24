#include<iostream>

using namespace std;

class Temperatura {
private:
    int minima;
    int maxima;
    int actual;

    void imprimir();

    public:
    Temperatura(int min, int max, int actual);
};

Temperatura::Temperatura(int min, int max, int act){
    this->minima = min;
    this->maxima = max;
    this->actual = act;
    this->imprimir();
}

void Temperatura::imprimir(){
    cout << "minima  "<<this->minima << " " <<" actual  " <<this->actual << " " <<" max  "<< this->maxima << "\n";
}

int main(void){
    Temperatura temperatura1(10, 20, 15);
    Temperatura temperatura2(25, 35, 29);
    cin.get();
    return 0;
}
