#include <stdio.h>

#define SIZE 20

void succ(int arr[], int size, int result[])
{
    for(int i = 0; i < size - 1; i++)
    {
        result[i] = arr[i] + arr[i + 1];
    }
}   

int main()
{
    int arr[SIZE];
    int result[SIZE - 1];

    printf("enter %d values for the array: \n", SIZE);
    for (int i = 0; i < SIZE; i++)
    {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }

    succ(arr, SIZE, result);

    printf("The original array: ");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("The sum of the 2 succeeding arrays: ");
    for (int i = 0; i < SIZE - 1; i++)
    {
        printf("%d ", result[i]);
    }
    printf("\n");
    return 0;
}