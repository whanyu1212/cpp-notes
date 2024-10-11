#include <iostream>

int main()
{
    int v[] = {10, 20, 30, 40, 50};
    // move the pointer v 1 element to the right, p is pointing to 20
    int *p = v + 1;
    // increment the value at the address p is pointing to
    ++(*p);
    // dereference the pointer p and assign it to x
    // x is now 21
    auto x = *p;
    std::cout << x;
}