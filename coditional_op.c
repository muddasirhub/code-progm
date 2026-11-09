#include<stdio.h>
#include<stdlib.h>

int main()
{
    system("clear");

    int a;

    printf("Enter Number=");
    scanf("%d",&a);

    printf("%s\n",a>=0 ? "The Number Is Positive":"The Number Is Negative");

    return 0;
}