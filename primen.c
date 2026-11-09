#include <stdio.h>
#include <stdlib.h>

int prime(int a);

int main()
{
    system("clear");

    int prim;

    printf("Enter Number = ");
    scanf("%d", &prim);

    for (int a = 2; a <= prim; a++)
    {

        int r = prime(a);

        if (r)
        {
            printf("%d\n", a);
        }
    }

    return 0;
}
int prime(int prim)
{
    int a;
    for (a = 2; a < prim; a++)
    {
        if (prim % a == 0)
        {
            return 0;
        }
    }
    return 1;
}