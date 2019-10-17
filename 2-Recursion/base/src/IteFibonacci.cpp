//
//  TailFibonacci.cpp
//
//  Created by Eiji Adachi Medeiros Barbosa 
//

#include "Fibonacci.hpp"

long long int ite_fib(int n)
{
    if(n == 1)
        return 1;
    int a = 1, b = 0, res = 0;
    for (int i = 1; i < n; ++i) 
    {
        res = a + b;
        b = a;
        a = res;
    }
    return res;
}

