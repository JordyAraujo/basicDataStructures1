//
//  main.cpp

//  Created by Eiji Adachi Medeiros Barbosa 
//

#include <iostream>
#include "Fibonacci.hpp"

int main(int argc, const char * argv[]) {
    if( argc != 2 )
    {
        std::cout << "A number is expected as argument.\nPlease use it according to the pattern: './<exec> <number>'\n";
        return -1;
    }
    
    int a = atoi(argv[1]);

    printf("Iterative Fibonacci(%d) = %lld\n", a, ite_fib(a));
    printf("Recursive Fibonacci(%d) = %lld\n", a, rec_fib(a));
    printf("Tail Recursive Fibonacci(%d) = %lld\n", a, tail_fib(a));
    
    return 0;
}
