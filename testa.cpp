#include <stdio.h>

int main()
{


char name[25];
int age;

    printf("enter your name: ");
    scanf("%s", &name);

    printf("enter your age: ");
    scanf("%d", &age);

    printf("hi %s, you are %d years old!", name, age);
}
