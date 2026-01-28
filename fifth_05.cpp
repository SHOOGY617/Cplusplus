#include <iostream>
#include <vector>

// typedef std::vector<std::pair<std::string,int>> pairlist_t;
// typedef std::string text_t;
// typedef int number_t;
using text_t=std::string;
using number_t=int;
// using pairlist_t=std::vector<std::pair<text_t,number_t>>
int main(){

    number_t age=21;
    std::cout<<"my age is: " << age;
    text_t name=" bro!";
    std::cout<< name <<'\n';

    // pairlist_t pairlist;
    return 0;
}