#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");
    int num;

    printf("Enter Number=");
    scanf("%d", &num); // 111

    if (num < 100 || num > 999)
    {
        printf("Please enter a valid 3 digit number\n");
        return 0;
    }

    int a = num / 100;     // 3
    int b = num / 10 % 10; // 2
    int c = num % 10;      // 5

    switch (a)
    {
    case 1:
        printf("one hunderd");
        break;
    case 2:
        printf("two hunderd");
        break;
    case 3:
        printf("three hunderd");
        break;
    case 4:
        printf("four hunderd");
        break;
    case 5:
        printf("five hunderd");
        break;
    case 6:
        printf("six hunderd");
        break;
    case 7:
        printf("seven hunderd");
        break;
    case 8:
        printf("eight hunderd");
        break;
    case 9:
        printf("nine hunderd");
        break;
    }
    if (b == 1)
    {
        switch (c)
        {
        case 0:

            printf(" ten\n");
            break;
        case 1:
            printf(" eleven\n");
            break;
        case 2:
            printf(" twelve\n");
            break;
        case 3:
            printf(" thirteen\n");
            break;
        case 4:
            printf(" fourteen\n");
            break;
        case 5:
            printf(" fifteen\n");
            break;
        case 6:
            printf(" sixteen\n");
            break;
        case 7:
            printf(" seventeen\n");
            break;
        case 8:
            printf(" eighteen\n");
            break;
        case 9:
            printf(" nineteen\n");
            break;
        }
    }
    else
    {
        switch (b)
        {

        case 2:
            printf(" twenty");
            break;
        case 3:
            printf(" thirty");
            break;
        case 4:
            printf(" fourty");
            break;
        case 5:
            printf(" fifty");
            break;
        case 6:
            printf(" sixty");
            break;
        case 7:
            printf(" seventy");
            break;
        case 8:
            printf(" eighty");
            break;
        case 9:
            printf(" ninety");
            break;
        }

        switch (c)
        {
        case 0:
            return 0;
            break;
        case 1:

            printf(" one\n");
            break;
        case 2:
            printf(" two\n");
            break;
        case 3:
            printf(" three\n");
            break;
        case 4:
            printf(" four\n");
            break;
        case 5:
            printf(" five\n");
            break;
        case 6:
            printf(" six\n");
            break;
        case 7:
            printf(" seven\n");
            break;
        case 8:
            printf(" eight\n");
            break;
        case 9:
            printf(" nine\n");
            break;
        }
    }

    return 0;
}