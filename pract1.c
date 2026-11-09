#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    char w1[5], w2[10], eq;

    int a, b, c;

    FILE *fp = fopen("d:\\myprog.txt", "r");

    if (fp == NULL)
    {
        printf("Unable To Open File\n");
    }

    c = a + b;

    while (fscanf(fp, "%s %s %d %d %c %d", w1, w2, &a, &b, &eq, &c) == 6)
    {
        printf("%s %s %d %d %c %d\n", w1, w2, a, b, eq, c);
    }

    fclose(fp);

    return 0;
}