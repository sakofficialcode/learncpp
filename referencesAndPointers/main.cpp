#include <iostream>
#include <algorithm>

void sort2(int& a, int& b)
{
    if (a > b)
        std::swap(a,b);
}

int main()
{
    int x { 7 };
    int y { 5 };

    std::cout << x << ' ' << y << '\n';

    sort2(x, y);
    std::cout << x << ' ' << y << '\n';
    
    sort2(x, y);
    std::cout << x << ' ' << y << '\n';

    return 0;
}