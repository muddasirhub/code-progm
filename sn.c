#include <stdio.h>
#include <stdlib.h>

int sn(int a);

int main()
{
    system("clear");

    int n;

    printf("Enter Number = ");
    scanf("%d", &n);

    int x = sn(n);

    if (x == n)
        printf("Storng Number\n");

    else
        printf("Non Storng Number\n");

    return 0;
}

int sn(int n)
{
    int result;
    int sum = 0;

    while (n != 0)
    {
        int rem = n % 10;

        result = 1;

        for (int a = 1; a <= rem; a++)
        {
            result = result * a;
        }
        sum = sum + result;

        n = n / 10;
    }
    return sum;
}