#include <stdio.h>
#include <stdlib.h>

int perfect(int a);

int main()
{
    system("clear");

    int n;
    printf("Enter Number = ");
    scanf("%d", &n);

    int x = perfect(n);

    if (x == n)
        printf("Perfect\n");

    else
        printf("Non Perfect\n");

    return 0;
}

int perfect(int n)
{
    int a = 1;
    int sum = 0;

        while (a != n)
        {
            if (n % a == 0)
            {
                sum = sum + a;//6
            }
            a++;
        }
    
    return sum;
}