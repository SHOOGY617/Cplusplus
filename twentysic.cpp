#include <iostream>

void happybirthday(std::string name, int age);

int main(){

    std::string name="bro";
    int age=21;
    happybirthday(name, age);

    return 0;
}
void happybirthday(std::string name, int age){
    std::cout<<"happy birthday to "<< name <<" who is "<< age <<" years old\n";
    std::cout<<"happy birthday to "<< name <<"\n";
    std::cout<<"happy birthday dear "<< name <<"\n";
    std::cout<<"happy birthday to "<< name <<"\n";
}