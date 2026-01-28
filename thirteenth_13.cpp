#include <iostream>

int main(){
    char grade;

    std::cout<<"What Letter grade: ";
    std::cin>> grade;

    switch (grade)
    {
    case 'A':
       
        std::cout<<"you did great!";
        break;
    
    case 'B':
        grade ='B';
        std::cout<<"you have gotten B grade!";
        break;
    
    case 'C':
        std::cout<<"you have gotten C grade!";
        break;
    
    case 'D':
    std::cout<<"you have gotten D grade!";
    break;
    
    
    
    default:
        std::cout<<"please enter a valid grade!(A-D)";
        break;
    }

    return 0;
}