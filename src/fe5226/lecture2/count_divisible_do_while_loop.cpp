#include <iostream>
using namespace std;

int main()
{
    int input_number;
    int count = 0;

    cout << "Please enter a number that is divisible by 5: ";

    do
    {
        cin >> input_number;
        if (input_number % 5 != 0)
        {
            cout << "The number is not divisible by 5. Please try again: ";
        }
        count++;
    } while (input_number % 5 != 0);

    cout << "The total number of attempts: " << count << endl;

    return 0;
}