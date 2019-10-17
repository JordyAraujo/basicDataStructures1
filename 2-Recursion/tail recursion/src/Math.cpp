//
//  Math.cpp
//
//  Created by Eiji Adachi Medeiros Barbosa 
//  Edited by Jordy Araújo de Alcântara
//

#include "Math.hpp"

int add(int x, int y)
{
    return t_add(x, y, y);
}

int t_add(int x, int y, int a)
{
    if(x == 0)
        return a;
    if(y == 0)
        return x;
    if(x < 0)
        return t_add(x + 1, y, a - 1);
    return t_add(x - 1, y, a + 1);
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int x, int y)
{
    return t_multiply(x, y, y);
}

int t_multiply(int x, int y, int a)
{
    if(x == 0 || y == 0)
        return 0;

    if(x == 1)
        return a;
    if(y == 1)
        return x;

    if(x < 0 && y > 0)
        return -1 * t_multiply(-1 * x, y, y);
    if(y < 0 && x > 0)
        return -1 * t_multiply(x, -1 * y, -1 * y);

    if(x < 0 && y < 0)
        return t_multiply(-1 * x, -1 * y, -1 * y);

    return t_multiply(x - 1, y, a + y);
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

    return t_factorial(x, 1);   
}

int t_factorial( int x, int a)
{
    if(x == 1)
        return a;
    return t_factorial(x - 1, a*x);

}