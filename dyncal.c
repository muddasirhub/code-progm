#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    float i = 1;
    float sum = 0;

    while (i != 0)
    {
        scanf("%f", &i);
        sum = sum + i;
    }

    printf("Sum = %f", sum);

    return 0;
}