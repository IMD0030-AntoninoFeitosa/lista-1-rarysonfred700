#include <iostream>
#include <vector>
#include "function.h"

int main() {
  vector<unsigned int> fibonacci{};
  int n;
  std::cin >> n;
  fibonacci = fib_below_n(n);
  
  std::cout << "{";
  for(const int& i : fibonacci) {
    std::cout << i << "; ";
  }
  std::cout << "}";

  return 0;
}
