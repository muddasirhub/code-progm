#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <conio.h>

#define VALIDATE_NUMBER_INPUT 0
#define VALIDATE_STRING_INPUT 1

#define FILENAME "D:\\expenseCalculator.txt"
#define FILENAME_ "D:\\expenseCalculator_.txt"

int menu();

void getInput(int r, int c, char *label, char *input, int isDigit);
void clearField();
void gotoRowColumn(int row, int col);
void getDateTime(char *dateTime);
void table(int a);

void add_expense();
void view_expense();
void update_expense();
void delete_expense();
void export_to_CSV();
void updateFile(char *oldFile, char *newFile);
void update_sNo();

int serial_num = 1;

void main()
{
    system("cls");

    update_sNo();

    int choice = menu();

    while (choice != 6)
    {
        if (choice == 1)
        {
            add_expense();
        }

        else if (choice == 2)
        {
            view_expense();
            gotoRowColumn(28, 79);
            printf("Press any key to continue...!");
            getchar();
        }

        else if (choice == 3)
        {
            update_expense();
        }

        else if (choice == 4)
        {
            delete_expense();
        }

        else if (choice == 5)
        {
            export_to_CSV();
        }

        system("cls");
        choice = menu();
    }
}

int menu()
{
    gotoRowColumn(13, 15);
    printf("----------------------");
    gotoRowColumn(14, 15);
    printf("  Expense Calculator");
    gotoRowColumn(15, 15);
    printf("----------------------");

    gotoRowColumn(17, 15);
    printf("[1] Add Expense");
    gotoRowColumn(18, 15);
    printf("[2] VEIW Expense");
    gotoRowColumn(19, 15);
    printf("[3] UPDATE Expense");
    gotoRowColumn(20, 15);
    printf("[4] DELETE Expense");
    gotoRowColumn(21, 15);
    printf("[5] Export To CSV");
    gotoRowColumn(22, 15);
    printf("[6] Exit");

    for (int i = 1; i <= 22; i++)
    {
        gotoRowColumn(i + 8, 75);
        // printf("\033[%d;%dH", i + 8, 75);
        printf("|");
    }

    char input[10];
    getInput(24, 15, "Enter Selection = ", input, 0);

    return atoi(input);
}

void getInput(int r, int c, char *lable, char *input, int isDigit)
{
    do
    {
        gotoRowColumn(r, c);
        clearField();
        printf("%s", lable);
        fgets(input, 20, stdin);

        if (isDigit == VALIDATE_NUMBER_INPUT)
        {
            if (atoi(input) > 0)
                break;
        }
        else if (isDigit == VALIDATE_STRING_INPUT)
        {
            if (atoi(input) == 0 && strlen(input) != 1)
                break;
        }
    } while (1);
}

void gotoRowColumn(int row, int col)
{
    printf("\033[%d;%dH", row, col);
}

void getDateTime(char *dateTime)
{
    time_t now = time(NULL);
    struct tm *t = localtime(&now);

    sprintf(dateTime, "%02d/%02d/%04d %02d:%02d %s",
            t->tm_mon + 1, t->tm_mday, t->tm_year + 1900,
            t->tm_hour % 12 ? t->tm_hour % 12 : 12,
            t->tm_min, t->tm_hour < 12 ? "AM" : "PM");
}

void updateFile(char *oldFile, char *newFile)
{
    remove(oldFile);
    rename(newFile, oldFile);
}

void update_sNo()
{
    // need to change useless loop

    FILE *file = fopen(FILENAME, "r");

    int x = 1;
    char type[100], amount_[20], date[15];

    while (fscanf(file, "%d,%[^,],%[^,],%[^\n]", &x, type, amount_, date) == 4)
        serial_num = x + 1;

    fclose(file);
}

void clearField()
{
    printf("                                                         \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
}

void table(int line)
{
    for (int a = 1; a <= 48; a++)
        printf("-");

    gotoRowColumn(15, 79);
    printf("EXPENSE TYPE");

    gotoRowColumn(15, 94);
    printf("|");

    gotoRowColumn(15, 96);
    printf("AMOUNT");

    gotoRowColumn(15, 103);
    printf("|");

    gotoRowColumn(15, 106);
    printf("DATE");

    gotoRowColumn(16, 79);

    for (int b = 1; b <= 48; b++)
        printf("-");

    for (int c = 1; c <= line; c++)
    {
        printf("\033[%d;%dH", c + 16, 94);
        printf("|");
    }

    for (int d = 1; d <= line; d++)
    {
        printf("\033[%d;%dH", d + 16, 103);
        printf("|");
    }
}

void add_expense()
{
    update_sNo();

    char expType[20], amount[10], dateTime[30];

    gotoRowColumn(10, 79);
    printf("[ Add Expenses ]");

    getInput(12, 79, "Enter Expense Type : ", expType, 1);
    getInput(13, 79, "Enter Amount = ", amount, 0);

    expType[strlen(expType) - 1] = '\0';
    amount[strlen(amount) - 1] = '\0';

    FILE *f = fopen(FILENAME, "a");
    getDateTime(dateTime);
    fprintf(f, "%d,%s,%s,%s\n", serial_num, expType, amount, dateTime);
    fclose(f);

    serial_num++;
}

void view_expense()
{
    gotoRowColumn(10, 79);
    printf("[ View Expenses ]");

    gotoRowColumn(14, 79);
    table(10);

    FILE *f = fopen(FILENAME, "r");

    int serial_n;
    char type[100];
    char am[20];
    char d_t[30];

    int record = 1;
    int size = 10;

    int rows = 17;

    while (fscanf(f, "%d,%[^,],%[^,],%[^\n]", &serial_n, type, am, d_t) == 4)
    {
        gotoRowColumn(rows, 79);
        printf("%d. %s", serial_n, type);

        gotoRowColumn(rows, 96);
        printf("%s", am);

        gotoRowColumn(rows, 106);
        printf("%s", d_t);

        if (record == size)
        {
            gotoRowColumn(28, 79);
            printf("Press any key to see more...!");
            getch();
            size += 10;

            for (int r = 17; r <= 17 + 10; r++)
            {
                for (int c = 79; c <= 79 + 50; c++)
                {
                    if (c == 94 || c == 103)
                        continue;

                    gotoRowColumn(r, c);
                    printf(" ");
                }
            }
            rows = 16;
        }
        rows++;   // 25
        record++; // 10
    }

    fclose(f);
}

void update_expense()
{
    FILE *fp = fopen(FILENAME, "r");
    FILE *f = fopen(FILENAME_, "w");

    gotoRowColumn(10, 79);
    printf("[ Update Expenses ]");

    char sNo[20];
    getInput(12, 79, "Enter Serial Number = ", sNo, 0);

    int input = atoi(sNo);

    int serial_n;
    char expType[20], amount[10], dateTime[30];

    char selection[5];
    int record_found = 0;

    while (fscanf(fp, "%d,%[^,],%[^,],%[^\n]", &serial_n, expType, amount, dateTime) == 4)
    {
        if (input == serial_n)
        {
            gotoRowColumn(14, 79);
            table(2);

            gotoRowColumn(17, 79);
            printf("%d. %s", serial_n, expType);

            gotoRowColumn(17, 97);
            printf("%s", amount);

            gotoRowColumn(17, 106);
            printf("%s", dateTime);

            do
            {
                getInput(20, 79, "Press 1 To Update and 2 To Cancel ", selection, VALIDATE_NUMBER_INPUT);

            } while (!(atoi(selection) == 1 || atoi(selection) == 2));

            if (atoi(selection) == 1)
            {
                getInput(22, 79, "Enter Expense Type : ", expType, VALIDATE_STRING_INPUT);
                getInput(24, 79, "Enter Amount = ", amount, VALIDATE_NUMBER_INPUT);
                getDateTime(dateTime);

                expType[strlen(expType) - 1] = '\0';
                amount[strlen(amount) - 1] = '\0';
            }
            record_found = 1;
        }
        fprintf(f, "%d,%s,%s,%s\n", serial_n, expType, amount, dateTime);
    }

    fclose(fp);
    fclose(f);

    updateFile(FILENAME, FILENAME_);

    if (atoi(selection) == 1)
    {
        gotoRowColumn(26, 79);
        printf("Record is updated sucessfully");
        gotoRowColumn(27, 79);
        printf("Press any key to continue... ");
        getch();
    }

    if (record_found == 0)
    {
        gotoRowColumn(23, 79);
        printf("NO RECORD FOUND !");
        gotoRowColumn(25, 79);
        printf("PRESS ANY KEY TO CONTINUE...! ");
        getch();
    }
}

void delete_expense()
{
    FILE *fp = fopen(FILENAME, "r");
    FILE *f = fopen(FILENAME_, "w");

    gotoRowColumn(10, 79);
    printf("[ Delete Expenses ]");

    char sNo[20];
    int record_found = 0;
    getInput(12, 79, "Enter Serial Number = ", sNo, VALIDATE_NUMBER_INPUT);
    int input = atoi(sNo);

    char selection[5];

    int found = 1;
    int serial_n;
    char expType[20], amount[10], dateTime[30];

    while (fscanf(fp, "%d,%[^,],%[^,],%[^\n]", &serial_n, expType, amount, dateTime) == 4)
    {
        found = 1;

        if (input == serial_n)
        {
            gotoRowColumn(14, 79);
            table(2);

            gotoRowColumn(17, 79);
            printf("%d. %s", serial_n, expType);

            gotoRowColumn(17, 96);
            printf("%s", amount);

            gotoRowColumn(17, 106);
            printf("%s", dateTime);

            do
            {
                getInput(20, 79, "Press 1 To Delete and 2 To Cancel ", selection, VALIDATE_NUMBER_INPUT);

            } while (!(atoi(selection) == 1 || atoi(selection) == 2));

            if (atoi(selection) == 1)
            {
                found = 0;
            }
            record_found = 1;
        }

        if (found == 1)
        {
            fprintf(f, "%d,%s,%s,%s\n", serial_n, expType, amount, dateTime);
        }
    }

    fclose(fp);
    fclose(f);

    updateFile(FILENAME, FILENAME_);

    if (atoi(selection) == 1)
    {
        gotoRowColumn(24, 79);
        printf("RECORD IS SUCCESSFULLY DELETED");
        gotoRowColumn(25, 79);
        printf("PRESS ANY KEY TO CONTINUE... ");
        getch();
    }

    if (record_found == 0)
    {
        gotoRowColumn(23, 79);
        printf("NO RECORD FOUND !");
        gotoRowColumn(25, 79);
        printf("PRESS ANY KEY TO CONTINUE...! ");
        getch();
    }
}

void export_to_CSV()
{
    gotoRowColumn(10, 79);
    printf("[ Export To CSV ]");

    FILE *file_ = fopen(FILENAME, "r");
    FILE *file = fopen("D:\\report_to_csv.csv", "w");

    int serial_n;
    char expType[100], amount[20], dateTime[30];

    fprintf(file, "%s,%s,%s,%s\n", "Sr #", "Expense Type", "Amount", "Date Time");
    while (fscanf(file_, "%d,%[^,],%[^,],%[^\n]", &serial_n, expType, amount, dateTime) == 4)
        fprintf(file, "%d,%s,%s,%s\n", serial_n, expType, amount, dateTime);

    fclose(file_);
    fclose(file);

    gotoRowColumn(13, 79);
    printf("FILE IS SUCCESSFULLY EXPORTED TO CSV");

    gotoRowColumn(28, 79);
    printf("Press any key to continue...! ");

    getch();
}