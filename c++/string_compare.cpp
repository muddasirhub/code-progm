#include <iostream>
using namespace std;

void ToUpper_case(string input);

int main()
{
    system("cls");

    string input1, input2;

    cout << "Enter 1st String = ";
    getline(std::cin, input1);

    cout << "Enter 2nd String = ";
    getline(std::cin, input2);

    int m = 0;

    if (input1.length() == input2.length())
    {
        m = 1;

        for (int i = 0; i < input1.length(); i++)
        {
            if (input1[i] >= 'A' && input1[i] <= 'Z')
                input1[i] = char(input1[i] + 32);

            if (input2[i] >= 'A' && input2[i] <= 'Z')
                input2[i] = char(input2[i] + 32);

            if (input1[i] != input2[i])
            {
                m = 0;
                break;
            }           
        }
    }

    if (m == 1)
        cout << "STRING MATCH !" << endl;

    else
        cout << "STRING NOT MATCH !" << endl;

    // ToUpper_case(input);

    return 0;
}

void ToUpper_case(string input)
{
    string str;

    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] >= 'a' && input[i] <= 'z')
            str = str + char(input[i] - 32);

        else
            str = str + input[i];
    }

    cout << str;
}