#include <stdio.h>

#define NUM_QUESTIONS 10

int main(void) {
    int i;
    int answers[NUM_QUESTIONS];
    int points[NUM_QUESTIONS];
    int total_points = 0;
    int play_again;

    printf("WELCOME TO MY QUIZ GAME:))))\n\n");

    printf("> Enter 1 to start the game.\n");
    printf("> Enter 0 to quit the game.\n");

    scanf("%d", &i);

    if (i == 1) {
        printf("The quiz game has started!\n\n");

        for (int j = 0; j < NUM_QUESTIONS; j++) {
            printf("%d. What is ", j + 1);

            switch (j) {
                case 0:
                    printf("the purpose of the #include directive in C?\n\n");
                    printf("1) To define a function\n");
                    printf("2) To declare a variable\n");
                    printf("3) To include a header file\n");
                    printf("4) To start the program execution\n");
                    break;
                case 1:
                    printf("the value of `x` after the code `int x = 5; x = x + 2;`?\n\n");
                    printf("1) 7\n");
                    printf("2) 2\n");
                    printf("3) 3\n");
                    printf("4) 10\n");
                    break;
                case 2:
                    printf("the purpose of the scanf function in C?\n\n");
                    printf("1) To print output to the screen\n");
                    printf("2) To read input from the user\n");
                    printf("3) To perform arithmetic operations\n");
                    printf("4) To declare a variable\n");
                    break;
                case 3:
                    printf("the output of the C code `char c = 'A'; printf(\"%%d\", c + 1);?`\n\n");
                    printf("1) A\n");
                    printf("2) B\n");
                    printf("3) a\n");
                    printf("4) b\n");
                    break;
                case 4:
                    printf("the output of the C code `int x = 5; int y = x++; printf(\"%%d\", y);?`\n\n");
                    printf("1) 7\n");
                    printf("2) 4\n");
                    printf("3) 6\n");
                    printf("4) 5\n");
                    break;
                case 5:
                    printf("the output of the following C code: printf(\"%%d\", 5/2);?\n\n");
                    printf("1) 2.5 \n");
                    printf("2) 2 \n");
                    printf("3) 5\n");
                    printf("4) Error\n");
                    break;
                case 6:
                    printf("the purpose of the sizeof operator in C?\n\n");
                    printf("1) To get the address of a variable\n");
                    printf("2) To get the value of a variable\n");
                    printf("3) To get the size of a variable\n");
                    printf("4) To get the type of a variable\n");
                    break;
                case 7:
                    printf("the purpose of the break statement in C?\n\n");
                    printf("1) To exit the loop\n");
                    printf("2) To skip the current iteration\n");
                    printf("3) To continue the loop\n");
                    printf("4) To return from a function\n");
                    break;
                case 8:
                    printf("the purpose of the `static` keyword in C?\n\n");
                    printf("1) To declare a global variable\n");
                    printf("2) To declare a local variable\n");
                    printf("3) To initialize a variable\n");
                    printf("4) To preserve the value of a variable between function calls\n");
                    break;
                case 9:
                    printf("the purpose of the `extern` keyword in C?\n\n");
                    printf("1) To declare a variable that is defined in another file\n");
                    printf("2) To declare a global variable\n");
                    printf("3) To declare a local variable\n");
                    printf("4) To declare a function prototype\n");
                    break;
            }

            printf("Enter your answer: ");
            scanf("%d", &answers[j]);

            const int correct_answers[NUM_QUESTIONS] = {3, 1, 2, 2, 4, 2, 3, 1, 4, 1};

            if (answers[j] == correct_answers[j]) {
                printf("Your answer is correct!\n");
                points[j] = 1;
            } else {
                printf("Your answer is incorrect!\n");
                points[j] = 0;
            }

            printf("You have scored %d point\n\n", points[j]);
        }

        for (int j = 0; j < NUM_QUESTIONS; j++) {
            total_points += points[j];
        }

        printf("Your total score is %d points\n", total_points);
            if (total_points == 10)
            {
                printf("wow! you're a certified C enthusiast!");
            }

            else if (total_points > 6 && total_points < 10)
            {
                printf("Try harder!");
            }

            else
            {
                printf("erm... what the sigma?\n\n");
            }
        
        printf("Do you want to play again? (1 = Yes, 0 = No)\n");
        scanf("%d", &play_again);
            if (play_again == 1) {
                main(); // restart the quiz
            } 
            else if (play_again == 0) 
            {
                printf("Goodbye!\n");
            } 
            else
            {
                printf("Invalid input\n");
            }
            
    } 
    else if (i == 0) 
    {
        printf("The quiz game ended!\n\n");
    } 
    else 
    {
        printf("Invalid input\n\n");
    }

}