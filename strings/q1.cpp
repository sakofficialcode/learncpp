#include <iostream>
#include <string>

int q1()
{
    std::cout << "Enter your full name: ";
    std::string name{};
    std::getline(std::cin >> std::ws, name);

    std::cout << "Enter your age: ";
    int age{};
    std::cin >> age;

    int nameLen { static_cast<int>(name.length()) };
    std::cout << "Your age + length of name is: " << nameLen + age;
    return 0;
}