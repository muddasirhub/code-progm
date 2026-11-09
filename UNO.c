#include <stdio.h>
#include <stdlib.h>

int main()
{

    system("clear");

    char name1[50];
    char name2[50];
    char name3[50];
    char name4[50];
    int s1, s2, s3, s4;

    printf("ENTER PLAYER NAME:");
    scanf(" %[^\n]", name1);
    printf("ENTER YOUR SCORE:");
    scanf("%d", &s1);
    printf("\n");

    printf("ENTER PLAYER NAME:");
    scanf(" %[^\n]", name2);
    printf("ENTER YOUR SCORE:");
    scanf("%d", &s2);
    printf("\n");

    printf("ENTER PLAYER NAME:");
    scanf(" %[^\n]", name3);
    printf("ENTER YOUR SCORE:");
    scanf("%d", &s3);
    printf("\n");

    printf("ENTER PLAYER NAME:");
    scanf(" %[^\n]", name4);
    printf("ENTER YOUR SCORE:");
    scanf("%d", &s4);
    printf("\n");

    system("clear");
    printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
    printf(" UNO MASTER\n");
    printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");

    printf("\t%s\t\t%d\n", name1, s1);
    printf("\t%s\t%d\n", name2, s2);
    printf("\t%s\t\t%d\n", name3, s3);
    printf("\t%s\t\t%d\n", name4, s4);

    printf("===========================================\n");
    return 0;
}