#include <stdio.h>
#include <stdlib.h>

int strong(int a);
int facto(int rem);

int main()
{
    system("clear");

    int num;

    printf("Enter Number = ");
    scanf("%d", &num); // 564

    int x = strong(num);

    if (x == num)
        printf("strong\n");

    else
        printf("not strong\n");

    return 0;
}
int strong(int num)
{
    int r = 0;

    while (num != 0)
    {

        int rem = num % 10;
        num = num / 10;

        int w=facto(rem);

        r = r + w;
    }
    return r;
}
int facto(int rem)
{

    int fact = 1;

    for (int a = 1; a <= rem; a++)
    {
        fact = fact * a;
    }
    return fact;
}