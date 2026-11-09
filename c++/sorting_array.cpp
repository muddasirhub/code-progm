#include <iostream>

#define SIZE 10

using namespace std;

int main()
{
    system("cls");

    int arr[SIZE] = {4, 3, 1, 10, 8, 2, 5, 9, 6, 7};

    // for (int i = 0; i < SIZE - 1; i++)
    // {
    //     for (int j = i + 1; j < SIZE; j++)
    //     {
    //         if (arr[i] > arr[j])
    //         {
    //             int temp = arr[i];
    //             arr[i] = arr[j];
    //             arr[j] = temp;
    //         }
    //     }
    // }

    for (int i = 0; i < SIZE - 1; i++)
    {
        for (int j = 0; j < SIZE - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int a = 0; a < SIZE; a++)
    {
        cout << arr[a] << " ";
    }

    return 0;
}