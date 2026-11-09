#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");

    int num;

    printf("Enter a Number=");
    scanf("%d", &num); //-1 or 1200

    if (num >= 1 && num <= 100)
    {
        printf("%d is between 1-100\n", num);
    }
    
     else if (num >= 100 && num <= 200)
    {
        printf("%d is between 100-200\n", num);
    }

     else if (num >= 200 && num <= 300)
    {
        printf("%d is between 200-300\n", num);
    }
    
     else if (num >= 300 && num <= 400)
    {
        printf("%d is between 300-400\n", num);
    }

     else if (num >= 400 && num <= 500)
    {
        printf("%d is between 400-500\n", num);
    }
    
     else if (num >= 500 && num <= 1000)
    {
        printf("%d is between 500-1000\n", num);
    }
    
    else 
    {
        printf("%d is not between 1-1000\n",num);
    }

    return 0;
}