#include <iostream>
void bakepizza();
void bakepizza(std::string string1);
void bakepizza(std::string string1, std::string string2);
int main(){
    // std::string toppings="pepperoni";
    bakepizza("pepperoni", "mushrooms");

    return 0;
}
void bakepizza(){
    std::cout<<"Here is your pizza!\n";
}
void bakepizza(std::string topping1){
    std::cout<<"Here is your "<< topping1<<" pizza!\n";
}
void bakepizza(std::string topping1, std::string topping2){
    std::cout<<"Here is your "<< topping1<<" and "<< topping2 <<" pizza!\n";
}