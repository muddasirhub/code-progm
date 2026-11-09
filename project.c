#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    do
    {
        system("cls");
        printf("1.  Age Calculator\n");
        printf("2.  Unit Conversion\n");
        printf("3.  Currency And Notes\n");
        printf("4.  Expense Calculator\n");
        printf("5.  Marksheet Program\n");
        printf("6.  Reverse 3 Digits\n");
        printf("7.  Salary Calculator\n");
        printf("8.  Positive Negative Program\n");
        printf("9.  Storage Unit Calculator\n");
        printf("10. Bank Investment Calculator\n");
        printf("11. Vowel Program\n");
        printf("12. Online Shopping\n");
        printf("13. Calculator Program\n");
        printf("14. Vending Machine Program\n");
        printf("15. Wallet Program\n");
        printf("16. Digit To English Program\n");

        printf("\n");

        int main_choice;

        printf("Enter Choice=");
        scanf("%d", &main_choice);

        system("cls");

        if (main_choice == 1)
        {
            int birthYear;
            const int _YEAR = 2026;
            const int _MONTH = 12;
            const int _DAYS = 365;
            const int _HOURS = 24;
            const int _MINUTES = 60;
            const int _SECONDS = 60;

            printf("Enter Your Birthyear=");
            scanf("%d", &birthYear);

            int age = _YEAR - birthYear; // 16

            if (age != 0)
            {
                int months = age * _MONTH; // 156
                int days = age * _DAYS;    //
                int hours = days * _HOURS;
                int minutes = hours * _MINUTES;
                int seconds = minutes * _SECONDS;

                printf("AGE= %3d\n", age);
                printf("MONTHS= %d\n", months);
                printf("DAYS= %d\n", days);
                printf("HOURS= %d\n", hours);
                printf("MINUTES= %d\n", minutes);
                printf("SECONDS= %d\n", seconds);
            }
        }

        if (main_choice == 2)
        {
            printf("1. Feet to Inch\n");
            printf("2. Kilo to Gram\n");
            printf("3. Rupee to Dollar \n");
            printf("4. Fahrenheit to Centigrate\n");

            int choice_a;

            printf("Enter Choice= ");
            scanf("%d", &choice_a);

            system("cls");

            if (choice_a == 1)
            {
                int feet, inch = 12;
                printf("Feet= ");
                scanf("%d", &feet);

                printf("Inches=%d\n", feet * inch);
            }

            if (choice_a == 2)
            {
                int kilo, gram = 1000;

                printf("Kilogram= ");
                scanf("%d", &kilo);

                printf("Gram=%d\n", kilo * gram);
            }

            if (choice_a == 3)
            {
                int pkr;

                printf("Enter PKR = ");

                scanf("%d", &pkr);

                printf("DOLLARS = %.1f\n", pkr / 278.50);
            }

            if (choice_a == 4)
            {
                float a;
                printf("Enter Faurenhite = ");
                scanf("%f", &a);

                printf("Centigrate = %.1f\n", (a - 32) * 5 / 9);
            }
        }

        if (main_choice == 3)
        {
            int curr;

            printf("Enter Amount= ");
            scanf("%d", &curr);

            if (curr >= 5000)
            {
                printf("5000 = %d\n", curr / 5000);
            }
            int a = curr % 5000;

            if (a >= 1000)
            {
                printf("1000 = %d\n", a / 1000);
            }
            int b = a % 1000;

            if (b >= 500)
            {
                printf("500 = %d\n", b / 500);
            }
            int c = b % 500;

            if (c >= 100)
            {
                printf("100 = %d\n", c / 100);
            }
            int d = c % 100;

            if (d >= 50)
            {
                printf("50 = %d\n", d / 50);
            }
            int e = d % 50;
            if (e >= 20)
            {
                printf("20 = %d\n", e / 20);
            }
            int f = e % 20;

            if (f >= 10)
            {
                printf("10 = %d\n", f / 10);
            }
            int g = f % 10;

            if (g >= 5)
            {
                printf("5 = %d\n", g / 5);
            }

            int h = g % 5;

            if (h >= 1)
            {
                printf("1 = %d\n", h / 1);
            }
        }

        if (main_choice == 4)
        {
            int a;
            int b;
            int c;
            int d;

            system("cls");

            printf("ENTER ROOM RENT PER NIGHT= ");
            scanf("%d", &a);

            printf("ENTER NO. OF NIGHT YOU LIVE= ");
            scanf("%d", &b);

            printf("ENTER FOOD BILL= ");
            scanf("%d", &c);

            printf("ENTER NO. OF PERSON= ");
            scanf("%d", &d);

            system("cls");

            printf("TOTAL HOTEL BILL= %d\n", a * b);
            printf("TOTAL FOOD BILL= %d\n", c);
            printf("TOTAL EXPENSE= %d\n", a * b + c);
            printf("PER HEAD= %d\n", (a * b + c) / d);
        }

        if (main_choice == 5)
        {
            char name[50];
            int rn, m, u, c, s, ss, i, e, el;

            printf("Enter Name=");
            scanf(" %[^\n]", name);

            printf("Enter Roll no= ");
            scanf("%d", &rn);

            printf("Enter Math Marks= ");
            scanf("%d", &m);

            printf("Enter Urdu Marks= ");
            scanf("%d", &u);

            printf("Enter Computer Marks= ");
            scanf("%d", &c);

            printf("Enter Science Marks= ");
            scanf("%d", &s);

            printf("Enter S.S.T Marks= ");
            scanf("%d", &ss);

            printf("Enter Islamiat Marks= ");
            scanf("%d", &i);

            printf("Enter Eng.Lit Marks= ");
            scanf("%d", &e);

            printf("Enter Eng.lang Marks= ");
            scanf("%d", &el);

            int t;

            printf("Enter Total Marks = ");
            scanf("%d", &t);

            system("cls");

            printf("Obtained Marks = %d\n", (m + u + c + s + ss + i + e + el));

            printf("Percentage=%d\n", (m + u + c + s + ss + i + e + el) * 100 / 800);

            int per = (m + u + c + s + ss + i + e + el) * 100 / 800;

            if (per >= 90 && per <= 100)
            {
                printf("Your Grade Is A+\n");
            }
            else if (per >= 80)
            {
                printf("Your Grade Is A\n");
            }
            else if (per >= 70)
            {
                printf("Your Grade Is B+\n");
            }
            else if (per >= 60)
            {
                printf("Your Grade Is B\n");
            }
            else if (per >= 50)
            {
                printf("Your Grade Is c\n");
            }
            if (per < 50)
            {
                printf("You Are Fail!\n");
            }
        }

        if (main_choice == 6)
        {
            int b;

            printf("Enter Number=");
            scanf("%d", &b);

            int f = b / 100;
            int s = b / 10 % 10;
            int t = b % 10;
            int cal = t * 100 + s * 10 + f;

            printf("%d\n", cal);
        }

        if (main_choice == 7)
        {
            float salary;

            printf("Enter Basic Salary = ");
            scanf("%f", &salary);

            float medical_allowance = salary * 0.05;

            float house_rent = salary * 0.05;

            float gross_salary = salary + house_rent + house_rent;

            float tax = gross_salary * 0.07;

            float net_salary = gross_salary - tax;

            printf("Medical Allowance = %.0f\n", medical_allowance);
            printf("House Rent = %.0f\n", house_rent);
            printf("Gross Salary = %.0f\n", gross_salary);
            printf("Tax = %.0f\n", tax);
            printf("Net Salary = %.0f\n", net_salary);
        }

        if (main_choice == 8)
        {
            int number;

            printf("Enter number = ");
            scanf("%d", &number);

            if (number > 0)
            {
                printf("positive number\n");
            }

            else if (number < 0)

            {
                printf("Negative number\n");
            }

            else
            {
                printf("0 input\n");
            }
        }

        if (main_choice == 9)
        {
            long long a;

            printf("Enter Bits:");
            scanf("%lld", &a);

            printf("Bytes=%lld\n", a / 8);
            printf("KB=%lld\n", a / 8 / 1024);
            printf("MB=%lld\n", a / 8 / 1024 / 1024);
            printf("GB=%lld\n", a / 8 / 1024 / 1024 / 1024);
            printf("TB=%lld\n", a / 8 / 1024 / 1024 / 1024 / 1024);
        }

        if (main_choice == 10)
        {
            int investment;

            printf("Enter Investment Amount = ");
            scanf("%d", &investment);

            int filer;

            printf("Enter you are FILER-1 or NON FILER-0 = ");
            scanf("%d", &filer);

            float whttax;
            if (filer == 1)
                whttax = 0.15;
            else
                whttax = 0.30;

            float profit = investment * 0.10;
            float wht_tax = profit * whttax;
            float balance = wht_tax + investment;

            printf("Profit = %.0f\n", profit);
            printf("W.H.T TAX = %.0f\n", wht_tax);
            printf("Balance = %.0f\n", balance);
        }

        if (main_choice == 11)
        {
            char choice;

            printf("Enter Character = ");
            scanf(" %c", &choice);

            switch (choice)
            {
            case 'a':

            case 'e':

            case 'i':

            case 'o':

            case 'u':

            case 'A':

            case 'E':

            case 'I':

            case 'O':

            case 'U':
                printf("It Is Vowel\n");

                break;

            default:
                printf("It Is Consonant\n");
            }
        }

        if (main_choice == 12)
        {
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
            scanf("%d", &choice);

            if (choice >= 5)
                return 0;

            printf("QTY? ");
            scanf("%d", &QTY); // 1

            printf("1 = Standard Delivery \n");
            printf("0 = Express Delivery \n");
            scanf("%d", &eos); // 0
            printf("ORDER\n");
            printf("xxxxxxxxxxxxxx\n");

            printf("\n");

            if (eos == 1)
                shipping_charges = 100;
            else
                shipping_charges = 200;

            if (choice == 1)
            {
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
        }

        if (main_choice == 13)
        {
            int fv;
            char e;
            int sv;

            printf("Enter Expression i.e. (2+2) = ");
            scanf("%d %c %d", &fv, &e, &sv);

            switch (e)

            {

            case '+':

                printf("Result = %d\n", fv + sv);
                break;

            case '-':

                printf("Result = %d\n", fv - sv);
                break;

            case '*':

                printf("Result = %d\n", fv * sv);
                break;

            case '/':

                printf("Result = %d\n", fv / sv);
                break;

            case '%':

                printf("Result = %d\n", fv % sv);
                break;

            default:

                printf("INVALID EXPRESSION\n");
            }
        }

        if (main_choice == 14)

        {
            int choice;
            int pc;
            int sc;
            int lc;
            int dc;

            int prs = 120;
            int srs = 60;
            int lrs = 50;
            int drs = 100;

            printf("1.Pepsi Can RS 120/=\n");
            printf("2.Slice Juice RS 60/=\n");
            printf("3.Lays RS 50/=\n");
            printf("4.Dairy Milk RS 100/=\n");

            printf("Enter Choice=");
            scanf("%d", &choice);

            switch (choice)
            {
            case 1:

                printf("You choosed Pepsi Can\n");
                printf("Enter Money=");
                scanf("%d", &pc);

                if (pc >= prs)
                {

                    printf("Pepsi Can Dispensed\n");
                    printf("%d/= Change\n", pc - prs);
                }
                else
                {
                    printf("Enter Atleast %d Amount\n", prs);
                }

                break;

            case 2:
                printf("You choosed Slice Juice\n");
                printf("Enter Money=");
                scanf("%d", &sc);
                if (sc >= srs)
                {

                    printf("Slice Juice Dispensed\n");
                    printf("%d/= Change\n", sc - srs);
                }
                else
                {
                    printf("Enter Atleast %d Amount\n", srs);
                }
                break;

            case 3:
                printf("You choosed Lays\n");
                printf("Enter Money=");
                scanf("%d", &lc);
                if (lc >= lrs)
                {

                    printf("Lays Dispensed\n");
                    printf("%d/= Change\n", lc - lrs);
                }
                else
                {
                    printf("Enter Atleast %d Amount\n", lrs);
                }
                break;

            case 4:
                printf("You choosed Dairy Milk\n");
                printf("Enter Money=");
                scanf("%d", &dc);
                if (dc >= drs)
                {

                    printf("Lays Dispensed\n");
                    printf("%d/= Change\n", dc - drs);
                }
                else
                {
                    printf("Enter Atleast %d Amount\n", drs);
                }
                break;
            }
        }

        if (main_choice == 15)

        {
            int wallet, amount, expense;

            printf("Enter Amount In Wallet= ");
            scanf("%d", &wallet); // 150

            if (wallet != 0)
            {
                printf("Enter Amount You Need= ");
                scanf("%d", &amount); // 100

                if (wallet >= amount)
                {
                    printf("Enter Expense= ");
                    scanf("%d", &expense); // 50

                    if (expense <= amount)
                    {

                        printf("=================================\n");
                        printf("Amount In Wallet=%d\n", wallet);
                        printf("Amount You Need=%d\n", amount);
                        printf("Expense=%d\n", expense);
                        printf("Change=%d\n", amount - expense);
                        printf("Amount In Wallet=%d\n", wallet - amount + amount - expense);
                    }
                }
                else
                {
                    printf("Insufficent Amount In Wallet\n");
                }
            }
            else
            {
                printf("No Money In Wallet\n");
            }
        }

        if (main_choice == 16)
        {
            int num;

            printf("Enter Number= ");
            scanf("%d", &num); // 111

            if (num < 100 || num > 999)
            {
                printf("Please enter a valid 3 digit number\n");
                return 0;
            }

            int a = num / 100;     // 3
            int b = num / 10 % 10; // 2
            int c = num % 10;      // 5

            switch (a)
            {
            case 1:
                printf("one hunderd");
                break;
            case 2:
                printf("two hunderd");
                break;
            case 3:
                printf("three hunderd");
                break;
            case 4:
                printf("four hunderd");
                break;
            case 5:
                printf("five hunderd");
                break;
            case 6:
                printf("six hunderd");
                break;
            case 7:
                printf("seven hunderd");
                break;
            case 8:
                printf("eight hunderd");
                break;
            case 9:
                printf("nine hunderd");
                break;
            }
            if (b == 1)
            {
                switch (c)
                {
                case 0:

                    printf(" ten\n");
                    break;
                case 1:
                    printf(" eleven\n");
                    break;
                case 2:
                    printf(" twelve\n");
                    break;
                case 3:
                    printf(" thirteen\n");
                    break;
                case 4:
                    printf(" fourteen\n");
                    break;
                case 5:
                    printf(" fifteen\n");
                    break;
                case 6:
                    printf(" sixteen\n");
                    break;
                case 7:
                    printf(" seventeen\n");
                    break;
                case 8:
                    printf(" eighteen\n");
                    break;
                case 9:
                    printf(" nineteen\n");
                    break;
                }
            }
            else
            {
                switch (b)
                {

                case 2:
                    printf(" twenty");
                    break;
                case 3:
                    printf(" thirty");
                    break;
                case 4:
                    printf(" fourty");
                    break;
                case 5:
                    printf(" fifty");
                    break;
                case 6:
                    printf(" sixty");
                    break;
                case 7:
                    printf(" seventy");
                    break;
                case 8:
                    printf(" eighty");
                    break;
                case 9:
                    printf(" ninety");
                    break;
                }

                switch (c)
                {
                case 0:
                    return 0;
                    break;
                case 1:

                    printf(" one\n");
                    break;
                case 2:
                    printf(" two\n");
                    break;
                case 3:
                    printf(" three\n");
                    break;
                case 4:
                    printf(" four\n");
                    break;
                case 5:
                    printf(" five\n");
                    break;
                case 6:
                    printf(" six\n");
                    break;
                case 7:
                    printf(" seven\n");
                    break;
                case 8:
                    printf(" eight\n");
                    break;
                case 9:
                    printf(" nine\n");
                    break;
                }
            }
        }

        if (main_choice > 16)
        {
            printf("invalid value \n");
        }

        do
        {
            printf("\n");
            printf("Do you want to continue? \n1. Continue\n2. Exit ");
            scanf("%d", &a);
            if (a >= 3)
            {
                system("cls");
                printf("Invalid Input\n");
            }
        } while (a >= 3);

    } while (a != 2 && a <= 2);

    return 0;
}