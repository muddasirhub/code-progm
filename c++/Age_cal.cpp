#include <iostream>
using namespace std;

int main()
{
    system("cls");

    int Birthyear;

    cout << "Enter Birthyear = ";
    cin >> Birthyear;

    int current_year = 2026;

    size_t age = current_year - Birthyear;
    size_t month = age * 12;
    size_t days = age * 365;
    size_t week = month * 4;
    size_t hours = days * 24;
    size_t minutes = hours * 60;
    size_t seconds = minutes * 60;

    cout << "Age = " << age << endl;
    cout << "Month = " << month << endl;
    cout << "Days = " << days << endl;
    cout << "Week = " << week << endl;
    cout << "Hours = " << hours << endl;
    cout << "Minutes = " << minutes << endl;
    cout << "Seconds = " << seconds << endl;

    return 0;
}