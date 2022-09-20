//--------------------------------------------ELECTRONIC RAILWAY TICKET BOOKING------------------------------------
//---------------------------------------------header files start--------------------------------------------------
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
//---------------------------------------------header files close--------------------------------------------------
//----------------------------------------------user define function start-----------------------------------------
void passenger();
void admin();
void addtrain();
void dlttrain();
//----------------------------------------------user define function close-----------------------------------------
//----------------------------------------------structure start----------------------------------------------------
struct adddata
{
    char train_number[10];
    char train_name[20];
    char from[10];
    char departure_time[10];
    char to[10];
    char arrival_time[10];
    char travel_time[10];
    int SL_seat[10];
    char SL_price[10];
    int SA_seat[10];
    char SA_price[10];
    int TA_seat[10];
    char TA_price[10];
    int CC_seat[10];
    char CC_price[10];
    char date[20];
} add[1000];

struct bookticket
{
    char train_number[20];
    char first_name[20];
    char last_name[20];
    char phone[20];
    char date[20];
    char boarding[20];
    int seat;
} book[1000];
//-----------------------------------------------------------------structure close---------------------------------------------------------------
//-----------------------------------------------------------------global variable----------------------------------------------------------------
int k = 0, u = 0;
char train_number[100], name[100], phn[100];
//-----------------------------------------------------------------main function start---------------------------------------------------------
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
        printf("\n\n\t\t\t\t\t\t\t\t!!!!!!!!YOU ENTERED WRONG CHOICE!!!!!!!!\n");
        printf("\n\n\t\t\t\t\t\t\t\t!!!!!!!!PLEASE ENTER RIGHT THING!!!!!!!!\n");
        getch();
        system("cls");
        main();
    }
    getch();
}
//---------------------------------------main function close--------------------------------------------------
//-------------------------------------admin portal function----------------------------------------
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
        printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
        printf("\n\n\t\t\t\t\t ********************Welcome To Passenger Ticket Booking Panel********************\n");
        printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
        printf("\n\n\n\t\t\t[1] AVAILABLE TRAINS\n");
        printf("\n\n\t\t\t[2] MAKE RESERVATION\n");
        printf("\n\n\t\t\t[3] CANCEL RESERVATION\n");
        printf("\n\n\t\t\t[4] PNR STATUS\n");
        printf("\n\n\t\t\t[5] FOOD CATERING\n");
        printf("\n\n\t\t\t[6] MAIN MENU\n");
        printf("\n\n\t\t\t\tEnter Your Choice:");
        scanf("%d", &p);
        system("cls");

        if (p == 1)
        {
            int ch, i;
            system("cls");
            aread();
            printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
            printf("\n\n\t\t\t\t\t ********************Welcome To Electronic Railway Ticket Booking********************\n");
            printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");

            time_t t;
            time(&t);
            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t%s", ctime(&t));

            printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
            // printf("\n\nNo.	Name	Type	Zone	From	PF	Dep	Avg	To	PF	Arr	Avg	Duration	Halts	Dep Days	Classes		Qt	Distance");
            printf("\n\n\n    \tTRAIN NO\tTRAIN NAME\tFROM\t  DEPARTURE TIME\t TO\tARRIVAL TIME\tTOTAL TIME\tSL\tSA\tTA\tCC\tDATE\n\n");
            for (i = 0; i < k; i++)
            {
                printf("\t %s\t\t %s\t%s\t    %s\t\t %s\t  %s\t%s\t%d\t%d\t%d\t%d\t%s\n", add[i].train_number, add[i].train_name, add[i].from, add[i].departure_time, add[i].to, add[i].arrival_time, add[i].travel_time, add[i].SL_seat,
                       add[i].SA_seat, add[i].TA_seat, add[i].CC_seat, add[i].date);
            }
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
//--------------------------------------view passengers function----------------------------------------
void viewpassenger()
{
    int a, j;
    system("cls");
    printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
    printf("\n\n\t\t\t\t\t ********************Welcome To Electronic Railway Ticket Booking********************\n");
    printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");

    time_t t;
    time(&t);
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t%s", ctime(&t));

    printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
    printf("\n\n\t\t\ttrain number\t\tname\t\tphone number\t\tdate\t\tseat\n");
    for (j = 0; j < u; j++)
    {
        printf("\n\t\t\t%s\t\t\t%s\t\t%s\t\t%s\t%d", book[j].train_number, book[j].first_name, book[j].phone, book[j].date, book[j].seat);
        book[j].seat++;
    }
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
//--------------------------------------add train function--------------------------------------------
void addtrain()
{
    system("cls");
    int ch;
    int i, a;
    printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
    printf("\n\n\t\t\t\t\t ********************Welcome To Electronic Railway Ticket Booking********************\n");
    printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");

    time_t t;
    time(&t);
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t%s", ctime(&t));

    printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
    printf("\n\n\t\t\tNumber Of Trains To Be Added= ");
    scanf("%d", &a);
    for (i = k; i < k + a; i++)
    {
        printf("\n\t\t\tenter %d train details: ", i + 1);
        printf("\n\n\t\t\tenter train number: ");
        scanf("%s", add[i].train_number);
        printf("\n\t\t\tenter train name: ");
        scanf("%s", add[i].train_name);
        printf("\n\t\t\tenter start place: ");
        scanf("%s", add[i].from);
        printf("\n\t\t\tenter departure time: ");
        scanf("%s", add[i].departure_time);
        printf("\n\t\t\tenter destination place: ");
        scanf("%s", add[i].to);
        printf("\n\t\t\tenter arrival time: ");
        scanf("%s", add[i].arrival_time);
        printf("\n\t\t\tenter travel time: ");
        scanf("%s", add[i].travel_time);
        printf("\n\t\t\tenter number of sleeper seats: ");
        scanf("%s", add[i].SL_seat);
        printf("\n\t\t\tenter price of sleeper seat: ");
        scanf("%s", add[i].SL_price);
        printf("\n\t\t\tenter number of second ac seats: ");
        scanf("%s", add[i].SA_seat);
        printf("\n\t\t\tenter price of second ac seat: ");
        scanf("%s", add[i].SA_price);
        printf("\n\t\t\tenter number of third ac seats: ");
        scanf("%s", add[i].TA_seat);
        printf("\n\t\t\tenter price of third ac seat: ");
        scanf("%s", add[i].TA_price);
        printf("\n\t\t\tenter number of chair car seats: ");
        scanf("%s", add[i].CC_seat);
        printf("\n\t\t\tenter price of chair car seat: ");
        scanf("%s", add[i].CC_price);
        printf("\n\t\t\tenter date of train: ");
        scanf("%s", add[i].date);
    }

    printf("\n\n\t\t\tconfirm train: (y=1/n=0):- ");
    scanf("%d", &ch);
    if (ch == 1)
    {
        awrite();
        k = i;
        awrite();
        system("cls");
        printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
        printf("\n\n\t\t\t\t\t ********************Welcome To Electronic Railway Ticket Booking********************\n");
        printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");

        time_t t;
        time(&t);
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t%s", ctime(&t));

        printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");

        printf("\n\n\t\t\t\t\t\t\t\tThe Train Has Been Added Successfully!!!!");
    }
    printf("\n\n\n\t\tEnter 1 to go back to previous menu or Enter 0 to go back to main menu");
    printf("\n\n\n\t\tENTER YOUR CHOICE: ");
    int v;
    scanf("%d", &v);
    printf("\n\n\n\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
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
//------------------------------------delete train function----------------------------------------------
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
//-----------------------------------------------------------password function-----------------------------------------------------------------
void password()
{
    int number = 12345;
    int pass;
    char user, id = user;
    printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
    printf("\n\n\t\t\t\t\t ********************Welcome To Electronic Railway Ticket Booking********************\n");
    printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");

    time_t t;
    time(&t);
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t%s", ctime(&t));

    printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
    printf("\n\n\n\t\t\t\t\t\t\t\t\tEnter password: ");
    scanf("%d", &pass);
    if (pass == number)
    {
        printf("\n\n\t\t\t\t\t\t\t\t    You have logged in successfully");
        getch();
        system("cls");
        admin();
    }
    else
    {
        printf("\n\n\n\t\t\t\t\t\t\t\t Error! Entered password is wrong.");
        getch();
        system("cls");
        main();
    }
}
//-----------------------------------------File Handling---------------------------------------------------
//-----------------------------------------add train file start---------------------------------------------------
void awrite()
{
    FILE *train_details;
    train_details = fopen("train_details.txt", "w");
    fwrite(&add, sizeof(add), 1, train_details);
    fclose(train_details);

    FILE *train_report;
    train_report = fopen("train_report.txt", "w");
    fwrite(&k, sizeof(k), 1, train_report);
    fclose(train_report);
}
void aread()
{
    FILE *train_details;
    train_details = fopen("train_details.txt", "r");
    fread(&add, sizeof(add), 1, train_details);
    fclose(train_details);

    FILE *train_report;
    train_report = fopen("train_report.txt", "r");
    fread(&k, sizeof(k), 1, train_report);
    fclose(train_report);
}