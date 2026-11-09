#include <iostream>

using namespace std;

int main()
{
    system("cls");

    size_t table;

    cout << "Enter Table = ";
    cin >> table;

    for (int i = 1; i <= 10; i++)
    {
        cout << table << " x " << i << " = " << table * i << endl;
    }

    return 0;
}