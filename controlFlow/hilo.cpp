#include <iostream>
#include "random.h"
#include <string_view>

int getUserNum(int g)
{
    std::cout << "Guess #" << g << ": ";
    int guess{};
    std::cin >> guess;
    return guess;

}

void game()
{
    int num{ Random::get(1,10) };
    int guess{ -1 };
    int guessNum{ 1 };
    while (guessNum < 7)
    {
        guess = getUserNum(guessNum);
        if (guess > num)
            std::cout << "Your guess is too high.\n";
        else if (num > guess)
            std::cout << "Your guess is too low.\n";
        else
        {
            std::cout << "Correct! You win!\n";
            return;
        }
        ++guessNum;
    }
    std::cout << "Sorry, you lose. The correct number was " << num << '\n';
}

bool userPlayAgain()
{
    while(true)
    {
        std::cout << "Do you want to play again (y/n)? ";
        char x{};
        std::cin >> x;
        switch (x)
        {
        case 'y':
            return true;
            break;
        case 'n':
            return false;
            break;
        default:
            break;
        }
    }
}

void hilo()
{
    game();
    while (userPlayAgain())
    {
        game();
    }
}