#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int curr;

    printf("Enter amount="); // 6776
    scanf("%d", &curr);

    if (curr >= 5000)
    {
        printf("5000 = %d\n", curr / 5000); // 1
    }
    int a = curr % 5000; // 1776

    if (a >= 1000)
    {
        printf("1000 = %d\n", a / 1000); // 1
    }
    int b = a % 1000; // 776

    if (b >= 500)
    {
        printf("500 = %d\n", b / 500); // 1
    }
    int c = b % 500; // 276

    if (c >= 100)
    {
        printf("100 = %d\n", c / 100); // 2
    }
    int d = c % 100; // 76

    if (d >= 50)
    {
        printf("50 = %d\n", d / 50); // 1
    }
    int e = d % 50; // 26
    if (e >= 20)
    {
        printf("20 = %d\n", e / 20); // 1
    }
    int f = e % 20; // 6

    if (f >= 10)
    {
        printf("10 = %d\n", f / 10);
    }
    int g = f % 10;

    if (g >= 5)
    {
        printf("5 = %d\n", g / 5);
    }

    int h = g % 5;

    if (h >= 1)
    {
        printf("1 = %d\n", h / 1);
    }

    return 0;
}