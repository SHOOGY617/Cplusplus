#include <iostream>

int main(){
    std::string name="bro";
    int age=21;
    std::string freepizza[5]={"pizza1", "pizza2", "pizza3","pizza4", "pizza5"};
    std::string *pfreepizza=freepizza;
 
 
    int *pAge=&age;
    
    
    std::string *pName=&name;
    std::cout<<pName<<"\n";
    std::cout<<pAge<<"\n";
    std::cout<<pfreepizza<<"\n";
    return 0;
}