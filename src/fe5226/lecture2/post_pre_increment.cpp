#include <iostream>
using namespace std;

int main()
{
    int x = 1;
    cout << "x: " << x << endl;

    int y = x++; // y is assigned the value of x before x is incremented
    cout << "y: " << y << endl;

    int z = ++x; // x is incremented before z is assigned the value of x
    cout << "z: " << z << endl;

    return 0;
}