#include <iostream>
#include <algorithm>
#include <vector>
#include <random>

/*Implementation of std::max

template <class T>
const T &max(const T &a, const T &b)
{
    return (a < b) ? b : a;
}

*/

template <typename MyType>
bool fixed_point_check(const std::vector<MyType> &perm)
{
    for (size_t i = 0; i < perm.size(); ++i)
    {
        if (perm[i] == i)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    const int n = 100;
    const int num_permutations = 10000;
    int no_fixed_point_count = 0;

    std::random_device rd;
    std::mt19937 g(rd());

    for (int i = 0; i < num_permutations; ++i)
    {
        // Initialize a vector, default to 0
        std::vector<int> perm(n);
        // Fill the vector with sequential numbers
        std::iota(perm.begin(), perm.end(), 0);
        // Shuffle the vector
        // g is the random number generator
        std::shuffle(perm.begin(), perm.end(), g);

        if (fixed_point_check(perm))
        {
            ++no_fixed_point_count;
        }
    }

    std::cout << "Number of permutations with no fixed points: " << no_fixed_point_count << std::endl;
    return 0;
}