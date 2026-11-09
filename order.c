#include <stdio.h>
#include <stdlib.h>
#define SIZE 4

int main()
{
    system("cls");

    int arr[SIZE] = {13, 6, 10, 2};

    for (int s = 0; s < SIZE - 1; s++)
    {
        for (int a = 0; a < SIZE - 1; a++)
        {
            if (arr[a] > arr[SIZE - 3 + a])
            {
                int temp = arr[a];

                arr[a] = arr[SIZE - 3 + a];

                arr[SIZE - 3  + a] = temp;
            }
        }
    }

    for (int r = 0; r < SIZE; r++)
    {
        printf("%d ", arr[r]);
    }

    return 0;
}