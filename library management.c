#include <stdio.h>

#define MAX_STUDENT_NAME

struct Description
{
    int title;
    int author;
    int date;
};

struct Student 
{
    char name[MAX_STUDENT_NAME];
    int phone_number;
    int student_id;
};

int main(void)
{
    int i;
    struct Description description;
    struct Student student;

    printf("This is a library sample program");

    printf("State your name: \n");
    scanf("%50s", student.name);
    printf("Enter your phone number: \n");
    scanf("%d", student.phone_number);
    printf("Enter your student id: \n");
    scanf("%d", student.student_id);

    printf("Enter number 1 if you want to see a book.");
    printf("Enter number 0 if you want to exit the program");

    printf("Enter number: ");
    scanf("%d", i);

    if (i==1)
    {

        strcpy(description[0].title, "Code Complete");
        description[0].author = "Steve McConnell";
        strcpy(products[1].name, "Clean Code: A Handbook of Agile Software Craftsmanship");
        description[1].author = "Robert C. Martin";
        strcpy(products[2].name, "Introduction to Algorithms");
        description[2].author = "Thomas H. Cormen";
        strcpy(products[3].name, "The Hacker's Handbook: The Essential Guide to Computer Security");
        description[3].author = "Hugo Cornwall";
        strcpy(products[4].name, "Gray Hat Hacking: The Ethical Hacker's Handbook");
        description[4].author = "Shon Harris";
        strcpy(products[5].name, "Web Application Hackers Handbook: Finding and Exploiting Security Flaws");
        description[5].author = "Dafydd Stuttard and Marcus Pinto";
        strcpy(products[6].name, "Python Crash Course");
        description[6].author = "Eric Matthes";
        strcpy(products[7].name, "Deep Learning");
        description[7].author = "Ian Goodfellow, Yoshua Bengio, and Aaron Courville";
        strcpy(products[8].name, "Compilers: Principles, Techniques, and Tools");
        description[8].author = "Alfred Aho, Monica Lam, Ravi Sethi, and Jeffrey Ullman";
        strcpy(products[9].name, "Black Hat Python: Python Programming for Hackers and Pentesters");
        description[9].author = "Justin Seitz";
    }
}