#include <iostream>

int main()
{
    int numbers[5] = {1, 2, 3, 4, 5};

    // array traversal using a for loop

    // for (int number : numbers)
    // {
    //     std::cout << "Element at index " << index << ": " << number << std::endl;
    // }

    // size of array in bytes/size of one element in bytes = number of elements
    for (int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++)
    {
        std::cout << "Element at index " << i << ": " << numbers[i] << std::endl;
    }

    return 0;
}