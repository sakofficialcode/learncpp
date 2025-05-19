#include <iostream>
#include "random.h"
#include <string_view>
#include <limits>

void ignoreLine()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

namespace Settings
{
    const int MAX = 10;
    const int MIN = 1;
}

int getUserNum(int g)
{
    while (true)
    {
        std::cout << "Guess #" << g << ": ";
        int guess{};
        std::cin >> guess;

        if (!std::cin)
        {
            std::cin.clear();
            ignoreLine();
            continue;
        }
        else if (guess > Settings::MAX || guess < Settings::MIN)
        {
            std::cout << "Input must be between " << Settings::MIN << " and " << Settings::MAX << '\n';
            ignoreLine();
            continue;
        }

        ignoreLine();
        return guess;
    }
}

void game()
{
    int num{ Random::get(1,10) };
    int guess{ -1 };
    int guessNum{ 1 };
    while (guessNum <= 7)
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
        ignoreLine();

        switch (x)
        {
        case 'y':
            return true;
            break;
        case 'n':
            return false;
            break;
        default:
            std::cout << "Invalid Input. Please try again.\n";
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