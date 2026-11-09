#include <iostream>
using namespace std;

void TB_to_Bits(size_t TB);
void Bits_to_TB(size_t Bits);

int main()
{
    system("cls");

    // size_t TB;

    // cout << "Enter TB = ";
    // cin >> TB;

    // TB_to_Bits(TB);

    size_t Bits;

    cout << "Enter Bits = ";
    cin >> Bits;

    Bits_to_TB(Bits);

    return 0;
}

void TB_to_Bits(size_t TB)
{
    size_t GB = TB * 1024;
    size_t MB = GB * 1024;
    size_t KB = MB * 1024;
    size_t Bytes = KB * 1024;
    size_t bits = Bytes * 1024;

    cout << "GB = " << GB << endl;
    cout << "MB = " << MB << endl;
    cout << "KB = " << KB << endl;
    cout << "Bytes = " << Bytes << endl;
    cout << "Bits = " << bits << endl;
}

void Bits_to_TB(size_t Bits)
{
    size_t Bytes = Bits / 1024;
    size_t KB = Bytes / 1024;
    size_t MB = KB / 1024;
    size_t GB = MB / 1024;
    size_t TB = GB / 1024;

    cout << "Bytes = " << Bytes << endl;
    cout << "KB = " << KB << endl;
    cout << "MB = " << MB << endl;
    cout << "GB = " << GB << endl;
    cout << "TB = " << TB << endl;
}