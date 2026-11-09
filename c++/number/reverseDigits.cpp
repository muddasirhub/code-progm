#include <iostream>
using namespace std;

int main()
{
    system("cls");

    int digit;

    cout << "Enter Digit = ";
    cin >> digit;

    int temp = 1;
    size_t reverse = 0;

    while (digit != 0)
    {
        temp = digit % 10;
        digit = digit / 10;

        reverse = reverse * 10 + temp;
    }

    cout << "Revrse = " << reverse << endl;

    return 0;
}