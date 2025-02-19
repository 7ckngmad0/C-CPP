#include <stdio.h>

int main() {
    float amount, original_amount;
    int count;
    
    printf("Enter the amount to be withdrawn: ");
    scanf("%f", &amount);
    
    //para sa original/total amount na ilalagay sa dulo
    original_amount = amount;

    printf("\nAmount to be withdrawn: %.2f\n", original_amount);

    printf("\n+---------------+-------+----------+\n");
    printf("|   Denomination  | Count |  Amount|\n");
    printf("+---------------+-------+----------+\n");

    //ito yung mga denominations na pwedeng i-withdraw galing don sa amount na ininput ng user
    if ((count = amount / 1000) > 0) {
        printf("| 1000          | %5d | %8.2f |\n", count, count * 1000.0);
        amount -= count * 1000;
    }
    if ((count = amount / 500) > 0) {
        printf("| 500           | %5d | %8.2f |\n", count, count * 500.0);
        amount -= count * 500;
    }
    if ((count = amount / 200) > 0) {
        printf("| 200           | %5d | %8.2f |\n", count, count * 200.0);
        amount -= count * 200;
    }
    if ((count = amount / 100) > 0) {
        printf("| 100           | %5d | %8.2f |\n", count, count * 100.0);
        amount -= count * 100;
    }
    if ((count = amount / 50) > 0) {
        printf("| 50            | %5d | %8.2f |\n", count, count * 50.0);
        amount -= count * 50;
    }
    if ((count = amount / 20) > 0) {
        printf("| 20            | %5d | %8.2f |\n", count, count * 20.0);
        amount -= count * 20;
    }
    if ((count = amount / 10) > 0) {
        printf("| 10            | %5d | %8.2f |\n", count, count * 10.0);
        amount -= count * 10;
    }
    if ((count = amount / 5) > 0) {
        printf("| 5             | %5d | %8.2f |\n", count, count * 5.0);
        amount -= count * 5;
    }
    if ((count = amount / 1) > 0) {
        printf("| 1             | %5d | %8.2f |\n", count, count * 1.0);
        amount -= count * 1;
    }
    if ((count = amount / 0.25) > 0) {
        printf("| 0.25          | %5d | %8.2f |\n", count, count * 0.25);
        amount -= count * 0.25;
    }
    if ((count = amount / 0.05) > 0) {
        printf("| 0.05          | %5d | %8.2f |\n", count, count * 0.05);
        amount -= count * 0.05;
    }

    if ((count = amount / 0.01) > 0) {
        printf("| 0.01          | %5d | %8.2f |\n", count, (float)count * 0.01);
        amount -= count * 0.01;
    }

    //print ng total amount na na-withdraw ng customer
    printf("+---------------+-------+----------+\n");
    printf("| Total         |       | %8.2f |\n", original_amount);
    printf("+---------------+-------+----------+\n");

    return 0;
}
