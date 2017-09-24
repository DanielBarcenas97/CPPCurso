#include <iostream>
using namespace std;

class Prueba{
   private:
   int x;
 public:
  Prueba(int x = 0){
      escribe(x);
  }//constructor
  int obtiene() const{
      return x;
  }//obtiene es const
  int obtiene2(){
      return x;
  }
  void escribe(int y){
      x = y;
   }
  // void escribe(int y) const{x = y;}
};
int main()
{
  Prueba num1;
  const Prueba num2(25);
  cout << num2.obtiene()<<endl;
  // cout << num2.obtiene2(); //error obtiene2 no es const.
  num1 = num2;
  cout << num1.obtiene2(); //permitido num1 no es const.
}
