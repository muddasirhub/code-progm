#include <iostream>
using namespace std;

void decimal_to_bin(int digit);
void binary_to_dec(int digit);

int main()
{
    system("cls");

    int digit;

    cout << "Enter Digit = ";
    cin >> digit;

    // decimal_to_bin(digit);
    binary_to_dec(digit);

    return 0;
}

void decimal_to_bin(int digit)
{
    int divide = 1;
    int reminder = 0;

    cout << "BINARY = ";

    while (divide != 0)
    {
        reminder = digit % 2;
        divide = digit / 2;
        digit = digit / 2;

        cout << reminder;
    }
}

void binary_to_dec(int digit)
{
    size_t temp = digit;
    size_t count = 0;

    while (temp != 0)
    {
        temp = temp / 10;

        count++;
    }

    count += 1;

    size_t sum = 0;
    size_t temp_ = 1;

    while (!(temp_ == count))
    {
        temp = digit % 10;  // 1
        digit = digit / 10; // 11

        for (int i = 1; i < temp_; i++)
        {
            temp = temp * 2;
        }

        sum = sum + temp;
        temp_++;
    }
    cout << "Decimal = " << sum;
}