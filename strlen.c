#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100

int word_count(char ch[]);
void rev(char ch[], int len);

int main()
{
    system("cls");

    char ch[3][SIZE] = {{"HASSAN ALI"}, {"GHULAM MUJTUBA"}, {"MUHAMMAD MUDDASIR"}};

    for (int r = 0; r < 3; r++)
    {
        int len = strlen(ch[r]);
        int word = word_count(ch[r]);

        printf("%s", ch[r]);

        rev(ch[r], len);

        printf(" = %d = %d = %s", len, word, ch[r]);

        printf("\n");
    }

    return 0;
}
int word_count(char ch[])
{
    int w = 1;
    int u = 0;

    while (ch[u] != '\0')
    {
        if (ch[u] == ' ')
        {
            w++;
        }
        u++;
    }
    return w;
}
void rev(char ch[], int len)
{
    for (int i = 0; i < len / 2; i++)
    {
        char temp = ch[i];
        ch[i] = ch[len - 1 - i];
        ch[len - 1 - i] = temp;
    }
}