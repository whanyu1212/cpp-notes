#include <sstream>
#include <iostream>
int main()
{
    std::ostringstream os;
    os << "hello" << 3;
    std::cout << os.str() << '\n';
    return 0;
}