#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int a;
    int facto = 1;

    printf("Enter Number = ");
    scanf("%d", &a);

    if (a >= 1)
    {

        for (a = a; a >= 1; a--)

            facto = facto * a;

        printf("Factorial = %d\n", facto);
    }
    else
    {
        printf("Invalid Input\n");
    }

    return 0;
}