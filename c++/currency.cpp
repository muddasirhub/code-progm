#include <iostream>
using namespace std;

#define SIZE 9

int main()
{
    system("cls");

    size_t Amount;

    cout << "Enter Amount = ";
    cin >> Amount;

    int arr[SIZE] = {5000, 1000, 500, 100, 50, 20, 10, 5, 1};

    int i = 0;

    while (Amount != 0)
    {
        if (Amount >= arr[i])
        {
            cout << arr[i] << " = " << Amount / arr[i] << endl;
            Amount = Amount % arr[i];
        }
        i++;
    }

    return 0;
}