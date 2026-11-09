#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");

    int i;
    int factorial = 1;

    printf("Enter Number = ");
    scanf("%d", &i);

    if (i >= 1)
    {

        for (i = i; i >= 1; i--)
        {

            factorial = factorial * i;
        }

        printf("Factorial = %d\n", factorial);
    }
    return 0;
}