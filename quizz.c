#include <stdio.h>

void sortArray(int arr[], int n) 
{
  int i, j, space;
  for (i = 0; i < n - 1; i++) 
  {
    for (j = 0; j < n - i - 1; j++) 
    {
      if (arr[j] > arr[j + 1]) 
      {
        space = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = space;
        }
      }
    }
}

int main(){
    int arr[5];
    int i, sum = 0;

    printf("Enter 5 decimal numbers: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    sortArray(arr, 5);

    for (i = 0; i < 5; i++) {
        sum += arr[i];
    }

    printf("Inputted sorted numbers: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nSum of the numbers: %d\n", sum);
    
    return 0;
}