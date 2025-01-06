#include <stdio.h>
#include <string.h>

int isPalindrome(const char *str) 
{
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        if (str[left] != str[right]) 
        {
            return 0; 
        }
        left++;
        right--;
    }
    return 1; 
}

int main() {
    char inputString[100];

    printf("Enter a string: ");
    scanf("%99[^\n]", inputString);

    int result = isPalindrome(inputString);

    if (result) 
    {
        printf("1\n"); 
    } else 
    {
        printf("0\n"); 
    }

    return 0;
}