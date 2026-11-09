#include <iostream>
using namespace std;

int main()
{
    system("cls");

    int arr[] = {2, 4, 5, 6, 8, 9, 11};

    int temp;

    for (int i = 0; i < sizeof(arr) / 4; i++)
    {
        cout << arr[i]<<" ";
    }

    return 0;
}