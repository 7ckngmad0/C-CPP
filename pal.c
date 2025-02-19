#include <stdio.h>
#include <string.h>

int isPalindrome(const char *str) 
{
    int start = 0;
    int end = strlen(str) - 1;

    while (start < end) {
        if (str[start] != str[end]) 
        {
            return 0; 
        }
        start++;
        end--;
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
    } 
    else 
    {
        printf("0\n"); 
    }

    return 0;
}