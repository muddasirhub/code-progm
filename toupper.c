#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void toUpperCase(char ch[]);
void toLowerCase(char ch[]);
void rev(char ch[]);
void substr(char[], int, int);
void rtrim(char ch[]);
void ltrim(char ch[]);
void trim(char ch[]);

int length(char ch[]);
int strcomp(char[], char[]);
int polin(char ch[], char ch2[]);

int main(int c, char *arg[])
{
    system("cls");

    char ch[100];

    printf("Enter Name : ");
    fgets(ch, sizeof(ch), stdin);

    // toUpperCase(ch);
    // printf("%s\n",ch);

    // toLowerCase(ch);
    // printf("%s\n", ch);

    // int x = length(ch);
    // printf("%d\n", x);

    // rtrim(ch);
    // printf("x%sx", ch);

    // ltrim(ch);
    // printf("%s\n", ch);

    trim(ch);
    printf("x%sx", ch);

    // rev(ch);
    // printf("%s\n", ch);

    //  int x = strcomp(arg[1], arg[2]);
    // if (x == 1)
    //     printf("string is same");
    // else
    //     printf("string is not same");

    // int x = polin(arg[1], arg[2]);
    // if (x == 1)
    //     printf("Polindrome");
    // else
    //     printf("Non Polindrome");

    // substr(ch, 1, 3);

    return 0;
}

void toUpperCase(char ch[])
{

    int i = 0;

    while (ch[i] != '\0')
    {
        if (ch[i] >= 'a' && ch[i] <= 'z')
        {
            ch[i] = ch[i] - 32;
        }
        i++;
    }
}

void toLowerCase(char ch[])
{
    int i = 1;

    while (ch[i] != '\0')
    {
        if (ch[i] >= 'A' && ch[i] <= 'Z')
        {
            ch[i] = ch[i] + 32;
        }
        i++;
    }
}

int length(char ch[])
{
    int i = 0;

    while (ch[i] != '\0' && ch[i] != '\n')
        i++;

    return i;
}

void rev(char ch[])
{
    int size = length(ch);

    for (int i = 0; i < size / 2; i++)
    {
        int temp = ch[i];
        ch[i] = ch[size - 1 - i];
        ch[size - 1 - i] = temp;
    }
}

int polin(char ch[], char ch2[])
{
    int size = length(ch) - 1;

    // for (int i = 0; i <= size; i++)
    // {
    //     if (ch[i] != ch[size])
    //     {
    //         return 0;
    //     }
    //     size--;
    // }
    // return 1;

    int i;
    for (i = 0; i < size; i++)
    {
        ch2[i] = ch[size - 1 - i];
    }
    ch[size] = '\0';

    int r = strcomp(ch, ch2);

    return r;
}

void substr(char ch[], int a, int b)
{
    int s = length(ch) - 1;

    if (a + b <= s)
    {
        for (int i = 0; i < b; i++)
        {
            printf("%c", ch[a + i]);
        }
    }
    else
        printf("Invalid Input\n");
}

int strcomp(char ch[], char ch2[])
{
    int a = length(ch) - 1; // 3

    int b = length(ch2) - 1; // 3

    int r = 0;

    if (a == b)
    {
        r = 1;
        for (int l = 0; l < b; l++) // 3
        {
            if (ch[l] != ch2[l])
            {
                r = 0;
                break;
            }
        }
    }
    return r;
}

void rtrim(char ch[])
{
    // int size = length(ch);

    // int i = size - 1;
    // int space = 0;

    // while (ch[i] == ' ')
    // {
    //     space++;
    //     i--;
    // }

    // ch[size - space] = '\0';

    int size = length(ch);

    int i = size - 1;
    int space = 0;

    while (ch[i] == ' ')
    {
        space++;
        i--;
    }

    ch[size - space] = '\0';

    size = length(ch);
}

void ltrim(char ch[])
{
    int a = length(ch);

    int b = 0;

    while (ch[b] == ' ')
        b++;

    for (int i = 0; i < a; i++, b++)
    {
        ch[i] = ch[b];
    }
}

void trim(char ch[])
{
    ltrim(ch);
    rtrim(ch);
}