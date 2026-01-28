#include <iostream>

int main(){
    double temp;
    char unit;
    
    std::cout<<"******* temperature conversion *******\n";
    std::cout<<"F = fahrenheit\n";
    std::cout<<"C = celsius\n";
    std::cout<<"what unit would you like to convert to: \n";
    std::cin>>unit;
    if(unit == 'F' || unit == 'f'){
        std::cout<<"enter the temperature in celcius: \n";
        std::cin >> temp;
        
        temp=(1.8*temp) +32.0;
        std::cout<<"the temperature is "<< temp << " F\n";
        
    }
    else if (unit == 'C' || unit == 'c'){
        std::cout<<"enter the temperature in fahrenheit: \n";
        std::cin >> temp;
        temp=(temp-32.0)/1.8;
        std::cout<<"the temperature is "<< temp << " C\n";
 }
     else{
        std::cout<<"invalid unit!\n";}








    std::cout<<"**************************************\n";
    return 0;
}