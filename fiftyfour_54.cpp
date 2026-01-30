#include <iostream>
 
template <typename T>
 
auto max(T x, T y){
    return(x>y)?x:y;
}
// double max(double x, double y){
//     return(x>y)?x:y;
// }
// char max(char x, char y){
//     return(x>y)?x:y;
// }
int main(){
    std::cout<<max(10.1, 20.1);
    return 0;
}