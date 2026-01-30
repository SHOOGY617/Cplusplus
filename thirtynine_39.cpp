#include <iostream>
void sort(int array[], int size);
int main(){
    int array[]={10,3,7,4,2,9,1,6,8,5};
    int size=sizeof(array)/sizeof(array[0]);
    for (int  i = 0; i < size; i++)
    {
        std::cout<<array[i]<<"  ";
           
    }
    
    std::cout<<"\n";
    std::cout<<"sorted array \n";
sort(array, size);
    for (int  i = 0; i < size; i++)
    {
        std::cout<<array[i]<<"  ";
    }
    

    return 0;
}


void sort(int array[], int size){
    
    int temp;
    
    for (int i = 0; i < size-1; i++)
    {
        // for (int j = 0; j < size -i -1; j++) Ascending
         for (int j = 0; j > size -i -1; j++) // Descending
        {
            if (array[j]>array[j+1])
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
            
        }
        
    }
}