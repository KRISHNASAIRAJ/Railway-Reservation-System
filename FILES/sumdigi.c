#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <string.h>
void viewinfo();
void bookticket();
void cancelticket();
void admin();
void password();
void viewpassenger();
void addtrain();
void dlttrain();
void awrite();
void aread();
void bookticket_write();
void viewpassengers_read();

int main()
{
    printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
    printf("\n\n\t\t\t\t\t ********************Welcome To Electronic Railway Ticket Booking********************\n");
    printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");

    time_t t;
    time(&t);
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t%s", ctime(&t));

    printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");

    printf("\t\t\t\t\t\t\t\t\t\tPlease Choose Your Panel");
    printf("\n\n\n\t\t\t\t1.Passenger");
    printf("\n\n\t\t\t\t2.Admin");
    printf("\n\n\t\t\t\t3.Exit");
    int i;
    printf("\n\n\t\t\t\tEnter Your Choice:");
    scanf("%d", &i);
    // clrscr();
    system("cls");
    if (i == 1)
    {
        int p;

        // printf("\n\n\t\t\t\tWebsite Under Maintaince");
        printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
        printf("\n\n\t\t\t\t\t ********************Welcome To Passenger Ticket Booking Panel********************\n");
        printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
        printf("\n\n\n\t\t\t[1] VIEW INFORMATION\n");
        printf("\n\n\t\t\t[2] BOOK TICKET\n");
        printf("\n\n\t\t\t[3] CANCEL TICKET\n");
        printf("\n\n\t\t\t[4] MAIN MENU\n");
        // system("cls");
        printf("\n\n\t\t\t\tEnter Your Choice:");
        scanf("%d", &p);
        system("cls");
        switch (p)
        {
        case 1:
            viewinfo();
            break;
        case 2:
            bookticket();
            break;
        case 3:
            cancelticket();
            break;
        case 4:
            password();
            break;
        case 5:
            system("cls");
            printf("\n\t\t\t =========================================\n");
            printf("\t\t\t *******RAILWAY RESERVATION SYSTEM*******\n");
            printf("\t\t\t ===============================================\n");
            printf("\n\n\t\t\tBMROUGHT TO YOU BY\n\n");
            printf("\t\t\t\t***Learnprogramo***\n");
            getch();
            exit(0);
            break;
        default:
            system("cls");
            printf("\n\t\t\t==============================================\n");
            printf("\t\t\t   *******RAILWAY RESERVATION SYSTEM*******\n");
            printf("\t\t\t   ==============================================\n");
            printf("\n\n\t\t\t<<<<<<<<YOU ENTERED WRONG CHOICE>>>>>>>>\n");
            printf("\t\t\t<<<<<<<<PLEASE ENTER RIGHT THING>>>>>>>>\n");
            getch();
            system("cls");
            main();
        }
        return 0;
    }
    if (i == 2)
    {
        // printf("\n\n\t\t\t\tWebsite Under Maintaince");
        printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
        printf("\n\n\t\t\t\t\t ********************Welcome To Admin Ticket Booking Panel********************\n");
        printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
    }
    if (i == 3)
    {
        return (0);
    }

    getch();
}
