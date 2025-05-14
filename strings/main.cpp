#include <iostream>
#include <string>
#include <string_view>

std::string getName(int pnum)
{
    std::cout << "Enter the name of person #" << pnum << ": ";
    std::string name{};
    std::getline(std::cin >> std::ws, name);
    return name;
}

int getAge(std::string_view name)
{
    std::cout << "Enter the age of " << name << ": ";
    int x{};
    std::cin >> x;
    return x;
}

int main()
{
    std::string n1 { getName(1) };
    int a1 { getAge(n1) };
    
    std::string n2 { getName(2) };
    int a2 { getAge(n2) };

    std::string result{};
    if (a1 > a2) result = "older than ";
    else if (a1 == a2) result = "the same age as ";
    else result = "younger than ";

    std::cout << n1 << " (age " << a1 << ") is " << result << n2 << " (age " << a2 << ")." << '\n';

    return 0;
}