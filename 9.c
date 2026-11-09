#include<stdio.h>
#include<stdlib.h>

int main()
{
    system("clear");

    int num;

    printf("Enter Number=");
    scanf("%d",&num);


    int a = num / 10;
    int b = num % 10;
    
    int c = b * 10 + a;

    printf("%d\n",c);
    
    return 0;
}