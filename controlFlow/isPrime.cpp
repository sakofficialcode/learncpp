#include <iostream>
#include <cmath>
#include <cassert>


bool isPrime(int x)
{
    //std::cout << "Testing : " << x;
    if (x <= 1) return false;
    else if (x == 2) return true;
    else if (!(x % 2)) return false;

    //std::cout << "Passed Filters";

    for (int i{ 3 }; i * i <= x; i += 2)
    {
        if (!(x%i)) return false;
    }
    return true;
}

void testPrime()
{

    //std::cout << isPrime(0);

    assert(!isPrime(0)); // terminate program if isPrime(0) is true
    assert(!isPrime(1));
    assert(isPrime(2));  // terminate program if isPrime(2) is false
    assert(isPrime(3));
    assert(!isPrime(4));
    assert(isPrime(5));
    assert(isPrime(7));
    assert(!isPrime(9));
    assert(isPrime(11));
    assert(isPrime(13));
    assert(!isPrime(15));
    assert(!isPrime(16));
    assert(isPrime(17));
    assert(isPrime(19));
    assert(isPrime(97));
    assert(!isPrime(99));
    assert(isPrime(13417));

    std::cout << "Success!\n";

    //return 0;
}