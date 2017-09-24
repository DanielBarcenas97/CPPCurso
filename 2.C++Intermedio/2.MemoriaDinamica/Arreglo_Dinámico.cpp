#include <iostream>

using namespace std;

int main()
{
    int *p = NULL;
    int cantidad;
    cout << "Cuantos numeros desea ingresar: ";
    cin >> cantidad;
    p = new int [cantidad];

    for (int i=0 ; i< cantidad ; i++)
    {
        cout << "Dame el elemento;  " << i+1;
        cin >> p[i];
    }

    cout << "Los valores son: ";
    for (int i = 0 ; i < cantidad ; i++)
    {
        cout << p[i] << " ";
    }

    delete[] p;


}
