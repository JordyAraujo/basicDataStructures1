//
//  Math.cpp
//
//  Created by Eiji Adachi Medeiros Barbosa 
//  Edited by Jordy Araújo de Alcântara
//

#include "Math.hpp"

int add(int x, int y)
{

    if(y == 0)
        return x;
    if(x == 0)
        return y;

    if(x < 0 && y > 0)
        return y - add(x + 1, y);
    if(y < 0 && x > 0)
        return x - add(x, y + 1);

    if(x < 0 && y < 0)
        return -1 * add(-1 * x, -1 * y);

    return x + add(x, y - 1);
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int x, int y)
{

    if(y == 1)
        return x;
    if(x == 1)
        return y;

    if(y == 0)
        return 0;
    if(x == 0)
        return 0;

    if(x < 0 && y > 0)
        return y - add(x + 1, y);
    if(y < 0 && x > 0)
        return x - add(x, y + 1);

    if(x < 0 && y < 0)
        return multiply(-1 * x, -1 * y);

    return  y + multiply(x - 1, y);
}

int divide(int a, int b)
{
    return a / b;
}

int factorial(int x)
{
    if(x < 0)
    {
        std::cout << "Negative value!\n";
        return -1;
    }
    if(x == 1)
        return 1;
    return x * factorial(x - 1);    
}