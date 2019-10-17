//
//  TailFibonacci.cpp
//
//  Created by Eiji Adachi Medeiros Barbosa 
//

#include "Fibonacci.hpp"

long long int tail_fib(int n)
{
    if(n < 0)
    {
        std::cout << "Negative value!\n";
        return -1;
    }
    return fib(n, 0, 1);
}

long long int fib(int n, int a, int b)
{
    if(n == 0)
        return a;
    if(n == 1)
        return b;
    return fib(n - 1, b, a + b);
}
