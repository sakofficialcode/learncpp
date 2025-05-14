#include <iostream>

namespace Constants
{
    constexpr double GRAVITY = 9.8;
}

double getTowerHeight()
{
    std::cout << "Enter the height of the tower in meters: ";
    double h{};
    std::cin >> h;
    return h;
}

void printPos(double h, int t)
{
    if (h > 0) std::cout << "At " << t << " seconds, the ball is at height: " << h << " meters\n";
    else std:: cout << "At " << t << " seconds, the ball is on the ground.\n";
}

double calculateBallHeight(double twrH, int t)
{
    return (twrH - ((1.0/2.0)*(t * t) * Constants::GRAVITY));
}

double calcAndPrintGrav(double twrH, int t)
{
    const double ballHeight{ calculateBallHeight(twrH, t) };
    printPos(ballHeight, t);
    return ballHeight;
}

void gravMain()
{
    double towerHeight{ getTowerHeight() };
    int seconds{ 0 };
    while (calcAndPrintGrav(towerHeight, seconds) > 0)
    {
        ++seconds;
    }
}