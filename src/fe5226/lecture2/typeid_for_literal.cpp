#include <iostream>
using namespace std;

int main()
{
    cout << "typeid(1+7.5): " << typeid(1 + 7.5).name() << endl;
    return 0;
}