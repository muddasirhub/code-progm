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
         {"Sakkar"}},

        {{"Xain"},
         {"120"},
         {"8"},
         {"B"},
         {"Karachi"}}

    };
    return 0;
}

void strcopy(char destinition[], char source[])
{
    int size = strlen(source);
    int i;

    for (i = 0; i < size; i++)
        destinition[i] = source[i];

    destinition[i] = '\0';
}

void sort2DArray()
{
    char arr[ROW][COLOUM] = {
        {"Zohaib"},
        {"Xeshan"},
        {"Ali"},
        {"Babar"},
        {"Tauseef"}};

    char temp[COLOUM];

    for (int r = 0; r < ROW - 1; r++)
    {
        for (int j = 0; j < ROW - 1; j++)
        {
            if (arr[j][0] > arr[j + 1][0])
            {
                strcopy(temp, arr[j]);
                strcopy(arr[j], arr[j + 1]);
                strcopy(arr[j + 1], temp);
            }
        }
    }

    for (auto str : arr)
    {
        cout << str << endl;
    }
}