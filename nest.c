#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    system("clear");

    // int a = 1;
    // int b = 5;
    // int c = 1;

    // do
    // {

    //     b = 5;

    //     do
    //     {

    //         printf(" ");

    //         b--;

    //     } while (b >= a);

    //     c = 1;
    //     do
    //     {

    //         printf("x ");

    //         c++;

    //     } while (c <= a);

    //     printf("\n");

    //     a++;
    // } while (a <= 5);

    int a = 2;
    int b;
    int c = 1;
    int d;

    printf("Enter Table Count To Print = ");
    scanf("%d", &b);

    printf("Enter Table To Skip = ");
    scanf("%d", &d);

    do
    {
        if (a == d)
        {
            a++;
            continue;
        }
        c = 1;

        do
        {

            printf("%d X %d = %d\n", a, c, c * a);
            c++;
        } while (c <= 10);
        printf("=============\n");
        a++;

    } while (a <= b);

    // int h=0;
    // do
    // {

    //     int m=0;
    //     do
    //     {

    //         int s=0;
    //         do
    //         {

    //             printf("\r%d : %d :%d",h,m,s);

    //             fflush(stdout);
    //             usleep(100);

    //             s++;

    //         }while(s<=59);

    //         m++;

    //     }while(m<=59);

    //     h++;
    // } while (h<=23);

    return 0;
}