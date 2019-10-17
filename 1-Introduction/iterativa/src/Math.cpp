//
//  Math.cpp
//
//  Created by Eiji Adachi Medeiros Barbosa 
//

#include "Math.hpp"

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{
    return a / b;
}

int factorial(int a)
{
    int result = 1;
    for(int i = a; i > 0; i--)
    {
        result = result * i;
    }
    return result;
}