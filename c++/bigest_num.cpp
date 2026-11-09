#include <iostream>

using namespace std;

int main()
{
    system("cls");

    int arr[] = {4, 7, 2, 8, 0, 1, -1, 56, 72, 11};
    int big;

    big = arr[0];

    for (int i = 1; i < sizeof(arr) / 4; i++)
    {
        if (big < arr[i])
        {
            big = arr[i];
        }
    }

    cout << big << endl;

    return 0;
}