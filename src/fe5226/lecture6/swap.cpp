#include <iostream>
#include <algorithm>

/*
Implementation of the swap function
in the std library:

template <typename T>
void swap(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}
 */

// Direct usage

int main()
{
    int a = 5, b = 3;
    // before
    std::cout << a << ' ' << b << '\n';
    std::swap(a, b); // the type is auto-inferred
    // after
    std::cout << a << ' ' << b << '\n';
}
