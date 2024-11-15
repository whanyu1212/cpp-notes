#include <iostream>
using namespace std;

int main()
{
    try
    {
        throw "An error occurred"; // Throw a string (const char*)
    }
    catch (int e)
    { // Catch integer exceptions
        cout << "Caught an integer: " << e << endl;
    }
    catch (const char *e)
    { // Catch string (const char*)
        cout << "Caught a string: " << e << endl;
    }
    catch (...)
    { // Generic fallback for all other types
        cout << "Caught an unknown exception!" << endl;
    }
    return 0;
}
