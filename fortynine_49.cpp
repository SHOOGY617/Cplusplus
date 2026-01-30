#include <iostream>

int main(){
    int *pointer =nullptr;
    int x=123;
    pointer = &x;
    if(pointer == nullptr){
       std::cout<<"The address is not assigned!\n"; 
    //    std::cout<<"The address is: " << *pointer << "\n";
    }    
    else{
        std::cout<<"The address is assigned!\n"; 
        std::cout<<"The address is: " << pointer << "\n";
    }
    return 0;
}