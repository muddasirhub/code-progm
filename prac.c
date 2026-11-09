#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");

    int t;
    int c = 2;
    int skip;

    printf("Enter Table = ");
    scanf("%d", &t);

    printf("Enter Table To Skip = ");
    scanf("%d", &skip);

    while (c <= t)
    {
        if (c == skip)
        {
            c++;
            continue;
        }

        int l = 1;
        while (l <= 10)
        {
            printf("%d x %d = %d\n", c, l, c * l);
            l++;
        }
        c++;
        printf("==============\n");
    }

    return 0;
}