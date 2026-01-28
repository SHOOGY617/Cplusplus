#include <iostream>
int myNum=3;
void myFunction();

int main(){
    int myNum=1;
    myFunction();
    std::cout<< ::myNum;
    return 0;
}
void myFunction(){          // :: scope resolution operator which is used to access global variable
    // when we have local variable with same name
    int myNum=2;
    std::cout<< ::myNum;
    
}