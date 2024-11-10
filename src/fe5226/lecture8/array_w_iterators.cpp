#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<int, 10> x;

    // type of i is array<int, 10>::iterator
    for (array<int, 10>::iterator i = x.begin(); i != x.end(); ++i)
    {
        // assign a random number to the element pointed to by i
        *i = rand();
    }

    // read only access for the elements (safety)
    for (array<int, 10>::const_iterator i = x.cbegin(); i != x.cend(); ++i)
    {
        cout << *i << endl;
    }
}