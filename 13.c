#include<stdio.h>
#include<stdlib.h>

int main ()
{
    system("clear");

    int a;

    printf("Enter Number=");
    scanf("%d",&a);

    long tth=a/10000;//1
    long th=a%1000/100;//1
    long h=a%100/10;//1
    long t=a/10%10;//1
    long o=a%10;//1

    long m = tth==th&&th==h&&h==t&&t==o;

    printf("%s\n",m ?"It Is Polendrome":"It Is Not Polendrome");

    return 0;
}