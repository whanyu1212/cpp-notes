#include <iostream>

int main()
{
    int a = 10;

    // The pointer is a variable that stores the memory address of another variable
    // The * symbol is used to declare a pointer
    // ptr is pointing to the memory address of a

    int *ptr = &a;

    std::cout << "Value of a: " << a << std::endl;
}