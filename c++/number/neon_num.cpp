#include <iostream>
using namespace std;

int main()
{
    system("cls");

    int digit;

    cout << "Enter Digit = ";
    cin >> digit;

    size_t square = digit * digit;
    int sum = 0;
    int temp;

    while (temp != 0)
    {
        temp = square % 10;
        square = square / 10;

        sum = sum + temp;
    }

    if (sum == digit)
        cout << "Neon Number !" << endl;
    else
        cout << "Non Neon Number !" << endl;

    return 0;
}