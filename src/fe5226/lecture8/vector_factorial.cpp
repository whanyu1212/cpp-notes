#include <iostream>
#include <vector>

using namespace std;

struct Fact
{
    Fact() : v(1, 1) {}

    double operator()(size_t n)
    {
        for (size_t i = v.size(); i <= n; ++i)
            v.push_back(v.back() * i);
        return v[n];
    }

    std::vector<double> v;
};

int main()
{
    Fact f{};
    size_t n = 3;
    std::cout << "factorial of " << n << " is: " << f(n) << "\n";

    return 0;
}