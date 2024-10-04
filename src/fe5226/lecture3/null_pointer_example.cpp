#include <iostream>
using namespace std;

int main()
{
    uint16_t *ptr = nullptr; // we do not assign a memory address to ptr yet

    uint16_t x = 6183; // 16-bit unsigned integer, approximately 2 bytes

    ptr = &x; // assign the memory address of x to ptr

    cout << "Address of x: " << &x << endl;
    cout << "Address stored in ptr: " << ptr << endl;
}