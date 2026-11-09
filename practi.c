#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void task(char *arg[])
{
    printf("%s", arg[1]);
}
int main(int c, char *arg[])
{
    system("cls");

    // char str[][20] = {
    //     {"Hassan Ali"},
    //     {"GM"},
    //     {"MM"}};

    char *str[3];

    // char *str[3] = {
    //     "Hassan Ali",
    //     "GM",
    //     "MM"};

    str[0] = malloc(20);
    str[1] = malloc(3);
    str[2] = malloc(3);

    strcpy(str[0], "Hassan Ali");
    strcpy(str[1], "GM");
    strcpy(str[2], "MM");

    // printf("%s\n",str[0]);
    // printf("%s\n",str[1]);
    // printf("%s\n",str[2]);

    task(str);

    return 0;
}
