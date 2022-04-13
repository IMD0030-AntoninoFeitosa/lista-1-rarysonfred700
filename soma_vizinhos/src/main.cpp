#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(void){
  int m;
  int n;
  int soma = 0;
  while(1){
    std::cin >> m;
    std::cin >> n;

    if(n == 0){
      soma = m;
    } else{
    }
    if(n < 0){
      for(int i = m; i > m + n; i--){
        soma += i;
      }
    } else{
    }
    if(n > 0){
      for(int i = m; i < m + n; i++){
        soma += i;
      }
    } else{
    }

    std::cout << soma << std::endl;
    soma = 0;
  }
  return 0;
}
