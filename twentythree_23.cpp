#include <iostream>
#include <cstdlib>
#include <ctime>
int main(){
     srand(time(NULL));
     int number1 = (rand()%6)+1 ;
     int number2 = (rand()%6)+1 ;
     int number3 = (rand()%6)+1 ;
    std::cout<< number1<< '\n';
    std::cout<< number2<< '\n';
    std::cout<< number3<< '\n';
    return 0;
}