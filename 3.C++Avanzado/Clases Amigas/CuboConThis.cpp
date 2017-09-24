#include <iostream>
using namespace std;
//Clase Cubo
class Cubo{
 public:
     //Constructor
  Cubo(int x){
      this->x = x; //usamos apuntador this explicito.
  }

  int Obtener(void){
      x=x*x*x;
      return x; //usamos apuntador this implicito
  }

 private:
  int x;
};

int main()

{
  Cubo objeto1(5);
  cout <<"El cubo es:" <<objeto1.Obtener() << endl;

  return 0;
}
