#include <stdio.h>

int main(void){

    int conversion;
    float celsius;
    float fahrenheit;
    float kelvin;

    printf("temperature conversion\n\n\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Celsius to Kelvin\n");
    printf("3. Fahrenheit to Celsius\n");
    printf("4. Fahrenheit to Kelvin\n");
    printf("5. Kelvin to Celsius\n");
    printf("6. Kelvin to Fahrenheit\n");
    printf("choose a conversion type(1, 2, 3, 4, 5, or 6): ");
    scanf("%d", &conversion);

    switch(conversion) {
        case 1:
            printf("Enter the temperature in celsius: ");
            scanf("%f", &celsius);
            fahrenheit = (celsius * 9/5) + 32;
            printf("%.2fC is equal to %.2fF", celsius, fahrenheit);
            break;
        case 2:
            printf("Enter the temperature in celsius: ");
            scanf("%f", &celsius);
            kelvin = celsius + 273.15; 
            printf("%.2fC is equal to %.2fK", celsius, kelvin);
            break;
        case 3:
            printf("Enter the temperature in fahrenheit: ");
            scanf("%f", &fahrenheit);
            celsius = (fahrenheit - 32) * 5 / 9;
            printf("%.2fF is equal to %.2fC", fahrenheit, celsius);
            break;
        case 4:
            printf("Enter the temperature in fahrenheit: ");
            scanf("%f", &fahrenheit);
            kelvin = (fahrenheit - 32) * 5 / 9 + 273.15;
            printf("%.2fF is equal to %.2fK", fahrenheit, kelvin);
            break;
        case 5:
            printf("Enter the temperature in Kelvin: ");
            scanf("%f", &kelvin);
            celsius = kelvin - 273.15;
            printf("%.2fK is equal to %.2fC", kelvin, celsius);
            break;
        case 6:
            printf("Enter the temperature in Kelvin: ");
            scanf("%f", &kelvin);
            fahrenheit = (kelvin - 273.15) * 9 / 5 + 32;
            printf("%.2fK is equal to %.2fF", kelvin, fahrenheit);
            break;
        default:
            printf("Invalid choice. Please try again.\n");
            break;
    }
}