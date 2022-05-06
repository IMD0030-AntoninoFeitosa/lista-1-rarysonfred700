#include "function.h"
#include <stdlib.h>

std::vector<unsigned int> fib_below_n(unsigned int n){
  std::vector<unsigned int> valores;
  if(n > 1){  
    int x = 1;
    int y = 1;
    valores.push_back(x);
    valores.push_back(y);
    int size = valores.size();
    
    unsigned int next = valores[size-2] + valores[size-1];
     while(next < n){
       valores.push_back(next);
       size = valores.size();
       next = valores[size-2] + valores[size-1];
     }
  }
  return valores;
}
