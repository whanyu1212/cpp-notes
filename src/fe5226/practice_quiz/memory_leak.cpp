void foo(int n)
{
    // new means it is dynamically allocated, managed by heap
    int *p = new int[n];
    // there is memory leak here without the delete[] statement
    // delete[] p;
}

int main()
{
    foo(10);
    return 0;
}