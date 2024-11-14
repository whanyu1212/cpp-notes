// set::find
#include <iostream>
#include <set>
using namespace std;
int main()
{
    std::set<int> myset;
    std::set<int>::iterator it;
    // set some initial values:
    for (int i = 1; i <= 5; i++)
        myset.insert(i * 10); // set: 10 20 30 40 50
    it = myset.find(10);
    if (it != myset.end())
        cout << "number found\n";
    else
        cout << "number not found\n";
    return 0;
}