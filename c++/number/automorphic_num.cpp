#include <iostream>
using namespace std;

void Simple_logic(int digit);
void Rocket_logic(int digit);

int main()
{
    system("cls");

    size_t digit;

    cout << "Enter Digit = ";
    cin >> digit;

    // Rocket_logic(digit);
    Simple_logic(digit);

    return 0;
}

void Simple_logic(int digit)
{
    size_t square = digit * digit;
    // int count = 0;
    size_t temp = digit;

    size_t square_of_10 = 1; // 1

    while (temp != 0)
    {
        square_of_10 = square_of_10 * 10; // 1000

        temp = temp / 10;

        // count++;
    }

    // for (int i = 1; i <= count; i++) // 5 3
    // {
    //     square_of_10 = square_of_10 * 10; // 1000
    // }

    square = square % square_of_10;

    if (square == digit)
        cout << "Automorphhic Number !";

    else
        cout << "Non Automorphhic Number !";
}

void Rocket_logic(int digit)
{
    int temp = digit;
    size_t count = 0;

    while (temp != 0)
    {
        temp = temp / 10;

        count++;
    }

    size_t square = digit * digit;
    int temp_;
    size_t automorphic = 0;

    while (digit != 0)
    {
        temp = digit % 10;
        digit = digit / 10;
        temp_ = square % 10;
        square = square / 10;

        if (temp == temp_)
            automorphic++;
    }

    if (automorphic == count)
        cout << "Automorphhic Number !";

    else
        cout << "Non Automorphhic Number !";
}