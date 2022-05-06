#include "function.h"

std::pair<int,int> min_max(int vetor[], std::size_t tamanho){
  int max = -1;
  int min = -1;

  for (int i = 0; i < tamanho; i++) {
    if(min == -1 || vetor[i] < vetor[min]){      
      min = i;
    }
    if(max == -1 || vetor[i] < vetor[max]){      
      max = i;
    }
  }  
  val = std::make_pair(min, max);
  return val;
}
