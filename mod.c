#include <stdio.h>

int sumArray(int arr[], int size)
{
    int sum = 0;
    for(int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

void calculate ()
{
    int size;
    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements: ");

    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int result = sumArray(arr, size);
    printf ("Sum = ");
    for (int i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
        if (i < size - 1) printf(" + ");
    }
    printf(" = %d\n", result);
}

int main() 
{
    calculate();
    return 0;
}