#include <iostream>
#include <string>
using namespace std;

// Define a custom exception class
class MyException
{
public:
    string message;
    MyException(const string &msg) : message(msg) {}
};

int main()
{
    try
    {
        throw MyException("Custom error occurred!"); // Throw custom exception
    }
    catch (MyException &e)
    { // Catch custom exceptions
        cout << "Caught a custom exception: " << e.message << endl;
    }
    return 0;
}
