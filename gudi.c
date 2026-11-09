#include<stdio.h>
#include<stdlib.h>

int main()
{
    system ("clear");
    
    int a = 7; 
    int b = 5;

    a = a + b;
    b = a - b;
    a = a - b;

    printf("a=%d\n",a);

    printf("b=%d\n",b);

    return 0;
}