#include <iostream>
using namespace std;

int main()
{
    try
    {
        throw 3.14; // Throw a double
    }
    catch (...)
    { // Catch any exception
        cout << "Caught an exception of unknown type!" << endl;
    }
    return 0;
}
