/*
In C++, a predicate is a function or a function - like object that returns a boolean
value(either true or false) based on a given condition.Predicates are commonly used
in the Standard Template Library(STL) to perform conditional operations, such as
filtering or searching, where specific criteria determine which elements are processed.
*/

#include <iostream>
#include <vector>
#include <algorithm>

bool isEven(int x) { return x % 2 == 0; }

int main()
{
    std::vector<int> numbers = {1, 3, 4, 5, 6};
    auto it = std::find_if(numbers.begin(), numbers.end(), isEven);

    if (it != numbers.end())
    {
        std::cout << "First even number: " << *it << std::endl;
    }
    else
    {
        std::cout << "No even number found." << std::endl;
    }
    return 0;
}
// The function isEven is a predicate that checks if a given number is even or not.