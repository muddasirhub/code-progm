#include<stdio.h>
#include<stdlib.h>

int main()
{
    system("clear");

    float radious;

    printf("Enter Radius=");//3.14159*radious*radious
    scanf("%f",&radious);

    const float _PIE =3.14159;

    printf("Area Of Circle=%.2f\n",_PIE*radious*radious);

    return 0;
}