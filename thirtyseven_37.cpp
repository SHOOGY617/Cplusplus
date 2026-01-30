#include <iostream>
double getTotal(double prices[], int size);
int main(){
    double prices[]={5.00, 7.50, 9.99, 15.99};
    int size =sizeof(prices)/sizeof(prices[0]);
    double Total=getTotal(prices, size);
    std::cout<<"Total $" << Total<<'\n';
    return 0;
}
double getTotal(double prices[], int size){
    double Total=0;
//    for (int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++) bcz there is no way to determine the size of the array inside the function
   for (int i = 0; i < size; i++)
   { 


    Total += prices[i];
        std::cout<<prices[i]<<'\n';


}
    return Total;

}