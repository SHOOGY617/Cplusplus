#include <iostream>

std::string concatStrings(std::string String1, std::string String2);

int main(){
    std::string FirstName="Shlok";
    std::string LastName="Agrawal";
    
    std::string FullName=concatStrings(FirstName, LastName);    
   std::cout<<"Full Name is : "<< FullName<< '\n'; 
    
    
    return 0;
}
std::string concatStrings(std::string String1, std::string String2){
    return String1 + " "+ String2;   
}