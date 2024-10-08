#include <iostream>

int main()
{
    int a = 10;
    int b = 20;
    int c = 30;
    // & is used to get the memory address of a variable
    std::cout << "Address of a: " << &a << std::endl;
    std::cout << "Address of b: " << &b << std::endl;
    std::cout << "Address of c: " << &c << std::endl;

    return 0;
}
