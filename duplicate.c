#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int arr[] = {1, 4, 1, 3,2,1,4};

    for (int x = 0; x < sizeof(arr) / 4; x++)
    {
        int i = 1;
        for (int w = 0; w < x; w++)
        {
            if (arr[x] == arr[w])
            {
                i = 0;
                break;
            }
        }
        if (i == 0)
            continue;

        int r = 0;

        for (int l = 0; l < sizeof(arr) / 4; l++)
        {
            if (arr[x] == arr[l])
                r++;
        }

        if (r != 1)
        {
            printf("%d = %d\n", arr[x], r);
        }
    }
    return 0;
}