#include <iostream>
#include <functional>
int main()
{
    using namespace std::placeholders;
    auto gt = std::greater<int>{};
    /*
    binds the first argument of gt to the constant value 0,
    and the second argument is bound to the placeholder _1,
    which represents the first argument of the resulting function object.
    This creates a new function object gta that checks if 0 > x (i.e., if x is negative).
    */
    auto gta = std::bind(gt, 0, _1);

    /*
    binds the first argument of gt to the placeholder _1,
    and the second argument is bound to the constant value 0.
    This creates a new function object gtb that checks if x > 0 (i.e., if x is positive).
    */
    auto gtb = std::bind(gt, _1, 0); // x > 0 ?
    // we use gta and gtb as if they were functions
    std::cout << gta(2) << std::endl;  // false
    std::cout << gta(-2) << std::endl; // true
    std::cout << gtb(2) << std::endl;  // true
    std::cout << gtb(-2) << std::endl; // false
    return 0;
}