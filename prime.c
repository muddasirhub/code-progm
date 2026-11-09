#include <stdio.h>
#include <stdlib.h>

void prime();

int main()
{
    system("cls");

    prime();

    printf("\n");

    return 0;
}

void prime()
{
    int num = 7;
    int prime;

    for (int i = 2; i <= num; i++) // 8
    {
        prime = 1;
        for (int b = 2; b < i; b++) // 7
        {
            if (i % b == 0) // 1
            {
                prime = 0;
                break;
            }
        }
        if (prime)
            printf("%d ", i);

        // if (prime)
        //     printf("prime\n");
        // else
        //     printf("non prime\n");
    }
}