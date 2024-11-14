#include <iostream>
#include <functional>
int main()
{
    std::greater<double> gt;
    // we use gt as if it was a function
    std::cout << gt(4.2, 5.0) << std::endl; // false
    std::cout << gt(5.0, 4.2) << std::endl; // true
    return 0;
}