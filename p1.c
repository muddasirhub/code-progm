#include <stdio.h>
#include <stdlib.h>

int b = 2;
int num(int a);

int main()
{
    system("clear");

    int a = 2;

    num(a);

    return 0;
}
int num(int a)
{

    if (a < 10)
    {

        int prime = 1;
        if (b < a)
        {
            if (a % b == 0)
            {
                prime = 0;
            }
            else if (a % b != 0)
            {
                b++; // 3
                num(a);
            }
        }

        b = 2;

        if (prime)
            printf("%d\n", a);

        a++; // 10
    }

    if(a!=10)
        num(a);

    return a;

}