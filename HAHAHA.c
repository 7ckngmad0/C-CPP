#include <stdio.h>
#include <unistd.h>

void print_Mortred(const char *Mortred) {
    for (int i = 0; Mortred[i] != '\0'; i++) {
        printf("%c", Mortred[i]);
        fflush(stdout);
        usleep(150000);
    }
    printf("\n");
}

void print_Nevermore(const char *Nevermore) {
    for (int i = 0; Nevermore[i] != '\0'; i++) {
        printf("%c", Nevermore[i]);
        fflush(stdout);
        usleep(115000);

         if (i >= 35 && strncmp(Nevermore + i - 35, "Kahit sabihin ko pang, \"Mahal kita\"\n", 36) == 0) {
        usleep(3000000);
        }
    }
    printf("\n");
}

void print_Kael(const char *Kael) {
    for (int i = 0; Kael[i] != '\0'; i++) {
        printf("%c", Kael[i]);
        fflush(stdout);
        usleep(100000);

        if (i >= 20 && strncmp(Kael + i - 20, "Bumalik ka na sa'kin\n", 21) == 0) {
        usleep(1700000);
        }
        else if (i >= 23 && strncmp(Kael + i - 23, "Hindi ka na nagparamdam\n", 24) == 0) {
        usleep(800000);
        }
        else if (i >= 32 && strncmp(Kael + i - 32, "Buhat ng cool off ako'y nahibang\n", 33) == 0) {
        usleep(1200000);
        }
        else if (i >= 52 && strncmp(Kael + i - 52, "Sige na please 'wag nang mainis bumalik ka na sa'kin\n", 53) == 0) {
        usleep(1200000);
        }
        else if (i >= 47 && strncmp(Kael + i - 47, "Sorry mahal ika'y nasaktan bumalik ka na sa'kin\n", 47) == 0) {
        usleep(1200000);
        }
    }
    printf("\n");
}

void print_Yurnero(const char *Yurnero) {
    for (int i = 0; Yurnero[i] != '\0'; i++) {
        printf("%c", Yurnero[i]);
        fflush(stdout);
        usleep(130000);

        if (i >= 35 && strncmp(Yurnero + i - 35, "\n'Sandal mo sana ang ulo mo sa unan\n", 36) == 0) {
        usleep(1000000);
        }
        else if (i >= 29 && strncmp(Yurnero + i - 29, "Katawan mo ay aking kukumutan\n", 30) == 0) {
        usleep(1200000);
        }
        else if (i >= 32 && strncmp(Yurnero + i - 32, "Mga problema'y iyong malilimutan\n", 33) == 0) {
        usleep(1800000);
        }
        else if (i >= 33 && strncmp(Yurnero + i - 33, "Habang tayo'y magkayakap sa dilim\n", 34) == 0) {
        usleep(2000000);
        }
        else if (i >= 36 && strncmp(Yurnero + i - 36, "'Wag mong pigilin kung nais mapaluha\n", 37) == 0) {
        usleep(1000000);
        }
        else if (i >= 30 && strncmp(Yurnero + i - 30, "Pakiramdam mo sana'y guminhawa\n", 31) == 0) {
        usleep(1000000);
        }
        else if (i >= 34 && strncmp(Yurnero + i - 34, "Kung gusto mo ay magsigarilyo muna\n", 35) == 0) {
        usleep(2300000);
        }
    }
    printf("\n");
}


int main(void) {
    int press;
    char operator;
    double num1;
    double num2;
    double result;

    while (1) {
        printf("Welcome to my simple low budget calculator HAHAHAHAHAHA\n\n");
        printf("enter 1 if you want to calculate some shit\n");
        printf("enter 0 if you want to exit(wag po:<<)\n");

        printf("your decision: ");
        scanf("%d", &press);

        if (press == 1)
        {
            printf("Please enter an operator (+, -, *, /): ");
            scanf(" %c", &operator);

            printf("\nenter num1: ");
            scanf("%lf", &num1);
            printf("\nenter num2: ");
            scanf("%lf", &num2);

            switch (operator) {
                case '+':
                    const char *Mortred = "\nParang tangang kausap ang tala at buwan\n"
                                        "Naghihintay ng mayro'n sa gitna ng kawalan\n"
                                        "Natutong lumipad kahit pagod at sugatan\n"
                                        "Pag-ahon ko sa lupa'y iiwanan lang naman\n"
                                        "Walang nag-iba\n"
                                        "Talo na naman tayo";
                    print_Mortred(Mortred);
                    break;
                case '-':
                    const char *Nevermore = "\nSana'y hindi na lang pinilit pa\n"
                                        "Wala ring patutunguhan\n"
                                        "Kahit sabihin ko pang, \"Mahal kita\"\n"
                                        "Nalulungkot, nayayamot, nagmumukmok\n"
                                        "Hindi ko pa yata kaya pang labanan ang damdamin ko\n";
                    print_Nevermore(Nevermore);
                    break;
                case '*':
                    const char *Kael = "\nMagaan na ba ang 'yong paghinga?\n"
                                        "Bumalik ka na sa'kin\n"
                                        "Klaro na ba ang isip, sinta\n"
                                        "Bumalik ka na sa'kin\n"
                                        "Hindi ka na nagparamdam\n"
                                        "Buhat ng cool off ako'y nahibang\n"
                                        "Sige na please 'wag nang mainis bumalik ka na sa'kin\n"
                                        "Sorry mahal ika'y nasaktan bumalik ka na sa'kin\n"
                                        "Bumalik ka na sa akin\n";
                    print_Kael(Kael);
                    break;
                case '/':
                    const char *Yurnero = "\n'Sandal mo sana ang ulo mo sa unan\n"
                                        "Katawan mo ay aking kukumutan\n"
                                        "Mga problema'y iyong malilimutan\n"
                                        "Habang tayo'y magkayakap sa dilim\n"
                                        "'Wag mong pigilin kung nais mapaluha\n"
                                        "Pakiramdam mo sana'y guminhawa\n"
                                        "Kung gusto mo ay magsigarilyo muna\n"
                                        "Bago tayo magkayakap sa dilim\n";
                    print_Yurnero(Yurnero);
                    break;
                default:
                    break;
            }
        }
        else if (press == 0) 
        {
            printf("You quit my calculator program, HOW DARE YOU!!!\n\n");
            break;
        } 
        else 
        {
            printf("Invalid input. Please try again.\n");
            int c;
            while ((c = getchar()) != '\n' && c != EOF);
        }
    }
}