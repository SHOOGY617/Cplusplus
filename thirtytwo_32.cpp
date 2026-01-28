#include <iostream>
#include<ctime>

char getuserchoice();
char getcomputerchoice();
void showchoice(char choice);
void choosewinner(char player, char computer);



int main(){
char computer;
char player;

player=getuserchoice();
std::cout<<"Your choice is: ";
showchoice(player);    


computer=getcomputerchoice();
std::cout<<"Computer choice is: ";
showchoice(computer);    


choosewinner(player,computer);

    return 0;

}

char getuserchoice(){
    char player;
    std::cout<<"Rock, Paper, Scissors game!\n";
    
    
    do{
    std::cout<<"Choose one of the following!\n";
    std::cout<<"***************************\n";
    std::cout<<"'r' for rock\n";
    std::cout<<"'p' for paper\n";
    std::cout<<"'s' for scissors\n";

    std::cin>>player;
    }while(player !='r'&& player!='p'&&player!='s');
    




    return player;
}
char getcomputerchoice()
{
    srand(time(0));
    int num=rand()%3+1;
    switch (num)
    {
    case 1: return 'r';
    case 2: return 'p';
    case 3: return 's';
    
    }
    return 0;
}
void showchoice(char choice){
    switch(choice){
        case 'r':
        std::cout<<"Rock\n";
        break;
        case 'p':
        std::cout<<"Paper\n";
        break;
        case 's':
        std::cout<<"Scissors\n";
        break;
        default:
        std::cout<<"Invalid choice\n";
        break;
    }

}
void choosewinner(char player, char computer){
        switch (player)
        {
        case 'r':
            if(computer=='r'){
                std::cout<<"It's a tie!\n";
            }
            else if(computer=='p'){
                std::cout<<"computer wins!\n";
            
            }
            else{
                std::cout<<"You win!\n";
            }
        break;
        case 'p':
            if(computer=='p'){
                std::cout<<"It's a tie!\n";
            }
            else if(computer=='s'){
                std::cout<<"computer wins!\n";
            
            }
            else{
                std::cout<<"You win!\n";
            }
        break;
        case 's':
            if(computer=='s'){
                std::cout<<"It's a tie!\n";
            }
            else if(computer=='r'){
                std::cout<<"computer wins!\n";
            
            }
            else{
                std::cout<<"You win!\n";
            }
        break;
        
        default:
            break;
        }
}