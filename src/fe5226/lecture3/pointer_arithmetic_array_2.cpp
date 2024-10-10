#include <iostream>
using namespace std;

int main()
{
    uint16_t x[3] = {5, 7, 9};             // allocate 3x2=6 bytes. x refers to the memory ad
    const auto n = sizeof(x) / sizeof(*x); // number of elements in the array
    // the usual way
    for (int i = 0; i < n; ++i)
        cout << x[i] << ',';
    cout << endl;
    // using pointer arithmetic
    // A pointer p of type uint16_t is initialized to point to the first element of the array x.
    // A pointer end of type uint16_t is initialized to point to one past the last element of the array.
    // This is a common technique in C++ to mark the end of an iteration.
    // The loop increments the pointer p until it reaches the end of the array.
    for (uint16_t *p = x, *end = x + n; p != end; ++p)
        cout << *p << ',';
    cout << endl;
}