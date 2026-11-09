#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");

    int choice;
    int QTY;
    int eos;
    int shipping_charges;

    printf("Online Shopping\n");
    printf("================\n");
    printf("1.Charging Fan RS.1200/=\n");
    printf("2.Digital Magnifier RS.8000/=\n");
    printf("3.Drone RS.9000/=\n");
    printf("4.Smart Watch RS.15000/=\n");

    printf("Enter Your Choice=");
    scanf("%d", &choice); // 1

    if (choice >= 5)    
        return 0;
    

    printf("QTY? ");
    scanf("%d", &QTY); // 1

    printf("1 = Standard Delivery \n");
    printf("0 = Express Delivery \n");
    scanf("%d", &eos); // 0

    if (eos == 1)
        shipping_charges = 100;
    else
        shipping_charges = 200;

    if (choice == 1)
    {
        printf("Order\n");
        printf("xxxxxx\n");
        printf("Charging Fan = RS.1200/=\n");
        printf("Charges=RS.%d/=\n", 1200 * QTY);
        printf("Total=RS.%d/=\n", 1200 * QTY + shipping_charges);
    }
    else if (choice == 2)
    {
        printf("Order\n");
        printf("xxxxxx\n");
        printf("Digital Magnifier = RS.8000/=\n");
        printf("Charges=RS.%d/=\n", 8000 * QTY);
        printf("Total=RS.%d/=\n", 8000 * QTY + shipping_charges);
    }
    else if (choice == 3)
    {
        printf("Order\n");
        printf("xxxxxx\n");
        printf("Drone = RS.9000/=\n");
        printf("Charges=RS.%d/=\n", 9000 * QTY);
        printf("Total=RS.%d/=\n", 9000 * QTY + shipping_charges);
    }
    else if (choice == 4)
    {
        printf("Order\n");
        printf("xxxxxx\n");
        printf("Smart Watch = RS.15000/=\n");
        printf("Charges=RS.%d/=\n", 15000 * QTY);
        printf("Total=RS.%d/=\n", 15000 * QTY + shipping_charges);
    }


    return 0;
}