#include <iostream>
using namespace std;

int main()
{
    try
    {
        throw 42; // Throw an integer
    }
    catch (int e)
    { // Catch integer exceptions
        cout << "Caught an integer: " << e << endl;
    }
    return 0;
}
