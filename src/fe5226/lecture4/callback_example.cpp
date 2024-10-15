#include <iostream>
using namespace std;

int addTwo(int x)
{
    return x + 2;
}
int subTwo(int x)
{
    return x - 2;
}

// f is a pointer to a function that takes an int and returns an int
void printf_fun_x(int x, int (*f)(int))
{
    cout << (*f)(x) << endl; // invoke the function stored in f
}

int main()
{
    printf_fun_x(10, &addTwo); // pass a pointer to addTwo as argument
    printf_fun_x(10, &subTwo); // pass a pointer to subTwo as argument
    return 0;
}