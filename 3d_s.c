#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int arr[2][2][3] = {
        {{13, 21, 39},
         {9, 3, 26}},
        {{11, 49, 139},
         {93, 36, 26}}};

    int small=arr[0][0][0];

    for (int i = 0; i < 2; i++)
    {
        for (int a = 0; a < 2; a++)
        {
            for (int b = 0; b < 3; b++)
            {
                if(small>arr[i][a][b])
                {
                    small=arr[i][a][b];
                }
            }
        }
    }

    printf("%d",small);

    return 0;
}