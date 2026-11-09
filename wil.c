#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");

    int a = 1;
    int b=10;
    int c;

    while (a <= 50)
    {
        printf("%d\n", a);
        if (a == b)
        {
            printf("Press 1 To Continue = ");
            scanf("%d", &c);
            b+=10;
        }

        a++;
    }

    return 0;
}