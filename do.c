#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");

    int a=2;
    int sum;
    int count=0;
    
    do
    {
        printf("%d\n",a);
        sum+=a;
        a+=2;
        count++;
    }while(a<=10);

    printf("===\n%d\n",sum/count);



    return 0;
}