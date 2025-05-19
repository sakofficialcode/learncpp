#ifndef FACTORIAL_H
#define FACTORIAL_H

template <int N>
constexpr int factorial()
{
    static_assert(N >= 0);

    int ans{ 1 };
    for (int i { N }; i > 0; --i)
    {
        ans *= i;
    }
    
    return ans;
}

#endif