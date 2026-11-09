#include <iostream>
#include <string.h>
using namespace std;

#define RECORD 4
#define ROW 3
#define COLOUM 20

int main()
{
    system("cls");
    
    char arr[RECORD][ROW][COLOUM] = {{{"DAD"},
                                      {"MOM"},
                                      {"CAT"}},

                                     {{"SIT"},
                                      {"HELLO"},
                                      {"TUC"}},

                                     {{"DOG"},
                                      {"MUDDASIR"},
                                      {"BAT"}},

                                     {{"DEED"},
                                      {"BED"},
                                      {"FAT"}}};

    int temp;
    int pollindrome = 0;

    for (int i = 0; i < RECORD; i++)
    {
        for (int j = 0; j < ROW; j++)
        {
            pollindrome = 1;
            temp = strlen(arr[i][j]) - 1;

            for (int k = 0; k < strlen(arr[i][j]); k++)
            {
                if (arr[i][j][k] != arr[i][j][temp])
                {
                    pollindrome = 0;
                    break;
                }
                temp--;
            }

            if (pollindrome)
                cout << arr[i][j] << endl;
        }
    }

    return 0;
}