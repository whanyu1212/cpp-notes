#include <iostream>
using namespace std;

namespace first
{
    int a = 5;
}

namespace second
{
    int a = 10;
}

int main()
{
    int a = 15;
    cout << a << endl;
    //:: is the scope resolution operator
    cout << first::a << endl;
    cout << second::a << endl;
    // solution for preventing name conflicts
}