#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> x(10);

    // push 2 new values to the end of the vector
    x.push_back(rand());
    x.push_back(rand());

    x.pop_back(); // remove the last element
    x.resize(20); // resize the vector to 20 elements
    x.clear();    // remove all elements

    cout << x.size() << endl; // print size, should be 0
    return 0;
}