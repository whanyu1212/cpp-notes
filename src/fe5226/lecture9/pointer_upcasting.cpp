#include <iostream>
using namespace std;

// virtual is equivalent to abstractmethod in Python
struct A
{                                                    // allows derived class to override the function
    virtual void foo() { cout << "Hello from A\n"; } // Declare foo as virtual
};
struct B : A
{                                                     // override is optional but recommended for clarity
    void foo() override { cout << "Hello from B\n"; } // Override foo
};
int main()
{
    B b;        // b is an instance of type B
    B *bp = &b; // B* pointer
    A *ap = bp; // up-cast B* to A*
    bp->foo();  // calls B::foo
    ap->foo();  // calls B::foo due to virtual function
    return 0;
}