#include "function.h"

std::pair<int,int> min_max(int vetor[], std::size_t tamanho){
  int max = 0;
  int min = 0;
  pair <int, int> val;

  for (int i = 0; i < tamanho; i++) {
    if(vetor[i] >= vetor[max]){      
      max = i;
    } else{
    }
    if(vetor[i] < vetor[min]){
      min = i;
    } else{
    }
  }  
  val = std::make_pair(min, max);
  return val;
}
