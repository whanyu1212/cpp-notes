#include <iostream>
#include <memory> // For std::make_unique and std::unique_ptr

class MyClass
{
public:
    MyClass() { std::cout << "Constructor called" << std::endl; }
    ~MyClass() { std::cout << "Destructor called" << std::endl; }
};

int main()
{
    // Create a unique pointer using make_unique
    std::unique_ptr<MyClass> ptr = std::make_unique<MyClass>();

    // Transfer ownership using std::move
    std::unique_ptr<MyClass> newPtr = std::move(ptr);

    if (!ptr)
    {
        std::cout << "Ownership transferred to newPtr!" << std::endl;
    }

    return 0; // Destructor is called when unique_ptr goes out of scope
}
