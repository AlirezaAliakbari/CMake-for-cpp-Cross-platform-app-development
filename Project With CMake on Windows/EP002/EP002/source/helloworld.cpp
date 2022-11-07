#include <iostream>
#include <concepts>

template <typename T>
requires std::integral<T>
T add( T a, T b){
    return a+b;

}
using namespace std;
 
 int main(){

    std::cout <<"bbw"<<std::endl;
    std::cout << "the sum is:" << add(7,5)<< std::endl;
    return 0 ;
 }