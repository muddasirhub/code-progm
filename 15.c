#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    system("clear");

    float area;
    const float PI = 3.14159;

    printf("Enter Area Of Circle=");
    scanf("%f",&area);

     double r=sqrt(area / PI);

    printf("Radius Of The Circle = %.2f\n", r);

    return 0;
}