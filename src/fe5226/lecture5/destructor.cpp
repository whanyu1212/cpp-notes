struct IntArray
{
    int *m_p;
    IntArray() : m_p(nullptr) {}
    // new means allocate memory on the heap which is for dynamic memory allocation
    IntArray(int size) : m_p(new int[size]) {}

    // The destructor is explicitly defined because
    // we are managing a dynamic memory resource.
    ~IntArray() { delete[] m_p; }
    // It will be called implicitly when the object goes out of scope or is deleted.
};