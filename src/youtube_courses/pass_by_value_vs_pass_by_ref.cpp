#include <iostream>

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
};

void swap_ref(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
};

int main()
{
    int a = 10;
    int b = 20;

    std::cout << "Before swap: " << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;

    swap(a, b);

    std::cout << "After swap: " << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;

    swap_ref(a, b);

    std::cout << "After swap_ref: " << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;

    return 0;
}