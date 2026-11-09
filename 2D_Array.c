#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main()
{
    system("cls");

    int arr[4][SIZE] = {{10, 20, 30, 40, 50}, {1, 2, 3, 4, 5}, {8, 7, 6, 5, 3}, {4, 2, 1, 0, 2}};

    int sumA = 0;
    float avg =0;

    for (int i = 0; i < 4; i++)
    {
        int sum = 0;
        avg = 0;

        for (int j = 0; j < SIZE; j++)
        {
            printf("%d\t", arr[i][j]);
            sum = sum + arr[i][j];
        }
        printf("%d / ", sum);
        avg = sum / SIZE;
        printf("%.2f", (float)avg);
        printf("\n");
        sumA = sumA + sum;
    }

    printf("%d\n", sumA);
    printf("%.2f\n", (float)sumA / 4);

    return 0;
}