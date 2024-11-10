#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int, 10> x = {1, 2, 3};
    // *x.cbegin() is the same as x[0], dereferencing the pointer to the first element
    // &*x.cbegin(): get the address of the first element
    // const int *i = &*x.cbegin(): i is a pointer to the first element
    for (const int *i = &*x.cbegin(), *e = i + x.size(); i != e; ++i)
        cout << *i << endl;
    return 0;
}