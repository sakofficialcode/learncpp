#include <iostream>
#include "io.h"

int readNumber()
{
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;
    return x;
}

void writeAnswer(int ans)
{
    std::cout << ans << '\n';
}