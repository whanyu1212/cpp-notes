#include <iostream>
using namespace std;

int main()
{
    int arr[4] = {5, 10, 100, 1000};
    for (int i = 0; i < 4; i++) // for (int element: arr) can be used as well -> for-range-declaration : expression
    {
        cout << arr[i] << endl;
    }
    return 0;
}