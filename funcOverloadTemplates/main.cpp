#include <iostream>
#include "factorial.h"
#include "add.h"
#include "mult.h"
#include "sub.h"


void testFactorial()
{
    static_assert(factorial<0>() == 1);
    static_assert(factorial<3>() == 6);
    static_assert(factorial<5>() == 120);

    //factorial<-1>();
}

void testAdd()
{
    std::cout << add(2,3) << '\n';
    std::cout << add(1.2, 3.4) << '\n';
}

void testMult()
{
    std::cout << mult(2,3) << '\n';
    std::cout << mult(1.2,3) << '\n';
}

void testSub()
{
    std::cout << sub(3,2) << '\n';
    std::cout << sub(3.5, 2) << '\n';
    std::cout << sub(4, 1.5) << '\n';
}


int main()
{
    // testFactorial();
    // testAdd();
    // testMult();
    testSub();
}