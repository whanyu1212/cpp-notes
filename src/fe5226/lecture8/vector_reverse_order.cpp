#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> x = {1, 2, 3, 4, 5, 6};
    // cend() returns an iterator to the element following the last element of the container
    // alternatively, we can use x.rbegin() and x.rend() to iterate in reverse order
    for (auto i = x.cend(); i != x.cbegin();)
    {
        cout << *--i << ",";
        cout << endl;
    }
}