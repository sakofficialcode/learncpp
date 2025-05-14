#include <iostream>
#include <bitset>

std::bitset<4> rotl(std::bitset<4> bits){
    const bool leftbit{ bits.test(3)};
    bits <<= 1;
    leftbit ? bits.set(0) : bits.reset(0);
    return bits;
}

int main()
{
    std::bitset<4> bits1{0b1101};
    std::cout << rotl(bits1) << '\n';
}