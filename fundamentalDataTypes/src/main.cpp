#include <iostream>

double delH(double h, int t)
{
    double k = h + (-9.8) * (1.0/2.0) * t * t;
    return k;
}

int updatePos(double h, int t)
{
    double x{ delH(h,t) };
    if (x > 0)
        std::cout << "At " << t << " seconds, the ball is at height: " << x << " meters\n";
    else
        return t;
    updatePos(h, t + 1);
}

int main()
{
    std::cout << "Enter the height of the tower in meters: ";
    double x{};
    std::cin >> x;
    
    std::cout << "At " << updatePos(x,0) << " seconds, the ball is on the ground.\n";

    return 0;
}