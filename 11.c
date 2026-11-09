#include<stdio.h>
#include<stdlib.h>

int main()
{
    system("clear");

    int num;

    printf("Enter Number=");
    scanf("%d",&num);

    int a=num/1000;
    int b=num/100%10;
    int c=num/10%10;
    int d=num%10;

    int e=d*1000+c*100+b*10+a;

    printf("%d\n",e);

    return 0;
}
