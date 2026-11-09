#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");

    int a;
    int d;

    printf("Enter Table Count To Print = ");
    scanf("%d", &a);

    printf("Enter Table To Skip = ");
    scanf("%d", &d);

    for (int c = 2; c <= a; c++)
    {
        if (c==d)
            continue;
            
        for (int b = 1; b <= 10; b++)
        {
            printf("%d X %d = %d\n", c, b, c * b);
        }

        printf("===================\n");
    }

    return 0;
}