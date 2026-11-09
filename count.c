#include <stdio.h>
#include <stdlib.h>

int dig3(int a);

int main()
{
    system("clear");

    int digits;

    printf("Enter Number = ");
    scanf("%d", &digits);

    int c = dig3(digits);

    printf("Digits count = %d\n", c);

    return 0;
}

int dig3(int digits)
{
    int c = 0;
    while (digits != 0)
    {
        digits = digits / 10;

        c++;
    }
    return c;
}