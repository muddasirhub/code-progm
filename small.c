#include<stdio.h>
#include<stdlib.h>

int main()

{
    system("clear");

    int number;

    printf("Enter Number = ");
    scanf("%d",&number);

    int a = number / 100;
    int b = number / 10 % 10;
    int c = number % 10;

    if(a <= b && a <= c)
    {
        printf("smaller value is %d\n",a);
    }
    if(b <= a && b <= c)
    {
        printf("smaller value is %d\n",b);
    }
    if(c <= a && c <= b)
    {
        printf("smaller value is %d\n",c);
    }
    return 0;
}