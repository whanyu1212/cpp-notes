#include <iostream>
#include <memory> // For std::make_shared and std::shared_ptr

class MyClass
{
public:
    MyClass() { std::cout << "Constructor called" << std::endl; }
    ~MyClass() { std::cout << "Destructor called" << std::endl; }
};

int main()
{
    // Create a shared pointer using make_shared
    std::shared_ptr<MyClass> ptr1 = std::make_shared<MyClass>();

    {
        std::shared_ptr<MyClass> ptr2 = ptr1; // Shared ownership
        std::cout << "Reference count: " << ptr1.use_count() << std::endl;
    } // ptr2 goes out of scope, reference count decreases

    std::cout << "Reference count after scope: " << ptr1.use_count() << std::endl;

    return 0; // Destructor is called when last shared_ptr goes out of scope
}
