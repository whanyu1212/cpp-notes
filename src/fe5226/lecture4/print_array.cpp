#include <iostream>
using namespace std;

void printArray(const int *v, unsigned n)
{
    for (unsigned i = 0; i < n; i++)
    {
        cout << *(v + i) << " ";
        // alternative implementation
        // cout << v[i] << " ";
    }
    cout << endl;
}