#include <stdio.h>

float RET (float x)
{
    float result = x * x;
    return result;
}

int main()
{
    float x = RET(5);
    printf("%.2f", x);
    return 0;
}