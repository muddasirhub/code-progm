#include <stdio.h>
#include <stdlib.h>
#define length 10
#define breath 25

int main()
{
    system("cls");

    int x = 1;

    printf("x x x x x x x x x x x x x x\n");

    while (x < length)
    {
        printf("x");

        for (int i = 1; i <= breath; i++)
        {
            printf(" ");
        }
        printf("x\n");

        x++;
    }

    printf("x x x x x x x x x x x x x x");

    return 0;
}