#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    system("cls");

    int h = 0;

    while (h <= 24)
    {
        int m = 0;
        
        while (m <= 59)
        {
            int s = 0;

            while (s <= 59)
            {
                printf("\r%d : %d : %d", h, m, s);
                fflush(stdout);
                sleep(1);
                s++;
            }
            m++;
        }
        h++;
    }
    
    printf("\n");

    return 0;
}