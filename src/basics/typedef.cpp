#include <iostream>
#include <vector>

// typedef is used to create an alias for a data type.
typedef std::vector<int> int_vector;

int main()
{
    int_vector v = {1, 2, 3, 4, 5};
    for (int i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << std::endl;
    }
    return 0;
}