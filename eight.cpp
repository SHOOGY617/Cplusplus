#include <iostream>

int main(){
    int age;
    std::cout<<"whats your age? "<<'\n';
    std::cin >> age;
    std::string name;
    std::cout<<"whats your name? "<<'\n';
    // std::cin >> name;
    std::getline(std::cin >> std::ws,name);

    std::cout<<"hello "<< name <<", nice to meet you!";
    std::cout<<"hello "<< name <<", you are "<< age <<" years old!";
   



    return 0;
}