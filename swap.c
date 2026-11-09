#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int arr[3][3] = {{3, 2, 1},
                     {4, 5, 6},
                     {7, 8, 9}};
    
        // for (int i = 0; i < 3; i++)
        // {
        //     int temp = arr[1][i];
        //     arr[1][i] = arr[0][i];
        //     arr[0][i] = temp;
        // }

        for (int i = 0; i < 3; i++)
    {
        int temp = arr[i][1];
        arr[i][1] = arr[i][0];
        arr[i][0] = temp;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int r = 0; r < 3; r++)
        {
            printf("%d  ", arr[i][r]);
        }
        printf("\n");
    }

    return 0;
}