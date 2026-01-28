#include <iostream>
#include<ctime>
int main(){
    srand(time(NULL));
        int randNUM = rand()%5+1;
        switch (randNUM)
        {
        case 1:
            std::cout<<"you win a bumper sticker!\n";
            break;
            case 2:
            std::cout<<"you win a T-shirt!\n";
            break;
            case 3:
            std::cout<<"you win a free lunch!\n";
            break;
            case 4:
            std::cout<<"you win a gift card!\n";
            break;
            case 5:
            std::cout<<"you win a concert tickets!\n";
            break;
     
        default:
            break;
        }
    return 0;
}