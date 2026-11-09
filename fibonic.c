#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int f = 1;
    int s = 0;

    for (int i = 0; i <= 10; i++)
    {
        printf("%d ", f);
        int temp = f;
        f = temp + s;
        s = temp;
    }

    return 0;
}