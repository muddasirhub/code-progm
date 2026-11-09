#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");

    int birthYear;
    const int _YEAR = 2026;
    const int _MONTH = 12;
    const int _DAYS = 365;
    const int _HOURS = 24;
    const int _MINUTES = 60;
    const int _SECONDS = 60;

    printf("Enter Your Birthyear=");
    scanf("%d", &birthYear);

    int age = _YEAR - birthYear; // 16

    if (age != 0)               
    {
        int months = age * _MONTH; // 156
        int days = age * _DAYS;    //
        int hours = days * _HOURS;
        int minutes = hours * _MINUTES;
        int seconds = minutes * _SECONDS;

        printf("AGE=%3d\n", age);
        printf("MONTHS=%d\n", months);
        printf("DAYS=%d\n", days);
        printf("HOURS=%d\n", hours);
        printf("MINUTES=%d\n", minutes);
        printf("SECONDS=%d\n", seconds);
    }

    return 0;
}