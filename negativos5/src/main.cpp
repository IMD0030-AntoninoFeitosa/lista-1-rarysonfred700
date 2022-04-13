#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.

int main(void){
  int vetor[SIZE];
  int contador = 0;
  
  for(int i = 0; i < SIZE; i++){
    cin >> vetor[i];
    if(vetor[i] < 0){
      contador++;
    }
  }
  cout << contador;

  return 0;
}
