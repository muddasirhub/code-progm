#include <iostream>
using namespace std;

int main()
{
    system("cls");

    int digit;

    cout << "Enter Digit = ";
    cin >> digit;

    int temp;
    int sum = 0;
    int mult = 1;

    while (digit != 0)
    {
        temp = digit % 10;
        digit = digit / 10;

        sum = sum + temp;
        mult = mult * temp;
    }

    if (mult == sum)
        cout << "Spy Number !" << endl;
    else
        cout << "Non Spy Number !" << endl;

    return 0;
}