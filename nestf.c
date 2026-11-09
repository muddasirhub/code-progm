#include <stdio.h>
#include <stdlib.h>

int num(int a);
int dig(int b);
int main()
{
    system("clear");

    int i;

    printf("Enter Number = ");
    scanf("%d", &i);

    int x = dig(num(i));

    printf("Digits = %d\n", x);

    return 0;
}

int num(int i)
{
    int result = 0;

    while (i != 0)
    {
        int rem = i % 10;
        result = result * 10 + rem;
        i = i / 10;
    }
    printf("%d\n",result);

    return result;
}

int dig(int i)
{
    int c=0;
    while(i!=0)
    {
        i=i/10;
        c++;
    }
    return c;
}