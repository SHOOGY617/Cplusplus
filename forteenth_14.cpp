#include <iostream>

int main(){
    char op;
    double num1,num2,result;

    std::cout<<"***************CALCULATOR***************"<<std::endl;
    
    std::cout<<"Enter operator (+, -, *, /): \n";
    std::cin>>op;
     std::cout<<"Enter #1:  \n";
     
     std::cin>>num1;
     
     
     
     std::cout<<"Enter #2:  \n";
     std::cin>>num2;
        switch(op){
            case '+':
            result=num1+num2;
            std::cout<< num1 << " + " << num2 << " = " << result << std::endl;
            break;
            case '-':
            result=num1-num2;
            std::cout<< num1 << " - " << num2 << " = " << result << std::endl;
            break;
            case '*':
            result=num1*num2;
            std::cout<< num1 << " * " << num2 << " = " << result << std::endl;
            break;
            case '/':
            result=num1/num2;
            std::cout<< num1 << " / " << num2 << " = " << result << std::endl;
            break;
            default:
            std::cout<<"invalid operator!";
            break;
        }
    
    std::cout<<"****************************************"<<std::endl;
    return 0;
}