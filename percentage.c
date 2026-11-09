#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");

    int per;

    printf("Enter percentage=");
    scanf("%d", &per); //75

    if (per >= 90 && per <= 100)
    {
        printf("Your Grade Is A+\n");
    }
    else if (per >= 80)
    {
        printf("Your Grade Is A\n");
    }
    else if (per >= 70)
    {
        printf("Your Grade Is B+\n");
    }
    else if (per >= 60)
    {
        printf("Your Grade Is B\n");
    }
    else if (per >= 50)
    {
        printf("Your Grade Is c\n");
    }
    else 
    {
        printf("You Are Fail!\n");
    }

    return 0;
}