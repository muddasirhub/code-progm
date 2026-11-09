#include <stdio.h>
#include <stdlib.h>

void num();

int a;
int b;
int c;

int main()
{
    system("clear");

    printf("Enter Number = ");
    scanf("%d%d", &a, &b);

    num();

    printf("%d\n",c);

    return 0;
}

void num()
{
    c=a+b; 
}