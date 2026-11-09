#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char replace(char ch[], char ch2[], char ch3[]);
int main()
{
    system("cls");

    char ch[] = {"HASSAN"};
    char ch2[] = {"HAS"};
    char ch3[] = {"X"};

    replace(ch, ch2, ch3);

    printf("%s", ch);

    return 0;
}

char replace(char ch[], char ch2[], char ch3[])
{
    int len = strlen(ch);
    int len2 = strlen(ch2);
    int len3 = strlen(ch3);

    int v = 0;
    int found = 0;

    for (int i = 0; i < len; i++)
    {
        found = 0;
        if (ch[i] == ch2[0])
        {
            for (int g = 0; g < len2; g++)
            {
                if (ch[i + g] == ch2[g])
                {
                    found = 1;
                }
                else
                {
                    found = 0;
                    break;
                }
            }
        }
        if (found)
        {
            if (len2 >= len3)
            {
                for (int l = 0; l < len3; l++)
                {
                    ch[i + l] = ch3[l];
                }
                i = i + len2;
                v = v + 1;
            }
        }
        ch[v] = ch[i];
        v++;
    }
}