#include <iostream>
#include <array>

template <std::size_t SIZE>
void reverse(std::array< std::string, SIZE > & arr){
    size_t arraySizej = arr.size();
    size_t arraySizei = arr.size();
    
    for(int j = 0; j < arraySizej - 1; j++){
      for(int i = 0; i < arraySizei - 1; i++){
        std::swap(arr[i], arr[i++]);
      }
      arraySizei -= 1;
    }
}
