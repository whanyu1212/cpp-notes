#include <iostream>
#include <iomanip>

using namespace std;

// replace this function with yours
void pascal(size_t n, size_t *dst)
{
    // The first value in a row is always 1
    dst[0] = 1;
    for (size_t j = 1; j <= n; j++)
        // n choose k = n choose (k-1) * (n+1-k) / k
        dst[j] = dst[j - 1] * (n + 1 - j) / j;
}

int main()
{
    const size_t maxN = 10;
    size_t coef[maxN];

    cout << "row  coef\n";
    for (size_t n = 0; n < maxN; ++n)
    {
        cout << setw(3) << n << "  ";
        pascal(n, coef);
        for (size_t i = 0; i <= n; ++i)
            cout << setw(4) << coef[i];
        cout << "\n";
    }

    return 0;
}