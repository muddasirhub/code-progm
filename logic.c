#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");

    int a, b = 1;

    for (a = 1; a <= 15; a++)
    {
        printf("%d\n", b);

        b = a + a;
    }

    return 0;
}