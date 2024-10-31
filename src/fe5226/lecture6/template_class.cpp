template <class T>

// MyArray can operate with any data type specified by T
struct MyArray
{
    // Pointer to an array of type T
    T *m_p;
    // Initializes a null pointer
    MyArray() : m_p(NULL) {}
    // Initializes a pointer to an array of size
    MyArray(int size) : m_p(new T[size]) {}

    // Overload the [] operator to access elements in the array
    // [] will only be used to access elements, not to modify them
    const T &operator[](unsigned i) const { return m_p[i]; }
    // Overload the [] operator to access elements in the array
    T &operator[](unsigned i) { return m_p[i]; }
    // Destructor to deallocate memory
    ~MyArray() { delete[] m_p; }
};
void main()
{
    MyArray<int> x(100);
    x[0] = 4;
} // here x goes out of scope, the destructor is called and memory is deallocated