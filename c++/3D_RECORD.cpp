#include <iostream>
#include <string.h>
using namespace std;

void strcopy(char arr[], char arr_[]);
void sort2DArray();

#define RECORD 12
#define ROW 5
#define COLOUM 10

int main()
{
    system("cls");

    // sort2DArray();

    char arr[RECORD][ROW][COLOUM] = {

        {{"Ali"},
         {"20"},
         {"8"},
         {"A"},
         {"Karachi"}},

        {{"Ali"},
         {"20"},
         {"8"},
         {"A"},
         {"Hyderabad"}},

        {{"Ahmed"},
         {"220"},
         {"8"},
         {"A"},
         {"Sakkar"}},

        {{"Xain"},
         {"120"},
         {"8"},
         {"B"},
         {"Karachi"}},
        {{"Ali"},
         {"20"},
         {"8"},
         {"A"},
         {"Karachi"}},

        {{"Ali"},
         {"20"},
         {"8"},
         {"A"},
         {"Hyderabad"}},

        {{"Ahmed"},
         {"220"},
         {"8"},
         {"A"},
         {"Santiago"}},

        {{"Xain"},
         {"120"},
         {"8"},
         {"B"},
         {"Chicago"}},

        {{"Ali"},
         {"20"},
         {"8"},
         {"A"},
         {"Thata"}},

        {{"Ali"},
         {"20"},
         {"8"},
         {"A"},
         {"Faislabad"}},

        {{"Ahmed"},
         {"220"},
         {"8"},
         {"A"},
         {"Islamabad"}},

        {{"Xain"},
         {"120"},
         {"8"},
         {"B"},
         {"London"}}

    };
    // cout << "============================================================" << endl;
    // cout << "NAME        ROLNo         CLASS        GRADE        CITY" << endl;
    // cout << "============================================================" << endl;

    // for (int i = 0; i < RECORD; i++)
    // {
    //     for (int j = 0; j < ROW; j++)
    //     {
    //         cout << arr[i][j];
    //         int lenght = strlen(arr[i][j]);
    //         lenght = 13 - lenght;

    //         for (int k = 0; k < lenght; k++)
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl
    //          << "------------------------------------------------------------" << endl;
    // }

    string city;

    cout << "ENTER CITY TO SEARCH : ";
    cin >> city;

    int f = 0;
    int message = 1;

    system("cls");

    for (int i = 0; i < RECORD; i++)
    {
        f = 0;
        for (int j = 0; j < ROW; j++)
        {
            if (arr[i][4] == city)
            {
                if (message)
                {
                    cout << "===========================================================" << endl;
                    cout << "NAME        ROLNo         CLASS        GRADE        CITY" << endl;
                    cout << "===========================================================" << endl;
                }
                
                cout << arr[i][j];
                int lenght = strlen(arr[i][j]);
                lenght = 13 - lenght;

                for (int k = 0; k < lenght; k++)
                {
                    cout << " ";
                }
                message = 0;
                f = 1;
            }
        }

        if (f)
            cout << endl
                 << "------------------------------------------------------------" << endl;
    }

    if (message)
    {
        system("cls");
        cout << "RECORD NOT FOUND !" << endl;
    }

    return 0;
}