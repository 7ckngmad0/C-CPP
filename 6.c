#include <stdio.h>

int gcd(int a, int b) 
{
    while (b != 0) 
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int rel_prime(int i, int j) 
{
    return gcd(i, j) == 1 ? 1 : 0;
}

int main() {
    int i, j;

    printf("Enter two integers: ");
    scanf("%d %d", &i, &j);

    if (rel_prime(i, j)) 
    {
        printf("%d and %d are relatively prime.\n", i, j);
    }
    else 
    {
        printf("%d and %d are not relatively prime.\n", i, j);
    }

    return 0;
}