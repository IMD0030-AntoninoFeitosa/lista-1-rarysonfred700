#include <iostream>
#include <utility>
#include "function.h"

int main() {
  int n;
  int m;
  pair<int, int> val;
  
  std::cin >> n;
  int vetor[n];
  for (int i = 0; i < n; ++i) {
    std::cin >> vetor[i];
  }
  if(n != 0){
    val = min_max(vetor, n);
    std::cout << val.first << val.second << std::endl;
  } else{
    return -1;    
  }
  return 0;
}
