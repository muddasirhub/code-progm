#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a;
    int b;
    int c;
    int d;
    
    system("clear");

    printf("ENTER ROOM RENT PER NIGHT=");
    scanf("%d",&a);

    printf("ENTER NO. OF NIGHT YOU LIVE=");
    scanf("%d",&b);

    printf("ENTER FOOD BILL=");
    scanf("%d",&c);

    printf("ENTER NO. OF PERSON=");
    scanf("%d",&d);

    printf("TOTAL HOTEL BILL=%d\n",a*b);
    printf("TOTAL FOOD BILL=%d\n",c);
    printf("TOTAL EXPENSE=%d\n",a*b+c);
    printf("PER HEAD=%d\n",(a*b+c)/d); //9000 + 1000

    return 0;
}