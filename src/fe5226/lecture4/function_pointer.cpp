#include <iostream>
using namespace std;

// 2 very simple functions

void foo(int x)
{
    cout << x << endl;
}
void bar(int x)
{
    cout << x + 2 << endl;
}

int main()
{
    // p is a pointer variable and points to
    // the function foo

    // void is the return type of the function
    // int is the parameter of the function
    void (*p)(int) = &foo;

    (*p)(3);  // equivalent to a call to foo(x)
    p = &bar; // now p points to bar
    (*p)(3);  // equivalent to a call to bar(x)
    return 0;
}