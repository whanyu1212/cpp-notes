#include <iostream>
using namespace std;

int main()
{
    cout << "Please enter a positive integer: " << endl;
    int n;
    cin >> n;
    int a = 0;
    int b = 1;

    for (int i = 3; i <= n; i++)
    {
        int next = a + b;
        a = b;
        b = next;

        cout << next << " ";
    }
}