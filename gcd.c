#include <stdio.h>
#include <stdlib.h>

int A(int a, int b);

int main()
{
    system("clear");

    int a;
    int b;

    printf("Enter Two Number = ");
    scanf("%d%d", &a, &b); // 18 12
    
    printf("%d\n",A(a, b));
    return 0;
}
int A(int a, int b)
{
    int gcd = 0;
    for (int c = 1; c <= a && c <= b; c++)
    {
        if (a % c == 0 && b % c == 0)
        {
            gcd = c; // 6
        }
    }
    return gcd;

}