#include <iostream>
void walk(int steps);
int main(){
    walk(100);
    return 0;
}
void walk(int steps){
    // for(int i=0; i<steps; i++){
    //     std::cout<<"You take a step forward.\n"; THis is a iterative approach
    // }
    if(steps>0){
        std::cout<<"You take a step forward.\n";
        walk(steps -1); //this is recursive approach
    }
}