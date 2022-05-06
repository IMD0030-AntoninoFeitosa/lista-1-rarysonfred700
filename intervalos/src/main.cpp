#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setprecision;

int main(void){
  int x;
  int contador = 0;
  int in1 = 0;
  int in2 = 0;
  int in3 = 0;
  int in4 = 0;
  int in5 = 0;

  // não entendi essa parte
  double z = static_cast<double>(total);
  
  while(cin >> std::ws >> x) {
    contador++;
    if(x >= 0 && x < 25){
      in1++;
    } else if(x >= 25 && x < 50){
      in2++;
    } else if(x >= 50 && x < 75){
      in3++;
    } else if(x >= 75 && x < 100){
      in3++;
    } else {
      in5++;
  }
    
  std::cout << setprecision(4) << (in1*100)/static_cast<double>(contador) << endl;
  std::cout << setprecision(4) << (in2*100)/contador << endl;
  std::cout << setprecision(4) << (in3*100)/contador << endl;
  std::cout << setprecision(4) << (in4*100)/contador << endl;
  std::cout << setprecision(4) << (in5*100)/contador << endl;
  
  return 0;
}
