#include <iostream>
#include <ctime>
int main(){
    int num;
    int guess;
    int tries=0;
    
    srand(time(NULL));
    num=rand()%100+1;
    std::cout<<"***************welcome to the number guessing game*******************"; 
   do{
    std::cout<<"Enter a guess between (1-100): ";
    std::cin>>guess;
    tries++;

    if (guess>num)
    {
        std::cout<<"Too high! Try again.\n";
    }
    else if (guess<num){
        std::cout<<"Too low! Try again.\n";
        
    }    
    else{
        
        std::cout<<"Correct! # of tries: "<<tries<<"\n";


}



    } while (guess!=num);
    
  std::cout<<"Thanks for playing!\n";  
    
    
    return 0;
}
