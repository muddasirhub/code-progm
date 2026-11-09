#include<stdio.h>
#include<stdlib.h>

int main()
{
    system("clear");

    int days;
    const int _HOURS     =   24;
    const int _MINUTES   =   60;
    const int _SECONDS   =   60;
    const int _MILLISECONDS= 1000;

    
    printf("Enter Days = ");
    scanf("%d",&days);

    int a = days*_HOURS;
    int b = a*_MINUTES;
    int c = b*_SECONDS;
    int d = c*_MILLISECONDS;

    printf("Hours = %d\n",a);
    printf("Minutes = %d\n",b);
    printf("Seconds = %d\n",c);
    printf("Milliseconds = %d\n",d);
    return 0;
}
