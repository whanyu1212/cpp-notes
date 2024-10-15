#include <iostream>
using namespace std;

bool isOdd(unsigned n)
{
    return n % 2;
    // alternative implementation
    // return n & 1;
}

int main()
{
    cout << "Input an integer: " << endl;
    unsigned n;
    cin >> n;
    cout << "The number is " << (isOdd(n) ? "odd" : "even") << endl;
}