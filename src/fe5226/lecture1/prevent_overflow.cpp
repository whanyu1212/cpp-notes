#include <iostream>
using namespace std;

int main()
{
    unsigned long long int x;
    x = 1024 * 1024 * 1024;
    cout << "The value of x: " << x << endl;

    x = x * 2;
    cout << "The new value of x: " << x << endl;

    return 0;
}