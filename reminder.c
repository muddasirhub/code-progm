#include<stdio.h>
#include<stdlib.h>

int main()
{
const int _INCHES;
int feet;

system("clear");
printf("Enter Inches=");
scanf("%d",&feet);
printf("FEET=%d,INCHES=%d\n",feet/_INCHES,feet%_INCHES);

return 0;
}