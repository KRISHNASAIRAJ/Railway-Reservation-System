#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
void passenger();
void addtrain();
void dlttrain();
void admin();
struct adddata
{
	char no[10];
	char train_number[10];
	char train_name[20];
	char from[10];
	char to[10];
	char price[10];
	int seat;
	char time[10];
} add[1000];
struct bookticket
{   
    char train_number[20];
    char name[20];
    char phone[20];
    char date[20];
    int seat;
} book[1000];
int k = 0, u = 0;
char trn_nmbr[100], name[100], phn[100];
void main()
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
    switch (i)
    {
    case 1:
        passenger();
        break;
    case 2:
        password();
        break;
    case 3:
        system("cls");
        exit(0);
        break;
    default:
        system("cls");
        printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
        printf("\n\n\t\t\t\t\t ********************Welcome To Electronic Railway Ticket Booking********************\n");
        printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
        printf("\n\t\t\t\t\t\t\t\t\t\t!!!!!!!!YOU ENTERED WRONG CHOICE!!!!!!!!\n");
        printf("\n\t\t\t\t\t\t\t\t\t\tt!!!!!!!!PLEASE ENTER RIGHT THING!!!!!!!!\n");
        getch();
        system("cls");
        main();
    }
    getch();
}
void admin()
{
    int chhh;
    printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
    printf("\n\n\t\t\t\t\t\t\t********************Welcome To Admin Panel********************\n");
    printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
    time_t t;
    time(&t);
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t%s", ctime(&t));

    printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
    printf("\t\t\t\t\t\t\t\t\t\tCHOOSE YOUR OPERATION");
    printf("\n\n\n\t\t\t\t\t\t\t1.VIEW PASSENGERS");
    printf("\n\n\t\t\t\t\t\t\t2.ADD TRAIN");
    printf("\n\n\t\t\t\t\t\t\t3.DELETE TRAIN");
    printf("\n\n\t\t\t\t\t\t\t4.BACK");
    printf("\n\n\n\t\t\t\t\t\t\tENTER YOUR CHOICE: ");
    scanf("%d", &chhh);
    switch (chhh)
    {
    case 1:
        viewpassenger();
        break;
    case 2:
        addtrain();
        break;
    case 3:
        dlttrain();
        break;
    case 4:
        system("cls");
        main();
        break;
    default:
        getch();
        printf("\n\t\t\tyou entered wrong key!!!!");
        getch();
        system("cls");
        main();
    }
    getch();
}
void passenger()
{
    {
        int p;
        // printf("\n\n\t\t\t\tWebsite Under Maintaince");
        printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
        printf("\n\n\t\t\t\t\t ********************Welcome To Passenger Ticket Booking Panel********************\n");
        printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
        printf("\n\n\n\t\t\t[1] VIEW INFORMATION\n");
        printf("\n\n\t\t\t[2] BOOK TICKET\n");
        printf("\n\n\t\t\t[3] CANCEL TICKET\n");
        printf("\n\n\t\t\t[4] PNR STATUS\n");
        printf("\n\n\t\t\t[5] FOOD CATERING\n");
        printf("\n\n\t\t\t[6] MAIN MENU\n");
        // system("cls");
        printf("\n\n\t\t\t\tEnter Your Choice:");
        scanf("%d", &p);
        system("cls");

        if (p == 1)
        {

            printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
            printf("\n\n\t\t\t\t\t ********************Welcome To Electronic Railway Ticket Booking********************\n");
            printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");

            time_t t;
            time(&t);
            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t%s", ctime(&t));

            printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");

            printf("\n\n-----------------------------------------------------Trains between BZA/Vijayawada Junction and SC/Secunderabad Junction----------------------------------------------------");
            printf("\n\nNo.	Name	Type	Zone	From	PF	Dep	Avg	To	PF	Arr	Avg	Duration	Halts	Dep Days	Classes		Qt	Distance");
            printf("\n\n\n\t\tEnter 1 to go back to previous menu or Enter 0 to go back to main menu");
            printf("\n\n\n\t\tENTER YOUR CHOICE: ");
            int v;
            scanf("%d", &v);
            system("cls");
            switch (v)
            {
            case 1:
                passenger();
                break;
            case 0:
                system("cls");
                main();
                break;
            default:
                getch();
                printf("\n\t\t\tyou entered wrong key!!!!");
                getch();
                system("cls");
                main();
            }
        }
        if (p == 2)
        {
            printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
            printf("\n\n\t\t\t\t\t ********************Welcome To Electronic Railway Ticket Booking********************\n");
            printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");

            time_t t;
            time(&t);
            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t%s", ctime(&t));

            printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");

            printf("\n\n\t\tTo Be Updated Soon");
            printf("\n\n\n\t\tEnter 1 to go back to previous menu or Enter 0 to go back to main menu");
            printf("\n\n\n\t\tENTER YOUR CHOICE: ");
            int v;
            scanf("%d", &v);
            system("cls");
            switch (v)
            {
            case 1:
                passenger();
                break;
            case 0:
                system("cls");
                main();
                break;
            default:
                printf("\n\t\t\tyou entered wrong key!!!!");
                getch();
                system("cls");
                main();
            }
        }
        if (p == 3)
        {
            printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
            printf("\n\n\t\t\t\t\t ********************Welcome To Electronic Railway Ticket Booking********************\n");
            printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");

            time_t t;
            time(&t);
            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t%s", ctime(&t));

            printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");

            printf("\n\n\t\tTo Be Updated Soon");
            printf("\n\n\n\t\tEnter 1 to go back to previous menu or Enter 0 to go back to main menu");
            printf("\n\n\n\t\tENTER YOUR CHOICE: ");
            int v;
            scanf("%d", &v);
            system("cls");
            switch (v)
            {
            case 1:
                passenger();
                break;
            case 0:
                system("cls");
                main();
                break;
            default:
                printf("\n\t\t\tyou entered wrong key!!!!");
                getch();
                system("cls");
                main();
            }
        }
        if (p == 4)
        {
            printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
            printf("\n\n\t\t\t\t\t ********************Welcome To Electronic Railway Ticket Booking********************\n");
            printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");

            time_t t;
            time(&t);
            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t%s", ctime(&t));

            printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");

            printf("\n\n\t\tTo Be Updated Soon");
            printf("\n\n\n\t\tEnter 1 to go back to previous menu or Enter 0 to go back to main menu");
            printf("\n\n\n\t\tENTER YOUR CHOICE: ");
            int v;
            scanf("%d", &v);
            system("cls");
            switch (v)
            {
            case 1:
                passenger();
                break;
            case 0:
                system("cls");
                main();
                break;
            default:
                printf("\n\t\t\tyou entered wrong key!!!!");
                getch();
                system("cls");
                main();
            }
        }
        if (p == 5)
        {
            printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
            printf("\n\n\t\t\t\t\t ********************Welcome To Electronic Railway Ticket Booking********************\n");
            printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");

            time_t t;
            time(&t);
            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t%s", ctime(&t));

            printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");

            printf("\n\n\t\tTo Be Updated Soon");
            printf("\n\n\n\t\tEnter 1 to go back to previous menu or Enter 0 to go back to main menu");
            printf("\n\n\n\t\tENTER YOUR CHOICE: ");
            int v;
            scanf("%d", &v);
            system("cls");
            switch (v)
            {
            case 1:
                passenger();
                break;
            case 0:
                system("cls");
                main();
                break;
            default:
                printf("\n\t\t\tyou entered wrong key!!!!");
                getch();
                system("cls");
                main();
            }
        }
        if (p == 6)
        {
            system("cls");
            main();
        }
    }
}
void viewpassenger()
{
    system("cls");
    printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
    printf("\n\n\t\t\t\t\t ********************Welcome To Electronic Railway Ticket Booking********************\n");
    printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");

    time_t t;
    time(&t);
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t%s", ctime(&t));

    printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");

    printf("\n\n\t\tTo Be Updated Soon");
    printf("\n\n\n\t\tEnter 1 to go back to previous menu or Enter 0 to go back to main menu");
    printf("\n\n\n\t\tENTER YOUR CHOICE: ");
    int v;
    scanf("%d", &v);
    system("cls");
    switch (v)
    {
    case 1:
        admin();
        break;
    case 0:
        system("cls");
        main();
        break;
    default:
        printf("\n\t\t\tyou entered wrong key!!!!");
        getch();
        system("cls");
        main();
    }
}
void addtrain()
{
    system("cls");
    printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
    printf("\n\n\t\t\t\t\t ********************Welcome To Electronic Railway Ticket Booking********************\n");
    printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");

    time_t t;
    time(&t);
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t%s", ctime(&t));

    printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");

    printf("\n\n\t\tTo Be Updated Soon");
        printf("\n\n\n\t\tEnter 1 to go back to previous menu or Enter 0 to go back to main menu");
    printf("\n\n\n\t\tENTER YOUR CHOICE: ");
    int v;
    scanf("%d", &v);
    system("cls");
    switch (v)
    {
    case 1:
        admin();
        break;
    case 0:
        system("cls");
        main();
        break;
    default:
        printf("\n\t\t\tyou entered wrong key!!!!");
        getch();
        system("cls");
        main();
    }
}

void dlttrain()
{
    system("cls");
    printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
    printf("\n\n\t\t\t\t\t ********************Welcome To Electronic Railway Ticket Booking********************\n");
    printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");

    time_t t;
    time(&t);
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t%s", ctime(&t));

    printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");

    printf("\n\n\t\tTo Be Updated Soon");
        printf("\n\n\n\t\tEnter 1 to go back to previous menu or Enter 0 to go back to main menu");
    printf("\n\n\n\t\tENTER YOUR CHOICE: ");
    int v;
    scanf("%d", &v);
    system("cls");
    switch (v)
    {
    case 1:
        admin();
        break;
    case 0:
        system("cls");
        main();
        break;
    default:
        printf("\n\t\t\tyou entered wrong key!!!!");
        getch();
        system("cls");
        main();
    }
}
void password()
{
    int number = 12345;
    int pass;
    printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
    printf("\n\n\t\t\t\t\t ********************Welcome To Electronic Railway Ticket Booking********************\n");
    printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");

    time_t t;
    time(&t);
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t%s", ctime(&t));

    printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");

    printf("\n\n\n\t\t\t\t\t\t\t\tenter password: ");
    scanf("%d", &pass);
    if (pass == number)
    {
        printf("\n\n\t\t\t\t\t\t\t\t<<<<<login successfully>>>>>");
        getch();
        system("cls");
        admin();
    }
    else
    {
        printf("\n\n\t\t\t\t   ERROR!!!!!");
        printf("\n\n\t\t\t<<<<<<<<wrong password>>>>>>>>");
        getch();
        system("cls");
        main();
    }
}