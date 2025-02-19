#include <stdio.h>
#define START 700
#define FINISH 1100

int prime(int n) 
{ // will return 1 if n is prime, 0 otherwise
    if (n <= 1) return 0; 
    for (int i = 2; i * i <= n; i++) 
    {
        if (n % i == 0) return 0; 
    }
    return 1; 
}

void goldbach_PAIRS(int n) 
{ // I use void because I don't need to return anything and the function of this is just to print pairs
    for (int i = 2; i <= n / 2; i++) 
    {
        if (prime(i) && prime(n - i)) 
        {
            printf("%d = %d + %d\n", n, i, n - i);
            return; 
        }
    }
}

int main() 
    {
    printf("Every even number greater than 2 is the sum of two primes:\n");
    
    for (int n = START; n <= FINISH; n += 2) 
    { // for checking every even number from 700 to 1100
        goldbach_PAIRS(n);
    }
    return 0; 
}
