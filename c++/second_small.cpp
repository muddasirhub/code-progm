#include <iostream>

using namespace std;

void secSmall()
{
    int arr[] = {-2, -1, 11, 2, 3, 4, 5, 0};

    int sum = 0;
    int index = 0;

    int small = arr[0];

    for (int i = 1; i < sizeof(arr) / 4; i++)
    {
        if (small > arr[i])
        {
            index = i;
            small = arr[i];
        }
        sum = sum + arr[i];
    }

    arr[index] = sum;
    small = arr[0];

    for (int i = 1; i < sizeof(arr) / 4; i++)
    {
        if (small > arr[i])
        {
            small = arr[i];
        }
    }

    cout << small << endl;
}
int main()
{
    system("cls");

    int arr[] = {1, 2, 4, 5};

    int small = arr[0];
    int secondSmall = arr[0];

    for (int i = 0; i < 4; i++)
    {
        if (arr[i] < small)
        {
            small = arr[i];
            secondSmall = arr[i];
        }
        else if (arr[i] > small && arr[i] < secondSmall)
            secondSmall = arr[i];
    }

    cout << secondSmall;

    return 0;
}