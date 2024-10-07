int main()
{
    char *p = 0; // This is equivalent to a null pointer in modern C++
    *p = 34;     // Since p does not point to a valid memory location,
    // assigning 34 to the address that p points to will cause a runtime error
    return 0;
}