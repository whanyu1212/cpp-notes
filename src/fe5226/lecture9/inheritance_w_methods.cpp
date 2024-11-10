#include <iostream>
using namespace std;

struct A
{
    void foo() const { cout << "Hello from A\n"; };
};
struct B : A
{                    // B inherits from A
    void foo() const // same name as base class
    {
        A::foo(); // B has two methods foo(), here we want A::foo
        cout << "Hello from B\n";
    }
};

int main()
{
    B b;
    b.foo(); // B::foo hides A::foo
    return 0;
}