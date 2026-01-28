#include <iostream>

int main(){
    std::string name="bro code is awesome";
    double gpa =2.5;
    char grade='A';
    bool student=true;
    char grades[]={'A', 'B', 'C', 'D', 'F'};
    std::string students[]={"Spongebob", "Patrick", "Sandy", "Mr. Krabs"};
 
 
    std::cout<<sizeof(students)/sizeof(std::string) <<" elements"<<'\n';
    return 0;
}