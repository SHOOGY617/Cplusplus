#include <iostream>

int main(){
    std::string name;
    std::cout<<"Enter Your name: ";
    std::getline(std::cin, name);
    // if(name.length() >12){
    //     std::cout<<"your name can not be longer than 12 characters!";   
    // }
    // if(name.empty()){
    //     std::cout<<"your name can't be empty!";   
    // }
    // else{
    //     std::cout<<"welcome " << name;
    // }
    // name.clear();
    // name.append("@gmail.com");
    // std::cout << name.at(1) << "\n";
    // name.insert(0, "@");
    
    // std::cout<<name.find(' ');
    name.erase(3,5);
    std::cout<<name;

    return 0;
}