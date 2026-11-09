#include <iostream>
using namespace std;

int main()
{
    system("cls");

    int digit;

    cout << "Enter Digit = ";
    cin >> digit;

    int temp;
    int sum=0;
    int digit_ = digit;

    while (digit_ != 0)
    {
        temp = digit_ % 10;//1
        digit_ = digit_ / 10;//0

        sum = sum + temp;
    }

    if (digit % sum == 0)
        cout << "Harshad Number !" << endl;
    else
        cout << "Non Harshad Number !" << endl;

    return 0;
}