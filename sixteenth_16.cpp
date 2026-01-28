#include <iostream>

int main(){
    bool sunny=false;
    int temp;
    std::cout<<"Enter the temperature: ";
    std::cin>>temp;

    // if(temp > 0 && temp < 30){
    if(temp >= 0 || temp <= 30){
        std::cout<< "The temperature is good!";
    }
    else{
        
        std::cout<< "The temperature is bad!";
    }
    if (!sunny)
    {
        std::cout<<"\nIt is sunny outside!";
    }
    else{
        std::cout<<"\nIt is not sunny outside!";
    }
    
    return 0;
}