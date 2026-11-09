#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");

    long a;

    printf("Enter Bits:");
    scanf("%ld", &a);

    printf("Bytes=%ld\n", a / 8);
    printf("KB=%ld\n", a / 8 / 1024);
    printf("MB=%ld\n", a / 8 / 1024 / 1024);
    printf("GB=%ld\n", a / 8 / 1024 / 1024 / 1024);
    printf("TB=%ld\n", a / 8 / 1024 / 1024 / 1024 / 1024);

    return 0;
}