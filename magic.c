#include <stdio.h>
#include <stdlib.h>

int magic(int a);

int main()
{
    system("clear");

    int n;
    printf("Enter Number = ");
    scanf("%d", &n);

    int x = magic(n);

    if (x == n)
        printf("Magic\n");

    else
        printf("Non Magic\n");

    return 0;
}

int magic(int n)
{
    int sum = 0;
    int rev;
    int result = 0;

    while (n != 0)
    {
        int rem = n % 10;//
        sum = sum + rem;
        n = n / 10;
    }

    rev = sum;

    while (rev != 0)
    {
        int a = rev % 10;//2
        result = result * 10 + a;//2
        rev = rev / 10;
    }

    return sum * result;
}