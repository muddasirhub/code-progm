#include<stdio.h>
#include<stdlib.h>

int spy(int a);

int main()
{
    system("cls");

    int n;
    printf("Enter Number = ");
    scanf("%d",&n);

    int x=spy(n);

    if(x)
    printf("Spy\n");

    else
    printf("Non Spy\n");

    return 0;
}

int spy(int n)
{
    int a=0;
    int b=1;

    while(n!=0)
    {
        int rem=n%10;
        n=n/10;

        a=a+rem;
        b=b*rem;
    }

    if(a==b)
    return 1;

    else
    return 0;
}