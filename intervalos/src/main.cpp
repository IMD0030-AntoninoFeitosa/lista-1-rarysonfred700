#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setprecision;

int main(void){
  int x;
  int contador1 = 0;
  int contador2 = 0;
  int contador3 = 0;
  int contador4 = 0;
  int contador5 = 0;
  int total = 0;
  double z = static_cast<double>(total);
  
  while(cin >> std::ws >> x) {
    if(x > 99 || x < 0){
      contador5 = contador5 + 1;
      z+=1;
    }
    if(x >= 0 && x < 25){
      contador1 = contador1 + 1;
      z+=1;
    }
    if(x > 24 && x < 50){
      contador2 = contador2 + 1;
      z+=1;
    }
    if(x > 49 && x < 75){
      contador3 = contador3 + 1;
      z+=1;
    }
    if(x > 74 && x < 100){
      contador4 = contador4 + 1;
      z+=1;
    }
  }
  std::cout << setprecision(4);
  std::cout << (contador1*100)/z << endl;
  std::cout << (contador2*100)/z << endl;
  std::cout << (contador3*100)/z << endl;
  std::cout << (contador4*100)/z << endl;
  std::cout << (contador5*100)/z << endl;
  
  return 0;
}
