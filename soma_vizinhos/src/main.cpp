#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(void){
  int inicio, fim, soma = 0;
  while(cin >> std::ws >> inicio >> fim){
    
    if(fim > 0){
      for(int i = 0; i < fim; i++){
        soma += inicio;
        inicio++;
      }
    } else if(fim < 0){
      for(int i = 0; i < -fim; i++){
        soma += inicio;
        inicio--;
      }
    } else{
      soma = inicio;
    }
    std::cout << soma << std::endl;
  }
  return 0;
}
