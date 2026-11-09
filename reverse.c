#include<stdio.h>
#include<stdlib.h>

int main()
{
    system("clear");
    unsigned int sec;

    printf("Enter Age In Seconds=");
    scanf("%u",&sec);

    int min=sec/60;
    printf("Minutes=%d\n",min);

    int hrs=min/60;
    printf("Hours=%d\n",hrs);
 
    int days=hrs/24;
    printf("Days=%d\n",days);

    int month=days/30;
    printf("Months=%d\n",month);

    int age=days/365;
    printf("Age=%d\n",age);

    return 0;
}