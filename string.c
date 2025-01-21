#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(void)
{
char str1[100] = "Jan";
char str2[100] = "Manuel";
char str3[100];

// STRING FUNCTIONS
strcpy(str3, str1);
printf("strcpy(str3, str1): %s\n", str3);

strncpy(str3, str2, 3);
str3[3] = '\0'; 
printf("strncpy(str3, str2, 3): %s\n", str3);

strxfrm(str3, str2, sizeof(str3));
printf("strxfrm(str3, str2): %s\n", str3);


// CONCATENATE
strcat(str1, str2);
printf("strcat(str1, str2): %s\n", str1);
strncat(str1, str2, 3);
printf("strncat(str1, str2, 3): %s\n", str1);

// COMPARE
int cmp = strcmp(str1, str2);
printf("strcmp(str1, str2): %d\n", cmp);
cmp = strncmp(str1, str2, 3);
printf("strncmp(str1, str2, 3): %d\n", cmp);

cmp = stricmp(str1, str2);
printf("stricmp result: %d\n", cmp);
    if (cmp == 0) {
        printf("The strings are equal (case-insensitive).\n");
    } else if (cmp < 0) {
        printf("'%s' is less than '%s' (case-insensitive).\n", str1, str2);
    } else {
        printf("'%s' is greater than '%s' (case-insensitive).\n", str1, str2);
    }

    cmp = strnicmp(str1, str2, 3);
    printf("strnicmp result: %d\n", cmp);
    if (cmp == 0) 
    {
        printf("The first 3 characters are equal (case-insensitive).\n");
    } 
    else if (cmp < 0) 
    {
        printf("The first 3 characters of '%s' are less than those of '%s' (case-insensitive).\n", str1, str2);
    } 
    else 
    {
        printf("The first 3 characters of '%s' are greater than those of '%s' (case-insensitive).\n", str1, str2);
    }

    // ERROR
    char *error_message = "It's an error message broskie";
    int error_number = 2;

    printf("Custom error message: %s\n", error_message);
    printf("Standard error message for error number %d: %s\n", error_number, strerror(error_number));

    char *custom_error_message = "Custom error";
    char *result = _strerror(custom_error_message);
    printf("Custom error message using _strerror: %s\n", result);

    //CASE
    strcpy(str3, str1);
    printf("Original string: %s\n", str3);
    printf("Lowercase string: %s\n", strlwr(str3));

    strcpy(str3, str2);
    printf("Original string: %s\n", str3);
    printf("Uppercase string: %s\n", strupr(str3));

    //SET
    strset(str3, '*');
    printf("strset(str3, '*'): %s\n", str3);

    strncpy(str3, str2, sizeof(str3));
    strnset(str3, '#', 3);
    printf("strnset(str3, '#', 3): %s\n", str3);

    // MATCH
    size_t len = strcspn(str1, str2);
    printf("strcspn(str1, str2): %zu\n", len);

    len = strspn(str1, str2);
    printf("strspn(str1, str2): %zu\n", len);

    char *ptr = strpbrk(str1, str2);
    if (ptr) 
    {
        printf("strpbrk(str1, str2): %s\n", ptr);
    } 
    else 
    {
        printf("strpbrk(str1, str2): not found\n");
    }

    ptr = strrchr(str1, 'a');
    if (ptr) 
    {
        printf("strrchr(str1, 'a'): %s\n", ptr);
    } 
    else 
    {
        printf("strrchr(str1, 'a'): not found\n");
    }

    // OTHERS
    ptr = strchr(str1, 'M');
    if (ptr) 
    {
        printf("strchr(str1, 'M'): %s\n", ptr);
    } 
    else 
    {
        printf("strchr(str1, 'M'): not found\n");
    }

    char *dup_str = strdup(str2);
    if (dup_str) 
    {
        printf("strdup(str2): %s\n", dup_str);
        free(dup_str);
    } 
    else 
    {
        printf("strdup(str2): memory allocation failed\n");
    }

    size_t length = strlen(str1);
    printf("strlen(str1): %zu\n", length);

    strcpy(str3, str1);
    printf("Original string: %s\n", str3);
    printf("Reversed string: %s\n", strrev(str3));

    //MATH.H
    int num = -10;
    int abs_num = abs(num);
    printf("\n\nabs(%d): %d\n", num, abs_num);

    double num1 = 4.3;
    double num2 = -4.3;
    printf("ceil(%.1f): %.1f\n", num1, ceil(num1));
    printf("ceil(%.1f): %.1f\n", num2, ceil(num2));

    double num3 = -123.456;
    double abs_num3 = fabs(num3);
    printf("fabs(%.3f): %.3f\n", num3, abs_num3);

    printf("floor(%.1f): %.1f\n", num1, floor(num1));
    printf("floor(%.1f): %.1f\n", num2, floor(num2));

    double dividend = 5.3;
    double divisor = 2.1;
    double remainder = fmod(dividend, divisor);
    printf("fmod(%.1f, %.1f): %.1f\n", dividend, divisor, remainder);

    double base = 2.0;
    double exponent = 3.0;
    double pow_result = pow(base, exponent);
    printf("pow(%.1f, %.1f): %.1f\n", base, exponent, pow_result);

    double power_of_ten = pow(10.0, 3.0);
    printf("pow(10.0, 3.0): %.1f\n", power_of_ten);

    double number = 16.0;
    double sqrt_result = sqrt(number);
    printf("\nsqrt(%.1f): %.1f\n", number, sqrt_result);




    //CHARACTER FUNCTIONS
    char str4[100] = "janmanuel";
    for (int i = 0; str4[i] != '\0'; i++) {
        str4[i] = toupper(str4[i]);
    }
    printf("toupper(\"janmanuel\"): %s\n", str4);

    strcpy(str4, "JANMANUEL");
    for (int i = 0; str4[i] != '\0'; i++) {
        str4[i] = tolower(str4[i]);
    }
    printf("tolower(\"JANMANUEL\"): %s\n", str4);

    // //CONVENTIONAL FUNCTIONS
    // const char *float_str = "123.456";
    // double float_num = atof(float_str);
    // printf("\natof(\"%s\"): %f\n", float_str, float_num);
}