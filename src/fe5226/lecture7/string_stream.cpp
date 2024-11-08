#include <sstream>
#include <iostream>
int main()
{
    std::ostringstream os;
    os << "hello" << 3;
    // os.str() converts the entire stream content into a single string
    std::cout << os.str() << '\n'; // prints "hello3"
    return 0;
}