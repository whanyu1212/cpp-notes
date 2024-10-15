#include <iostream>

// using a const int means that the array cannot be modified
// otherwise, you can modify the array elements
bool isOrdered(const int *v, unsigned n)
{
    bool ordered = true;
    for (unsigned i = 0; i < n - 1; i++)
    {
        if (v[i] > v[i + 1])
        {
            ordered = false;
            break;
        }
    }
    return ordered;
}

int main()
{
    int v[] = {1, 2, 3, 4, 5};
    int w[] = {1, 2, 3, 5, 4};
    int x[] = {5, 4, 3, 2, 1};

    std::cout << "v is " << (isOrdered(v, 5) ? "ordered" : "not ordered") << std::endl;
    std::cout << "w is " << (isOrdered(w, 5) ? "ordered" : "not ordered") << std::endl;
    std::cout << "x is " << (isOrdered(x, 5) ? "ordered" : "not ordered") << std::endl;
    return 0;
}