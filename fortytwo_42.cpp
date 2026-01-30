#include <iostream>

int main(){
    std::string cars[][3]={{"mustang","bmw","audi"},
                    {"mustang","bmw","audi"},
                    {"mustang","bmw","audi"}};
 
                    // std::cout<<cars[0][0]<<"\n";
            int rows=sizeof(cars)/sizeof(cars[0]);
            int column=sizeof(cars[0])/sizeof(cars[0][0]);
            for (int i = 0; i < rows; i++)
            {

               for (int j = 0; j < column; j++)
               {
                std::cout<<cars[i][j]<<" ";
               }
               


               std::cout<<"\n";

            }
 
 
                    return 0;
}