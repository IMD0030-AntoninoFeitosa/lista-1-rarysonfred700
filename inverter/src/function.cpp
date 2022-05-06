#include <iostream>
#include <array>

template <std::size_t SIZE>
void reverse(std::array< std::string, SIZE > & arr){
    int size = arr.size();

    for(int i = 0; i < size/2; i++){
        std::swap(arr[i], arr[size-i-1]);
    }
}
