#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");
    int num;

    printf("Enter Number = ");
    scanf("%d", &num); 

    if (num == 0) 
    {
        printf("you input a 0\n");
    }
    else
    {
        if (num > -1) 
        {
            if (num % 5 == 0) 
                printf("%d is divided by 5 \n", num);
            else
                printf("%d is not divided by 5 \n", num);
        }
        else
        {
            printf("invalid number\n");
        }
    }

       return 0;
}