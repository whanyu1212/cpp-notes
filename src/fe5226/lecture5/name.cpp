#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name, surname;
    cout << "Enter name:" << endl;
    cin >> name;
    cout << "Enter surname:" << endl;
    cin >> surname;
    string fullName = name + " " + surname; // The + operator is overloaded in the std::string class to concatenate strings.
    cout << "Full name: " << fullName << endl;
    cout << "Full name length: " << fullName.length() << endl;
    cout << (fullName.find_first_of('i') != string::npos ? "'i' found" : "'i' not found") << endl;
    cout << (fullName.find("an") != string::npos ? "\"an\" found" : "\"an\" not found") << endl;
}