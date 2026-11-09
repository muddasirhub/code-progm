#include <stdio.h>
#include <stdlib.h>

#define SIZE 7

int main()
{
    system("cls");

    int arr[SIZE] = {4,6,3,2,7,8,9};

    for (int a = 0; a < SIZE; a++)
    {
        int prime = 1;

        for (int b = 2; b < arr[a]; b++)
        {
            if (arr[a] % b == 0)
            {
                prime = 0;
                break;
            }
        }
        if (prime)
        {
            printf("%d ", arr[a]);
        }
    }

    return 0;
}