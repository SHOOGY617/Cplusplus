#include <iostream>

int main(){
    for (int i = 0; i <= 20; i++)
    {
        if (i==13)
        {
            // break;
            continue;
        }
        
        std::cout<<i<<'\n';
        
    }
    std::cout<<"happy new year!";
    
    return 0;
}