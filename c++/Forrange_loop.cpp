#include <iostream>
using namespace std;

int main()
{
    system("cls");

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};

    for (int elements : arr)
    {
        cout << elements << endl;
    }

    return 0;
}