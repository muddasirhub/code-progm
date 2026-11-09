#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");

    int a = 1;
    int b = 5;
    int i = 1;

    while (a <= 5)
    {
        b = 5;

        while (b >= a)
        {
            printf(" ");
            b--;
        }

        i=1;

        while (i <= a)
        {
            printf("x ");
            i++;
        }
        
        printf("\n");
        a++;
    }
    return 0;
}