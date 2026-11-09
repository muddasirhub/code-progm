#include <stdio.h>
#include <stdlib.h>

void prime(int lim);

int main()
{
    system("clear");

    int lim;

    printf("Enter Limit = ");
    scanf("%d",&lim);

    
    prime(lim);

    printf("\n");

    return 0;
}
void prime(int lim)
{
    int prim=1;
    prim=1;

    for (int i = 2; i <= lim; i++)
    {
        prim = 1;
        for (int b = 2; b < i; b++)
        {
            if (i % b == 0)
            {
                prim = 0;
                break;
            }
        }
        if (prim)
            printf("%d ", i);
    }
}