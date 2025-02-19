#include <stdio.h>
// Function to compute the nth Fibonacci number
int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    int count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++) {
    printf("Fibonacci number at position %d is %d\n", i, fibonacci(i));
    count++;
    }
    printf("Total Fibonacci numbers displayed: %d\n", count);
    return 0;
}

