#include <iostream>

int main(){
    int age;
     

    std::cout<<"Enter you age: ";
    std::cin>>age;
    if(age>=18)
    {
        std::cout<<"welcome to site;";
    }
    else if(age<0){
        std::cout<<"you havent been born yet!";
    }
    else{

        std::cout<<"you are not old enough to enter the site";
    }

    return 0;
}