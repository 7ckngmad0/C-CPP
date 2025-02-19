#include <stdio.h>

#define SIZE 20

int EVEN(int arr[], int size)
{
    int sum = 0;
    for (int i = 1; i < size; i+=2)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int BSIT[SIZE];
    int sumeven;
    
    printf("Enter the 20 values: \n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("Elements %d: ", i);
        scanf("%d", &BSIT[i]);
    }

    sumeven = EVEN(BSIT, SIZE);

    printf("BSIT: ");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", BSIT[i]);
    }
    printf("\n");

    printf("The sum of all the even indices is: %d", sumeven);

    return 0;
}