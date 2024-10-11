#include <iostream>
using namespace std;

int main()
{
    cout << sizeof(double) << endl;  // 8 bytes
    cout << sizeof(bool *) << endl;  // each pointer is 8 bytes
    cout << sizeof("hello") << endl; // array of 6 characters, 6 bytes
}
