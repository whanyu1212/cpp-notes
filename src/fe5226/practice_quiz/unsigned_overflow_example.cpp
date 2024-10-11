#include <iostream>
using namespace std;

int main()
{
    // unsigned integers will cause an infinite loop if it is decremented to 0
    unsigned n = 10;
    size_t sz = n;
    while (--sz >= 0)
        cout << sz << ",";
}