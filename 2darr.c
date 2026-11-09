#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int arr[3][3] = {{2, 1, 1}, {1, 1, 1}, {1, 1, 1}};
    int arr2[3][3] = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}};

    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int r = 0; r < 3; r++)
        {
            printf("%d  ", arr[i][r]);
        }
        printf("+\t");
        for (int b = 0; b < 3; b++)
        {
            printf("%d  ", arr2[i][b]);
        }
        printf("=\t");
        for (int g = 0; g < 3; g++)
        {
            printf("%d\t", arr[i][g] + arr2[i][g]);
        }
        printf("\n");
    }

    return 0;
}