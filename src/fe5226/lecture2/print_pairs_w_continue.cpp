#include <iostream>
using namespace std;

int main()
{
    for (int a = 1; a <= 10; a++)
    {
        for (int b = 1; b <= 10; b++)
        {
            if (a == b)
            {
                continue;
            }
            cout << a << " " << b << endl;
        }
    }
    return 0;
}