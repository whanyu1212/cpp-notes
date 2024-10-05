#include <iostream>
using namespace std;

bool check_parity(unsigned int x, unsigned int y)
{
    if (x % 2 == 0 && y % 2 == 0)
    {
        return true;
    }
    else if (x % 2 != 0 && y % 2 != 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    cout << "please enter two numbers: " << endl;
    unsigned int x, y;
    cin >> x >> y;
    if (check_parity(x, y))
    {
        cout << "Both numbers have the same parity" << endl;
    }
    else
    {
        cout << "Both numbers do not have the same parity" << endl;
    }
}