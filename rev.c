#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

void show(int arr[])
{
    for (int i = 0; i < SIZE / 2; i++)
    {
        int temp = arr[i];

        arr[i] = arr[SIZE - 1 - i];

        arr[SIZE - 1 - i] = temp;
    }
}

int main()
{
    system("cls");

    int arr[SIZE] = {4, 3, 1, 6, 7, 8, 9, 0, 11, 12};

    show(arr);

    int i = 0;
    // // for(int a=7;4<=a;a--)
    // for (int a = SIZE - 1; a >= SIZE / 2; a--)
    // {
    //     int temp = arr[i];

    //     arr[i] = arr[a];
    //     arr[a] = temp;

    //     i++;
    // }

    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
