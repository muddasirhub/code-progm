#include<stdio.h>
#include<stdlib.h>

int main()
{
    system("clear");

    int Amount;

    printf("Enter Amount=");
    scanf("%d",&Amount);

    int a=Amount%5000;
    printf("5000=%d\n",Amount/5000);

    int b=a%1000;
    printf("1000=%d\n",a/1000);

    int c=b%500;
    printf("500=%d\n",b/500);

    int d=c%100;
    printf("100=%d\n",c/100);

    int e=d%50;
    printf("50=%d\n",d/50);

    int f=e%20;
    printf("20=%d\n",e/20);

    int g=f%10;
    printf("10=%d\n",f/10);

    int h=g%5;
    printf("5=%d\n",g/5);

    int i=h%1;
    printf("1=%d\n",h/1);

    return 0;
}