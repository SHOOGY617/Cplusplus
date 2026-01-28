#include <iostream>

int main(){
    int rows;
    int column;
    char symbol;


    std::cout<<"How many rows?: ";
    std::cin>> rows;
    std::cout<<"How many columns?: ";
    std::cin>> column;
    std::cout<<"Enter a symbol to use: ";
    std::cin>> symbol;



    
    for (int i = 0; i <= rows; i++)
    {
        for (int j = 0; j <= column; j++)
          {
            std::cout<< symbol << ' ';
        }
        std::cout<< '\n';
    }
    // for (int i = 0; i <= 3; i++)
    // {
    //     for (int j = 0; j <= 10; j++)
    //       {
    //         std::cout<< j << ' ';
    //     }
    //     std::cout<< '\n';
    // }
    
    
    return 0;
}