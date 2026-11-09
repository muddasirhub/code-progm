#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    system("cls");

    string str;

    cout << "Enter String : ";
    cin >> str;

    string temp = str;
    char ch;

    for (int i = 0, j = str.length() - 1; i < str.length(); i++, j--)
    {
        ch = str[i];
        str[j] = str[i];
        str[j] = ch;
    }

    if (str == temp)
        cout << "Polindrome";

    else
        cout << "Non Polindrome";

    return 0;
}