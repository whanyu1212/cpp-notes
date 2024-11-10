#include <iostream>
#include <vector>

using namespace std;
int main()
{
    // or vector<int> x(10); to initialize with 10 elements
    vector<int> x;
    vector<int> y;

    for (size_t i = 0; i < 10; ++i)
    {
        // you cant use x[i] = rand() here because x is empty after initialization
        x.push_back(rand());
        y.push_back(rand());
    }

    // before swap

    for (size_t i = 0; i < x.size(); ++i)
    {
        cout << x[i] << endl;
    }

    for (size_t i = 0; i < y.size(); ++i)
    {
        cout << y[i] << endl;
    }

    // Exchanges the content of the container by the content of x,
    // which is another vector object of the same type. Sizes may differ.
    // https://cplusplus.com/reference/vector/vector/swap/

    // swap x with y
    x.swap(y);

    cout << "x: " << endl;
    for (size_t i = 0; i < x.size(); ++i)
    {
        cout << x[i] << endl;
    }

    cout << "y: " << endl;
    for (size_t i = 0; i < y.size(); ++i)
    {
        cout << y[i] << endl;
    }
}