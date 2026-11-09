#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int arr[2][2][3] = {
        {{1, 2, 3},
         {1, 2, 3}},
        {{1, 2, 3},
         {1, 2, 3}}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int n = 0; n < 3; n++)
            {
                printf("%d ", arr[i][j][n]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}