#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");

    // int a=2;
    // int sum;

    // while(a<=10)
    // {
    //     printf("%d\n",a);
    //     sum=sum + a;
    //     a+=2;
    // }

    // printf("===\n%d\n",sum);

    int a = 1;
    int sum =0;
    int avg;
    int oddCount=0;

    while (a <= 15)
    {
        printf("%d\n", a);  
        sum = (float)sum + a;
        a += 2;

        oddCount++;//3
    }
    avg = sum / oddCount;

    printf("===\n%d\n",sum);
    printf("===\n%.1f\n",(float) avg);

    return 0;
}