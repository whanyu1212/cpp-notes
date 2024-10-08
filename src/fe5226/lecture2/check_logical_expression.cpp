#include <iostream>
using namespace std;

// Remark: For logical operators, && has precedence over ||

int main()
{
    int x;
    bool y;

    cout << "Enter an integer value: " << endl;
    cin >> x;

    if ((100 < x <= 1000) && (x % 2 != 0) && (x % 7 == 0) && (x % 41 == 0 || x % 43 == 0))
    {
        y = true;
    }
    else
    {
        y = false;
    }

    cout << "y: " << y << endl;

    return 0;
}