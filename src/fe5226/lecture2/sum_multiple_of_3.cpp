#include <iostream>
using namespace std;

int main()
{
    cout << "Please enter a number: " << endl;
    int n;
    int sum = 0;
    cin >> n;

    for (int i = 3; i <= n; i += 3)
    {
        sum += i;
    }

    cout << "The sum of multiples of 3 from 3 to " << n << " is " << sum << endl;
}