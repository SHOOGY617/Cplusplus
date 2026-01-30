#include <iostream>
int searchArray(std::string array[], int size, std::string element);

int main()
{
    // int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::string foods[]={"burger", "pizza", "pasta", "fries", "salad"};
    int size = sizeof(foods) / sizeof(foods[0]);
    int index;
    std::string myFood;

    // std::cout << "Enter an element number between 1 and " << size << ": " << '\n';
    std::cout << "Enter an element you wanna search for : " << '\n';
    std::getline(std::cin, myFood);
    index = searchArray(foods, size, myFood);

    if (index != -1)
    {

        std::cout << myFood << "Found at index " << index << '\n';
    }
    else
    {
        std::cout << myFood << " is not in index " << '\n';
    }

    return 0;
}

int searchArray(std::string array[], int size, std::string element)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == element)
        {
            return i;
        }
    }
        return -1;
}