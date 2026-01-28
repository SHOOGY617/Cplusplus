#include <iostream>

int main(){
    int number;
    
    do{
        std::cout<<"enter a positive#: ";
        std::cin>>number;
        
    }while (number<0);
     std::cout<<"This # is "<< number;
    return 0;
}