#include <iostream>
#include <string> // Include the string header

/// @brief Greets the user by asking for their first and last name
/// and then prints a greeting message.
void greet_user()
{
    std::cout << "Please enter your first name (followed by \"enter\"):\n";
    std::string first_name; // first_name is a variable of type string
    std::cin >> first_name; // read characters into first_name

    std::cout << "Please enter your last name (followed by \"enter\"):\n";
    std::string last_name;
    std::cin >> last_name;

    std::cout << "Hello, " << first_name << " " << last_name << '\n';
}

/// @brief Main function that executes the greet_user function.
/// This function is the entry point of the program.
/// @return 0
int main()
{
    greet_user(); // Call the greet_user function
    return 0;     // Explicitly return 0
}