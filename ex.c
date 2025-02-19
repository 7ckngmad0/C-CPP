#include <stdio.h>

int main() {
    float amount, original_amount;
    int count;
    
    // User input ng amount na iwi-withdraw
    printf("Enter the amount to be withdrawn: ");
    scanf("%f", &amount);
    
    original_amount = amount;

    printf("\nAmount to be withdrawn: %.2f\n", original_amount);

    printf("\n+---------------+-------+----------+\n");
    printf("|   Denomination  | Count |  Amount|\n");
    printf("+---------------+-------+----------+\n");

    // Conversion ng amount to cents para mas accurate ang pagcompute and to avoid floating point errors
    int cents_conv = (int)(amount * 100 + 0.5);

    if ((count = cents_conv / 100000) > 0) {
        printf("| 1000          | %5d | %8.2f |\n", count, count * 1000.0);
        cents_conv -= count * 100000;
    }
    if ((count = cents_conv / 50000) > 0) {
        printf("| 500           | %5d | %8.2f |\n", count, count * 500.0);
        cents_conv -= count * 50000;
    }
    if ((count = cents_conv / 20000) > 0) {
        printf("| 200           | %5d | %8.2f |\n", count, count * 200.0);
        cents_conv -= count * 20000;
    }
    if ((count = cents_conv / 10000) > 0) {
        printf("| 100           | %5d | %8.2f |\n", count, count * 100.0);
        cents_conv -= count * 10000;
    }
    if ((count = cents_conv / 5000) > 0) {
        printf("| 50            | %5d | %8.2f |\n", count, count * 50.0);
        cents_conv -= count * 5000;
    }
    if ((count = cents_conv / 2000) > 0) {
        printf("| 20            | %5d | %8.2f |\n", count, count * 20.0);
        cents_conv -= count * 2000;
    }
    if ((count = cents_conv / 1000) > 0) {
        printf("| 10            | %5d | %8.2f |\n", count, count * 10.0);
        cents_conv -= count * 1000;
    }
    if ((count = cents_conv / 500) > 0) {
        printf("| 5             | %5d | %8.2f |\n", count, count * 5.0);
        cents_conv -= count * 500;
    }
    if ((count = cents_conv / 100) > 0) {
        printf("| 1             | %5d | %8.2f |\n", count, count * 1.0);
        cents_conv -= count * 100;
    }
    if ((count = cents_conv / 25) > 0) {
        printf("| 0.25          | %5d | %8.2f |\n", count, count * 0.25);
        cents_conv -= count * 25;
    }
    if ((count = cents_conv / 5) > 0) {
        printf("| 0.05          | %5d | %8.2f |\n", count, count * 0.05);
        cents_conv -= count * 5;
    }
    if ((count = cents_conv / 1) > 0) {
        printf("| 0.01          | %5d | %8.2f |\n", count, count * 0.01);
        cents_conv -= count * 1;
    }

    // Print ng amount na iwi-withdraw ng customer
    printf("+---------------+-------+----------+\n");
    printf("| Total         |       | %8.2f |\n", original_amount);
    printf("+---------------+-------+----------+\n");

    return 0;
}