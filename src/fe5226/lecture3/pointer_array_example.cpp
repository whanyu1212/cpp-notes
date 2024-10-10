#include <iostream>
using namespace std;

int main()
{
    uint16_t x[3] = {5, 7, 9}; // allocate 3x2=6 bytes. x refers to the memory ad
    uint16_t *px = x;          // px contains the memory address of x (note we did not use &)

    // pointer in a 64 bit system is 8 bytes
    cout << sizeof(px) << endl; // this prints 8, the size of the variable px
    cout << sizeof(x) << endl;  // this prints 6, the size of the array x
    cout << x[1] << endl;       // this prints 7
    cout << px[1] << endl;      // this also prints 7
    cout << *(px + 1) << endl;  // this also print 7
}