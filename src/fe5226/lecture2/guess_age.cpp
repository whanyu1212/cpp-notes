#include <iostream>
using namespace std;

int main()
{
    cout << "Let me try to guess your age ";
    int age;
    cin >> age;

    if (age < 20)
    {
        cout << "I thought you were older!" << endl;
    }
    else if (age > 40)
    {
        cout << "I thought you were younger!" << endl;
    }
    else
    {
        cout << "My guess was about right" << endl;
    }

    return 0;
}
