#include <stdio.h>

 void ReverseArr (int arr[], int size)
 {
    int temp;
    int left = 0;
    int right = size - 1;

    while (left < right)
    {
        temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
 }
    
int main()
{
    int arr[99];
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Enter the number of elements : ");
    scanf("%d", &size);

    printf("Enter the elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Original array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    ReverseArr(arr, size);

    printf("Reversed array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
 }