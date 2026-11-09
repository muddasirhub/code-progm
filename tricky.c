#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int arr[3][3] = {{3, 2, 1}, {4, 5, 6}, {7, 8, 9}};

    int sum = 0;
    int sum2 = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int p = i; p <= i; p++)
        {
            sum = sum + arr[i][p];
        }

        for (int q = 3 -i- 1; q >= 0; q--)
        {
            sum2 = sum2 + arr[i][q];
            break;
        }
    }
    printf("%d\n", sum);
    printf("%d\n", sum2);

    return 0;
}