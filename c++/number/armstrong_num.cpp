#include <iostream>
using namespace std;

int main()
{
    system("cls");

    int digit;

    cout << "Enter Digit = ";
    cin >> digit;

    int power = 0;
    int temp = digit;

    while (temp != 0)
    {
        temp = temp / 10;

        power++;
    }

    int sum = 0;
    int digit_ = digit;
    int multiply = 1;

    while (digit_ != 0)
    {
        temp = digit_ % 10;
        digit_ = digit_ / 10;
        multiply = 1;

        for (int i = 1; i <= power; i++)
            multiply = multiply * temp;

        sum = sum + multiply;
    }

    if (sum == digit)
        cout << "Armstrong Number !" << endl;
    else
        cout << "Non Armstrong Number !" << endl;

    return 0;
}