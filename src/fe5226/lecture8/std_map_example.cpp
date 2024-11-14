#include <map>
#include <iostream>
#include <string>
using namespace std;
int main()
{
    map<string, int> m; // a map of (string,int)
    m["Jim"] = 1967;
    m["Bob"] = 1985;
    m["Tom"] = 2014;
    for (auto i = m.begin(); i != m.end(); ++i)
        cout << i->first << " was born on " << i->second << endl;
    return 0;
}