#include <iostream>
using namespace std;

int main()
{
    int initial_value = 1000;
    while (initial_value > 0)
    {
        initial_value = initial_value - 13;
    }

    cout << "The value of initial_value after the loop: " << initial_value << endl;
    return 0;
}