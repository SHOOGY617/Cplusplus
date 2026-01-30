#include <iostream>

int main(){
    // std::string foods[10]={"pizza", "pizza", "pizza", "pizza", "pizza","pizza", "pizza","pizza", "pizza","pizza"};
  
        const int SIZE=99;
  
    std::string foods[SIZE];
    fill(foods, foods + (SIZE/3), "pizza");
    fill(foods + (SIZE/3), foods + (2*SIZE/3), "burger");
    fill(foods + (2*SIZE/3), foods + SIZE, "hamburger");
    
    
    for(std::string food:foods){
        std::cout<< food<<'\n';
    }
    return 0;
}