#include <stack>
#include <iostream>
using namespace std;
int main()
{
    stack<int> s;
    s.push(2);
    s.push(3);
    cout << "The stack contains " << s.size() << " entries\n";
    cout << "The top entry is " << s.top() << "\n";
    s.pop();
    cout << "The top entry is " << s.top() << "\n";
    s.pop();
    cout << "The empty function returns " << s.empty() << "\n";
    return 0;
}