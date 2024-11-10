#include <iostream>
using namespace std;

struct A
{
    A() : x(0) {} // x is initialized to 0
    int x;
};

struct B : A // B inherits from A, so B has a data member x as well
{
    B() : y(1) {} // y is initialized to 1
    int y;
};

int main()
{
    B b;
    cout << b.y; // object b has a data member y
    cout << b.x; // object b has a data member x
    return 0;
}