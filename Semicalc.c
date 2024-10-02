#include <stdio.h>
int main(void){

    char operator;
    double num1;
    double num2;
    double result;

    printf("Please enter an operator (+, -, *, /): ");
    scanf("%c", &operator);


    printf("\nenter num1: ");
    scanf("%lf", &num1);

    printf("\nenter num2: ");
    scanf("%lf", &num2);

    switch(operator){
        case '+':
            result = num1 + num2;
            printf("\nThe result is: %.2lf", result);
            break;
        case '-':
            result = num1 - num2;
            printf("\nThe result is: %.2lf", result);
            break;
        case '*':
            result = num1 * num2;
            printf("\nThe result is: %.2lf", result);
            break;
        case '/':
            result = num1 / num2;
            printf("\nThe result is: %.2lf", result);
            break;
       default:
        printf("\nThis operator is not on our program!!!");

    }
}
