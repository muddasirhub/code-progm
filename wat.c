#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
    system("cls");

    for(int h=0;h<=23;h++)
    {
        for(int m=0;m<=59;m++)
        {
            for(int s=0;s<=59;s++)
            {
                printf("\r%d : %d : %d",h,m,s);
                fflush(stdout);
                sleep(1);
            }
        }
    }

    return 0;
}