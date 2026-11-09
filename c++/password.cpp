#include <iostream>
using namespace std;

#define PASSWORD_ 5268

int main()
{
    system("cls");

    int password;
    int i = 0;

    while (i != 3)
    {
        cout << "Enter Password = ";
        cin >> password;

        if (password == PASSWORD_)
        {
            system("cls");
            cout << "Your Welcome !" << endl;
            break;
        }

        else
        {
            if (i != 2)
            {
                system("cls");
                cout << "Invalid Password !" << endl;
                cout<<"Try Again !"<< endl<<endl;
            }

            else
            {
                system("cls");
                cout << "Your Card Is Blocked !" << endl;
                break;
            }
        }
        i++;
    }

    return 0;
}