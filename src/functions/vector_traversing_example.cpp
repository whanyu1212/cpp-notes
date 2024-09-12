#include <iostream>
#include <vector>

int traverseAndSum(const std::vector<int> &vec)
{
    int sum = 0;

    // Range-based for loop for traversal
    for (int i = 0; i < vec.size(); i++)
    // alternative way to write the loop
    // for (const auto &i : vec)
    {
        std::cout << "Element: " << vec[i] << std::endl;
        sum += vec[i];
    }

    return sum;
}

int main()
{
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    int totalSum = traverseAndSum(numbers);

    std::cout << "Total sum of elements: " << totalSum << std::endl;

    return 0;
}
