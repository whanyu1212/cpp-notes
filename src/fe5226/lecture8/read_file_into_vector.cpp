#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    ifstream file("input.txt");
    if (!file.is_open())
    {
        cout << "Error opening file" << endl;
        return 1;
    }

    vector<string> lines;
    string line;
    while (getline(file, line))
    {
        lines.push_back(line);
    }

    for (const auto &line : lines)
    {
        cout << line << endl;
    }

    return 0;
}