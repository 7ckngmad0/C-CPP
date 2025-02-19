#include <stdio.h>

int Add(int a, int b) 
{
    return a + b;
}

int Subtract(int a, int b) 
{
    return a - b;
}

int Multiply(int a, int b) 
{
    return a * b;
}

float Divide(int a, int b) 
{
    if (b == 0) 
    {
        printf("Error: Division by zero!\n");
        return 0;
    }
    return (float)a / b;
}

int AddArray(int arr[], int size) 
{
    int sum = 0;
    for (int i = 0; i < size; i++) 
    {
        sum += arr[i];
    }
    return sum;
}

int SubtractArray(int arr[], int size) 
{
    int result = arr[0];
    for (int i = 1; i < size; i++) 
    {
        result -= arr[i];
    }
    return result;
}

int MultiplyArray(int arr[], int size) 
{
    int result = 1;
    for (int i = 0; i < size; i++) 
    {
        result *= arr[i];
    }
    return result;
}

float DivideArray(int arr[], int size) 
{
    float result = (float)arr[0];
    for (int i = 1; i < size; i++) 
    {
        if (arr[i] == 0) 
        {
            printf("Error: Division by zero!\n");
            return 0;
        }
        result /= arr[i];
    }
    return result;
}

void CalculateArray(int choice) 
{
    int size;
    printf("Enter the \033[1m\033[3m\033[32mnumber of elements: \033[0m");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements: ");
    for (int i = 0; i < size; i++) 
    {
        scanf("%d", &arr[i]);
    }

    
    float result = 0;
    switch (choice) 
    {
        case 1:
            result = AddArray(arr, size);
            printf("Result: ");
            for (int i = 0; i < size; i++) 
            {
                printf("%d", arr[i]);
                if (i < size - 1) printf(" + ");
            }
            printf(" = \033[1m%.2f\n\033[0m", result);
            break;
        case 2:
            result = SubtractArray(arr, size);
            printf("Result: ");
            for (int i = 0; i < size; i++) 
            {
                printf("%d", arr[i]);
                if (i < size - 1) printf(" - ");
            }
            printf(" = \033[1m%.2f\n\033[0m", result);
            break;
        case 3:
            result = MultiplyArray(arr, size);
            printf("Result: ");
            for (int i = 0; i < size; i++) 
            {
                printf("%d", arr[i]);
                if (i < size - 1) printf(" * ");
            }
            printf(" = \033[1m%.2f\n\033[0m", result);
            break;
        case 4:
            result = DivideArray(arr, size);
            printf("Result: ");
            for (int i = 0; i < size; i++) 
            {
                printf("%d", arr[i]);
                if (i < size - 1) printf(" / ");
            }
            printf(" = \033[1m%.2f\n\033[0m", result);
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }

    while (1) 
    {
        int num;
        printf("Enter a number \033[1m(0 to stop): \033[0m");
        scanf("%d", &num);

        if (num == 0) 
        {
            break;
        }

        arr[size] = num;
        size++;

        switch (choice) 
        {
            case 1:
                result = AddArray(arr, size);
                printf("Result: ");
                for (int i = 0; i < size; i++) 
                {
                    printf("%d", arr[i]);
                    if (i < size - 1) printf(" + ");
                }
                printf(" = \033[1m%.2f\n\033[0m", result);
                break;
            case 2:
                result = SubtractArray(arr, size);
                printf("Result: ");
                for (int i = 0; i < size; i++) 
                {
                    printf("%d", arr[i]);
                    if (i < size - 1) printf(" - ");
                }
                printf(" = \033[1m%.2f\n\033[0m", result);
                break;
            case 3:
                result = MultiplyArray(arr, size);
                printf("Result: ");
                for (int i = 0; i < size; i++) 
                {
                    printf("%d", arr[i]);
                    if (i < size - 1) printf(" * ");
                }
                printf(" = \033[1m%.2f\n\033[0m", result);
                break;
            case 4:
                result = DivideArray(arr, size);
                printf("Result: ");
                for (int i = 0; i < size; i++) 
                {
                    printf("%d", arr[i]);
                    if (i < size - 1) printf(" / ");
                }
                printf(" = \033[1m%.2f\n\033[0m", result);
                break;
            default:
                printf("Invalid choice.\n");
                break;
        }
    }
}

int main() {
    int choice;

    while (1) {
        printf("\nBasic Calculator\n");
        printf("\033[33m[1] Add\n\033[0m");
        printf("\033[31m[2] Subtract\n\033[0m");
        printf("\033[32m[3] Multiply\n\033[0m");
        printf("\033[35m[4] Divide\n\033[0m");
        printf("\033[36m[5] Exit\n\033[0m");
        printf("Enter your choice:");
        scanf("%d", &choice);

        if (choice == 5) 
        {
            break;
        }

        CalculateArray(choice);
    }
    return 0;
}
