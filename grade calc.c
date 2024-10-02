#include <stdio.h>

int main(void){

    double English;
    double Math;
    double Science;
    double Filipino;
    double MAPEH;
    double History;
    double average;

    printf("please enter your grades:");
    printf("\nEnglish: ");
    scanf("%lf", &English);
    printf("\nMath: ");
    scanf("%lf", &Math);
    printf("\nScience: ");
    scanf("%lf", &Science);
    printf("\nFilipino: ");
    scanf("%lf", &Filipino);
    printf("\nMAPEH: ");
    scanf("%lf", &MAPEH);
    printf("\nHistory: ");
    scanf("%lf", &History);

    average = (English + Math + Science + Filipino + MAPEH + History) / 6;
    printf("\n\nYour average is: %.2lf", average);

}