#include <iostream>
using namespace std;

struct myclass
{
    // allows you to define or overload the function call operator
    int operator()(int a) { return a * a; }
};
int main()
{
    myclass f;
    // we use f as if it was a function
    cout << f(3) << endl;
    return 0;
}