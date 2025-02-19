#include <stdio.h>

void Instructions() 
{
    printf("Enter the race time in minutes and seconds for a runner.\n");
    printf("The program will compute and display the speed in feet per second and in meters per second.\n\n");
}

int main() 
{
    int minutes, seconds;
    double TSeconds, SfeetPerSec, SpeedMetersPerSec;
    const double feetPerMile = 5280.0;
    const double feetPerKilometer = 3282.0;

    Instructions();

    printf("Enter minutes: ");
    scanf("%d", &minutes);
    printf("Enter seconds: ");
    scanf("%d", &seconds);

    // computations
    TSeconds = minutes * 60 + seconds;
    SfeetPerSec = feetPerMile / TSeconds;
    SpeedMetersPerSec = (feetPerMile / feetPerKilometer * 1000) / TSeconds;

    printf("Speed in feet per second: %.2f\n", SfeetPerSec);
    printf("Speed in meters per second: %.2f\n", SpeedMetersPerSec);

    return 0;
}
