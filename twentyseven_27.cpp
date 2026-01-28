#include <iostream>

double square(double lenght);
double cube(double lenght);



int main(){
    double lenght=5.0;    
    double area = square(lenght);
    double volume = cube(lenght);


    std::cout<<"The area of the square is : "<< area<<'\n';     
    std::cout<<"The volume of the cube is : "<< volume<<'\n';     
    return 0;
}
double square(double lenght){
    double result=lenght*lenght;
    return result;
}
double cube(double lenght){
    double result=lenght*lenght*lenght;
    return result;
}