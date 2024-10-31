#include <iostream>
using namespace std;

struct A
{
    A(int n) : m_x(n) {} // member m_x takes the value of n
    int m_x;             // declares an integer member

    // here this is a pointer of type A*
    // pointing to the current instance

    // In C++, this is a special pointer available within non-static member functions.

    // After assigning the integer n to m_x, the member function foo() is called to print the value of m_x.
    void foo() { cout << this->m_x << endl; }
};
int main()
{
    A x(1), y(2); // creates two instances of A
    x.foo();      // prints 1
    y.foo();      // prints 2
}