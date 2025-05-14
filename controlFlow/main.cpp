#include <iostream>
#include "gravCalc.h"
#include "isPrime.h"
#include "hilo.h"

void printAZ()
{
    char myChar{ 'a' };
    while (myChar <= 'z')
    {
        std::cout << myChar << ' ' << static_cast<int>(myChar) << '\n';
        ++myChar;
    }
}

void printNumTri()
{
    int r{ 1 };
    while(r <= 5){
        int c{ 1 };
        while (c <= r){
            std::cout << c << ' ';
            ++c;
        }
        std::cout << '\n';
        ++r;
    }
}

void printNumTriInv()
{
    int r{ 5 };
    while(r > 0){
        int c{ r };
        while (c > 0){
            std::cout << c << ' ';
            --c;
        }
        std::cout << '\n';
        --r;
    }
}

void printNumTriAlt()
{
    int r{ 1 };
    while(r <= 5){
        int c{ 5 };
        while (c > 0)
        {
            if (c <= r) std::cout << c << ' ';
            else std::cout << "  ";
            --c;
        }
        std::cout << '\n';
        ++r;
    }
}

void fizzbuzzpop(int iter)
{
    for (int i{0}; i < iter; ++i)
    {
        bool printed{ false };
        
        if (i % 3 == 0)
        {
            std::cout << "fizz";
            printed = true;
        }

        if (i % 5 == 0)
        {
            std::cout << "buzz";
            printed = true;
        }

        if (i % 7 == 0)
        {
            std::cout << "pop";
            printed = true;
        }

        if (!printed) std::cout << i;

        std::cout << '\n';
    }
}




int main()
{
    //printAZ();
    //printNumTri();
    //printNumTriInv();
    //printNumTriAlt();
    //fizzbuzzpop(150);
    //gravMain();
    //testPrime();
    hilo();
}