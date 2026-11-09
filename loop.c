#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");

    int a , b;

    printf("Enter Table = ");
    scanf("%d", &b);

    int loop;

    printf("Enter table limit = ");
    scanf("%d", &loop);

    for (a = 1; a <= loop; a++)
    {

        printf("%d X %d = %d\n", b, a, a * b);

    }

    return 0;
}