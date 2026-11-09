#include <stdio.h>
#include <stdlib.h>
#define SIZE 3

void swaprow(int arr[SIZE][SIZE])
{
    for (int r = 0; r < SIZE; r++) 
    {
        for (int c = r; c < SIZE; c++) 
        {
             int temp = arr[r][c]; 
            arr[r][c] = arr[c][r];
            arr[c][r] = temp;
        }
    }
}

int main()
{
    system("cls");
    int arr[SIZE][SIZE] = {
        {1, 2, 3},
        {4, 5, 6},
        {14, 15, 16}};

        swaprow(arr);
        for (int r = 0; r < SIZE; r++)
            for (int c = 0; c < SIZE; c++)            
                printf("%d  ", arr[r][c]);
            
            printf("\n");        

    return 0;
}