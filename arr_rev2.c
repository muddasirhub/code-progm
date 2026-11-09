#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main()
{
    system("cls");

    int arr[SIZE] = {1, 2, 3,4 ,5, 6, 7, 8, 9, 10};

    for (int i = 0; i < SIZE / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[SIZE - 1 - i];
        arr[SIZE - 1 - i] = temp;
    }

    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}