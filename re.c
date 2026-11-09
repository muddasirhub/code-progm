#include <stdio.h>
#include <stdlib.h>

int num(int currentnumber);

int main()
{
    system("clear");
   
    int currentnumber;

    printf("Enter Number To Reverse = ");
    scanf("%d", &currentnumber); // 236

    int result = num(currentnumber);

    printf("reverse num = %d\n", result);

    return 0;
}

int num(int currentnumber) // 236
{
    int result = 0;
    while (currentnumber != 0)
    {

        int rem = currentnumber % 10;       // 2
        result = result * 10 + rem;         // 632
        currentnumber = currentnumber / 10; // 0
    }
    return result; // 632
}