#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    system("cls");

    // char str[50] = "hassan ali khaskheli";

    const char *str = "Hassan Ali Khaskheli";
    printf("%s\n", str);

    char *name = malloc(50);

    printf("Enter Name ");
    fgets(name, 50, stdin);

    name[strlen(name)-1] = '\0';

    printf("%s\n", name);

    free(name);
    name = NULL;
    
    return 0;
}