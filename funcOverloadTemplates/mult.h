#ifndef MULT_H
#define MULT_H

template <typename T>
T mult(T x, int n)
{
    return x * static_cast<T>(n);
}

#endif