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

// In order to find an x that satisfy the condition, we can use the following code:
// #include <iostream>
// using namespace std;
//
// int main()
// {
//     for (int x = 101; x <= 1000; x += 2)
//     {
//         if ((100 < x && x <= 1000) && (x % 2 != 0) && (x % 7 == 0) && (x % 41 == 0 || x % 43 == 0))
//         {
//             cout << "x: " << x << endl;
//             break;
//         }
//     }
//
//     return 0;
// }