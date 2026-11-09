#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    system("clear");
    const int _DELAY = 10000;

    for (int a = 1; a <= 4; a++)
    {

        for (int i = 1; i <= 140; i++)
        {
            printf("\033[1;%dH", i);
            printf("Hello");
            fflush(stdout);
            usleep(_DELAY);
            printf("\033[1;%dH", i);
            printf("     ");
        }

        for (int i = 1; i <= 42; i++)
        {
            printf("\033[%d;140H", i);
            printf("Hello");
            fflush(stdout);
            usleep(_DELAY);
            printf("\033[%d;140H", i);
            printf("     ");
        }

        for (int i = 140; i >= 1; i--)
        {
            printf("\033[42;%dH", i);
            printf("Hello");
            fflush(stdout);
            usleep(_DELAY);
            printf("\033[42;%dH", i);
            printf("     ");
        }
        for (int i = 42; i >= 1; i--)
        {
            printf("\033[%d;1H", i);
            printf("Hello");
            fflush(stdout);
            usleep(_DELAY);
            printf("\033[%d;1H", i);
            printf("     ");
        }
    }

    return 0;
}