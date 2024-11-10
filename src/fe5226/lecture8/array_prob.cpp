#include <iostream>
#include <array>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{ // set the seed for the random number generator
    srand(time(0));

    // Create an array of 10 integers
    array<int, 10> x;

    // Fill the array with random numbers between 1 and 100
    for (size_t i = 0; i < x.size(); ++i)
    {
        // at() is a member function of the array class
        x.at(i) = rand();
    }
    // p is a pointer to the first element of the array
    // x.data() returns a pointer to the first element of the container x
    // *e is a pointer to the element after the last element of the array
    // *e is to define the end of the range
    for (const int *p = x.data(), *e = p + x.size(); p != e; ++p)
        cout << *p << endl;

    return 0;
}