#include <iostream>

double getDouble(){
    std::cout << "Enter a double value: ";
    double x{};
    std::cin >> x;
    return x;
}

char getOperator(){
    std::cout << "Enter +, -, *, or /: ";
    char x{};
    std::cin >> x;
    return x;
}

void operation(double x, double y, char z){

    double res{};

    if (z == '+')
        res = x + y;
    else if (z == '-')
        res =  x - y;
    else if (z == '*')
        res =  x * y;
    else if (z == '/')
        res =  x / y;
    else
        return;

    std::cout << x << ' ' << z << ' ' << y << " is " << res << '\n';

    return;    
}


int q1()
{
    double x{ getDouble() };
    double y{ getDouble() };
    char op{ getOperator() };

    operation(x,y,op);

    return 0;
}