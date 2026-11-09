#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");

    int a;

    printf("Enter Password = ");
    scanf("%d", &a);
    
    if(a!=123)
    {
    do
    {
        printf("Invalid Password\n");
        printf("Enter Password = ");
        scanf("%d", &a);

    } while (a != 123);
}

    printf("Welcome\n");

    return 0;
}