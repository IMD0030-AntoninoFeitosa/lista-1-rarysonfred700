#include "function.h"
#include <stdlib.h>

vector<unsigned int> fib_below_n(unsigned int n){
  vector<unsigned int> val{};
  int x = 1;
  int y = 1;
  int seq = 0;
  val.push_back(x);
  val.push_back(y);

  while(1){
    seq = x + y;
    if(seq < n){
      val.push_back(seq);
    } else{
      break;
    }
    x = y;
    y = seq;
  }
  return val;
}
