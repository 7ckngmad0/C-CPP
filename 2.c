#include <stdio.h>

int prime(int n) 
{
    if (n < 1) 
    {
        return 1;
    }
    if (n == 1) 
    {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) 
    {
        if (n % i == 0) {
            return 1;
        }
    }
    return 0; 
}

int main() 
{
    int nonnegative;

    printf("Enter a nonnegative integer: ");
    scanf("%d", &nonnegative);

    if  (nonnegative < 0) 
    {
        printf("Please enter a nonnegative integer\n");
        return 1;
    }

    int result = prime(nonnegative);
    if (result == 0) 
    {
        printf("0 (true)\n", nonnegative);
    }
    else 
    {
        printf("1 (false)\n", nonnegative);
    }

    return 0;
}