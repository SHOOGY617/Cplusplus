#include <iostream>

int main(){
        std::string students[]={"Spongebob", "Patrick", "Squidward","Sandy"};
        // for (int i = 0; i < sizeof(students)/sizeof(std::string); i++)
        // {
        //     std::cout<<students[i]<<'\n';
        // }
        for(std::string student : students){
            std::cout<< student << '\n';
        }       

        int grades[]={85, 90, 78, 92};
            for(int grade: grades){
                std::cout<< grade <<'\n';
            }
                // for each loop in C++  is not used for modifying the original array elements


    return 0;
}