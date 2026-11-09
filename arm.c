#include <stdio.h>
#include <stdlib.h>

int arm(int a);

int main()
{
    system("clear");

    int n;
    printf("Enter Number = ");
    scanf("%d", &n);//153

    int x = arm(n);

    if (x == n)
        printf("Armstsrong\n");

    else
        printf("Non Armstsrong\n");

    return 0;
}

int arm(int n)
{
    int a = n;//153

    int c = 0;//3
    while (a != 0)
    {
        a = a / 10;
        c++;
    }

    int sum = 0;
    while (n != 0)
    {
        int i = n % 10;//3

        int r = i;//3

        for (int a = 1; a < c; a++)
        {
            r = r * i;
        }

        sum = sum + r;

        n = n / 10;
    }

    return sum;

}