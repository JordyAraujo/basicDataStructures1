//
//  RecFibonacci.cpp
//
//  Created by Eiji Adachi Medeiros Barbosa 
//

#include "Fibonacci.hpp"

long long int rec_fib(int n)
{
	if( n == 0 || n == 1)
	{
		return n;
	}
	else
	{
		return rec_fib(n-1) + rec_fib(n-2);
	}
}
