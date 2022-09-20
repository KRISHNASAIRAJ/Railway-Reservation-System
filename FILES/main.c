//--------------------------------------------ELECTRONIC RAILWAY TICKET BOOKING------------------------------------
//---------------------------------------------header files start--------------------------------------------------
#include <stdio.h>  //Standard Input Output header file.
#include <time.h>   //This header file defines four variable types, two macro and various functions for manipulating date and time.
#include <stdlib.h> //Standard Library header file.
//---------------------------------------------header files close--------------------------------------------------
//----------------------------------------------user define function start-----------------------------------------
void admin();
void passenger();
void addtrain();
void dlttrain();
void bookticket();
void cancelticket();
void viewpassenger_read();
void pnrstatus();
void foodcatering();
void Beverages();
void Breakfast();
void Meals();
void AlaCarteItems();
void foodbook();
void status();
//----------------------------------------------user define function close-----------------------------------------
//----------------------------------------------structures start---------------------------------------------------
struct adddata
{
    char train_number[10];
    char train_name[20];
    char from[10];
    char departure_time[10];
    char to[10];
    char arrival_time[10];
    char travel_time[10];
    int No_seats;
    char Seat_price[10];
    int SA_seat;
    int TA_seat;
    int CC_seat;
    char date[20];
    int pnr;
} add[1000];

struct bookticket
{
    char train_number[20];
    char first_name[20];
    char last_name[20];
    char phone[20];
    char boarding[20];
    int No_seats;
    int SA_seat;
    int TA_seat;
    int CC_seat;
    char date[20];
    int pnr;
} book[1000];
//---------------------------------------------structure close--------------------------------------------------
//---------------------------------------------global variable--------------------------------------------------
int k = 0, u = 0;
char train_number[100], name[100], phn[100];
//---------------------------------------------main function start----------------------------------------------
void main()
{
    aread();
    viewpassengers_read(); // The read() function reads data previously written to a file.
    printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
    printf("\n\n\t\t\t\t\t ********************Welcome To Electronic Railway Ticket Booking********************\n");
    printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
    time_t t;
    time(&t);
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t%s", ctime(&t));
    printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
    printf("\t\t\t\t\t\t\t\t\t\tPlease Choose Your Panel");
    printf("\n\n\n\t\t\t\t[1] Passenger");
    printf("\n\n\t\t\t\t[2] Admin");
    printf("\n\n\t\t\t\t[3] Exit");
    int i;
    printf("\n\n\t\t\t\tEnter Your Choice: ");
    scanf("%d", &i);
    system("clear");
    switch (i)
    {
    case 1:
        system("clear");
        passenger();
        break;
    case 2:
        system("clear");
        password();
        break;
    case 3:
        system("clear");
        exit(0);
        break;
    default:
        system("clear");
        printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
        printf("\n\n\t\t\t\t\t ********************Welcome To Electronic Railway Ticket Booking********************\n");
        printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
        printf("\n\n\t\t\t\t\t\t\t\t!!!!!!!!YOU ENTERED WRONG CHOICE!!!!!!!!\n");
        printf("\n\n\t\t\t\t\t\t\t\t!!!!!!!!PLEASE ENTER RIGHT THING!!!!!!!!\n");
        getchar();
        system("clear");
        main();
    }
    getchar();
}
//---------------------------------------main function close-------------------------------------------------------
//-------------------------------------admin portal function-------------------------------------------------------
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
    printf("\n\n\n\t\t\t\t\t\t\t[1] VIEW PASSENGERS");
    printf("\n\n\t\t\t\t\t\t\t[2] ADD TRAIN");
    printf("\n\n\t\t\t\t\t\t\t[3] DELETE TRAIN");
    printf("\n\n\t\t\t\t\t\t\t[4] MAIN MENU");
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
        system("clear");
        main();
        break;
    default:
        getchar();
        printf("\n\t\t\tyou entered wrong key!!!!");
        getchar();
        system("clear");
        admin();
    }
    getchar();
}
//-------------------------------------------------------------------------passenger panel----------------------------------
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
        system("clear");

        if (p == 1)
        {
            int ch, i;
            system("clear");
            aread();
            printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
            printf("\n\n\t\t\t\t\t ********************Welcome To Electronic Railway Ticket Booking********************\n");
            printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
            time_t t;
            time(&t);
            printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t%s", ctime(&t));
            printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
            printf("\n\n\n    \tTRAIN NO\tTRAIN NAME\tFROM\t  DEPARTURE TIME\t TO\tARRIVAL TIME\tTOTAL TIME\tSEATS\tDATE\n\n");
            for (i = 0; i < k; i++)
            {
                printf("\t %s\t\t %s\t\t%s\t    %s\t\t %s\t  %s\t%s\t\t%d\t%s\n", add[i].train_number, add[i].train_name, add[i].from, add[i].departure_time, add[i].to, add[i].arrival_time, add[i].travel_time, add[i].No_seats, add[i].date);
            }
            printf("\n\n\n\t\tEnter 1 to go back to previous menu or Enter 0 to go back to main menu");
            printf("\n\n\n\t\tENTER YOUR CHOICE: ");
            int v;
            scanf("%d", &v);
            system("clear");
            switch (v)
            {
            case 1:
                passenger();
                break;
            case 0:
                system("clear");
                main();
                break;
            default:
                getchar();
                printf("\n\t\t\tyou entered wrong key!!!!");
                getchar();
                system("clear");
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
            printf("\n\n\n\n\n\n\n\t\tEnter '1' to proceed");
            printf("\n\n\n\t\tEnter '2' to go back to previous menu or Enter '0' to go back to main menu");
            printf("\n\n\n\t\tENTER YOUR CHOICE: ");
            int v;
            scanf("%d", &v);
            system("cls");
            switch (v)
            {
            case 1:
                bookticket();
                break;
            case 2:
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
            printf("\n\n\n\n\n\n\n\t\tEnter '1' to proceed");
            printf("\n\n\n\t\tEnter 2 to go back to previous menu or Enter 0 to go back to main menu");
            printf("\n\n\n\t\tENTER YOUR CHOICE: ");
            int v;
            scanf("%d", &v);
            system("clear");
            switch (v)
            {
            case 1:
                cancelticket();
                break;
            case 2:
                passenger();
                break;
            case 0:
                system("clear");
                main();
                break;
            default:
                printf("\n\t\t\tyou entered wrong key!!!!");
                getchar();
                system("clear");
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
            printf("\n\n\n\n\n\n\n\t\tEnter '1' to proceed");
            printf("\n\n\n\t\tEnter 2 to go back to previous menu or Enter 0 to go back to main menu");
            printf("\n\n\n\t\tENTER YOUR CHOICE: ");
            int v;
            scanf("%d", &v);
            system("clear");
            switch (v)
            {
            case 1:
                status();
                break;
            case 2:
                passenger();
                break;
            case 0:
                system("clear");
                main();
                break;
            default:
                printf("\n\t\t\tyou entered wrong key!!!!");
                getchar();
                system("clear");
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
            printf("\n\n\n\n\n\n\n\t\tEnter '1' to proceed");
            printf("\n\n\n\t\tEnter 2 to go back to previous menu or Enter 0 to go back to main menu");
            printf("\n\n\n\t\tENTER YOUR CHOICE: ");
            int v;
            scanf("%d", &v);
            system("clear");
            switch (v)
            {
            case 1:
                foodcatering();
                break;
            case 2:
                passenger();
                break;
            case 0:
                system("clear");
                main();
                break;
            default:
                printf("\n\t\t\tyou entered wrong key!!!!");
                getchar();
                system("clear");
                main();
            }
        }
        if (p == 6)
        {
            system("clear");
            main();
        }
    }
}
//---------------------------------------cancel ticket function---------------------------------------------
void cancelticket()
{
    viewpassengers_read();
    char phone[20];
    int location = -1, e;
    printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
    printf("\n\n\t\t\t\t\t ********************Welcome To Electronic Railway Ticket Booking********************\n");
    printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
    time_t t;
    time(&t);
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t%s", ctime(&t));
    printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
    printf("\n\n\t\t\tenter phone number: ");
    scanf("%s", phone);
    for (e = 0; e < u; e++)
    {
        if (strcmp(phone, book[e].phone) == 0)
        {
            location = e;
            break;
        }
    }
    if (location == -1)
    {
        printf("\n\n\t\t\t<<<<<<<<<<<<<<Data Not Found>>>>>>>>>>>>>>>>> \n");
        getch();
        system("cls");
        passenger();
    }
    else
    {
        for (e = location; e < u; e++)
        {
            strcpy(book[e].date, book[e + 1].date);
            strcpy(book[e].train_number, book[e + 1].train_number);
            strcpy(book[e].first_name, book[e + 1].first_name);
            strcpy(book[e].phone, book[e + 1].phone);
            bookticket_write();
        }
        u--;
        bookticket_write();
        printf("\n\n\t\t\t<<<<<<<<<<<<<<<ticket cancelled successfully>>>>>>>>>>>>");
        getch();
        system("cls");
        passenger();
    }
}
//---------------------------------------foodcatering---------------------------------------------------
void foodcatering()
{
    int fd;
    system("clear");
    printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
    printf("\n\n\t\t\t\t\t ********************Welcome To Electronic Railway Ticket Booking********************\n");
    printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");

    time_t t;
    time(&t);
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t%s", ctime(&t));

    printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
    printf("\n\n\n\t\t\t[1] Beverages\n");
    printf("\n\n\t\t\t[2] Breakfast\n");
    printf("\n\n\t\t\t[3] Meals\n");
    printf("\n\n\t\t\t[4] A-la-Carte Items\n");
    printf("\n\n\t\t\t[5] PREVIOUS MENU \n");
    printf("\n\n\t\t\t[6] MAIN MENU\n");
    printf("\n\n\t\t\t\tEnter Your Choice:");
    scanf("%d", &fd);
    system("clear");
    switch (fd)
    {
    case 1:
        Beverages();
        break;
    case 2:
        Breakfast();
        break;
    case 3:
        Meals();
        break;
    case 4:
        AlaCarteItems();
        break;
    case 5:
        passenger();
        break;
    case 6:
        system("clear");
        main();
        break;
    default:
        printf("\n\t\t\tyou entered wrong key!!!!");
        getchar();
        system("clear");
        main();
    }
}
//--------------------------------------view passengers function----------------------------------------
void viewpassenger()
{
    int a, j;
    system("clear");
    printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
    printf("\n\n\t\t\t\t\t ********************Welcome To Electronic Railway Ticket Booking********************\n");
    printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
    time_t t;
    time(&t);
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t%s", ctime(&t));

    printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
    printf("\n\n\t\t\tTrain NO\t\tFIRST NAME\t\tPHONE\t\t\tDATE\t\tSEAT\t\tPNR\t\tSTATUS\n");
    for (j = 0; j < u; j++)
    {
        printf("\n\t\t\t%s\t\t\t%s\t\t\t%s\t\t%s\t%d\t\t%d\t\tconfirmed", book[j].train_number, book[j].first_name, book[j].phone, book[j].date, book[j].No_seats, book[j].pnr);
        book[j].No_seats++, book[j].pnr;
    }
    printf("\n\n\n\t\tEnter 1 to go back to previous menu or Enter 0 to go back to main menu");
    printf("\n\n\n\t\tENTER YOUR CHOICE: ");
    int v;
    scanf("%d", &v);
    system("clear");
    switch (v)
    {
    case 1:
        admin();
        break;
    case 0:
        system("clear");
        main();
        break;
    default:
        printf("\n\t\t\tyou entered wrong key!!!!");
        getchar();
        system("clear");
        main();
    }
}
//------------------------------------------book ticket-------------------------------------------------------------------------------------
void bookticket()
{
    int c, j, n, i, found = -1;
    char v, train_number[10];
    system("cls");
    aread();
    printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
    printf("\n\n\t\t\t\t\t ********************Welcome To Electronic Railway Ticket Booking********************\n");
    printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
    time_t t;
    time(&t);
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t%s", ctime(&t));
    printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
    printf("\n\n\t\t\thow many ticket do you want to buy: ");
    scanf("%d", &n);
    for (j = u; j < u + n; j++)
    {
        printf("\n\n\t\t\tEnter train number: ");
        scanf("%s", book[j].train_number);
        for (i = 0; i < k; i++)
        {
            if (strcmp(book[j].train_number, add[i].train_number) == 0)
            {
                if (add[i].No_seats == 0)
                {
                    printf("\n\n\t\t\tnot available seat");

                    getch();
                    system("cls");
                    main();
                }
                else
                {
                    found = 1;
                    printf("\n\t\t\tenter book %d no ticket: ", j + 1);
                    printf("\n\t\t\tenter date: ");
                    scanf("%s", book[j].date);
                    printf("\n\t\t\tenter your name: ");
                    scanf("%s", book[j].first_name);
                    printf("\n\t\t\tenter your phone number: ");
                    scanf("%s", book[j].phone);
                    printf("\n\t\t\tseat number : %d", add[i].No_seats);
                    book[j].No_seats = add[i].No_seats;
                    printf("\n\n\n\t\t\tPNR:%d", add[i].pnr);
                    book[j].pnr = add[i].pnr;
                    bookticket_write();
                    add[i].No_seats--;
                    add[i].pnr++;
                    awrite();
                }
            }
        }
        if (found == -1)
        {
            printf("\n\n\t\t\ttrain not found!!!");
            getch();
            system("cls");
            main();
        }
    }
    u = j;
    bookticket_write();
    printf("\n\n\n\t\t\tenter '2' for main menu 1 for previous menu& press any key to exit: ");
    scanf("%d", &c);
    if (c == 1)
    {
        system("cls");
        passenger();
    }
    if (c == 2)
    {
        system("cls");
        admin();
    }
    else
    {
        exit;
    }
}
//--------------------------------------add train function--------------------------------------------
void addtrain()
{
    system("clear");
    int ch;
    aread();
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
        scanf("%d", &add[i].No_seats);
        printf("\n\t\t\tenter price of sleeper seat: ");
        scanf("%s", add[i].Seat_price);
        printf("\n\t\t\tenter date of train: ");
        scanf("%s", add[i].date);
        printf("\n\t\t\tenter pnr sequence of train: ");
        scanf("%d", &add[i].pnr);
    }

    printf("\n\n\t\t\tconfirm train: (y=1/n=0):- ");
    scanf("%d", &ch);
    if (ch == 1)
    {
        awrite();
        k = i;
        awrite();
        system("clear");
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
    system("clear");
    switch (v)
    {
    case 1:
        admin();
        break;
    case 0:
        system("clear");
        main();
        break;
    default:
        printf("\n\t\t\tyou entered wrong key!!!!");
        getchar();
        system("clear");
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

    aread();
    char train[100];
    int location = -1, f;
    printf("\n\n\t\t\t\t\t\t\t\tenter train number: ");
    scanf("%s", train);
    for (f = 0; f < k; f++)
    {
        if (strcmp(train, add[f].train_number) == 0)
        {
            location = f;
            break;
        }
    }
    if (location == -1)
    {
        printf("\n\n\t\t\t\t\t\t\t\t\tTrain Number Not Found \n");
        getch();
        system("cls");
        admin();
    }
    else
    {
        for (f = location; f < k; f++)
        {

            strcpy(add[f].train_number, add[f + 1].train_number);
            strcpy(add[f].train_name, add[f + 1].train_name);
            awrite();
        }
        k--;
        awrite();
        printf("\n\n\t\t\t\t\t\t\t\tTrain has been deleted sucessfully");
        getch();
        system("cls");
        admin();
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
        getchar();
        system("clear");
        admin();
    }
    else
    {
        printf("\n\n\n\t\t\t\t\t\t\t\t Error! Entered password is wrong.");
        getchar();
        system("clear");
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
//------------------------------------------book ticket file start-----------------------------------------
void bookticket_write()
{
    FILE *booklist;
    booklist = fopen("booklist.txt", "w");
    fwrite(&book, sizeof(book), 1, booklist);
    fclose(booklist);

    FILE *booklistreport;
    booklistreport = fopen("booklistreport.txt", "w");
    fwrite(&u, sizeof(u), 1, booklistreport);
    fclose(booklistreport);
}
void viewpassengers_read()
{
    FILE *booklist;
    booklist = fopen("booklist.txt", "r");
    fread(&book, sizeof(book), 1, booklist);
    fclose(booklist);

    FILE *booklistreport;
    booklistreport = fopen("booklistreport.txt", "r");
    fread(&u, sizeof(u), 1, booklistreport);
    fclose(booklistreport);
}
//-------------------------------------bevarages-------------------------------------------
void Beverages()
{
    system("clear");
    printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
    printf("\n\n\t\t\t\t\t ********************Welcome To Electronic Railway Ticket Booking********************\n");
    printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");

    time_t t;
    time(&t);
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t%s", ctime(&t));

    printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
    printf("\n\n\n\t\t[1] Standard tea (150 ml) in disposable cups of 170 ml capacity                       Rs.5");
    printf("\n\n\n\t\t[2] Tea (with tea bag) (150 ml) in disposable cups of 170 ml capacity                 Rs.10");
    printf("\n\n\n\t\t[3] Coffee using instant Coffee powder (150 ml) in disposable cups of 170 ml capacity Rs.10");
    printf("\n\n\n\t\tEnter 1 to proceed to order or 2 to go back to previous menu or Enter 0 to go back to main menu");
    printf("\n\n\n\t\tENTER YOUR CHOICE: ");
    int v;
    scanf("%d", &v);
    system("clear");
    switch (v)
    {
    case 1:
        foodbook();
        break;
    case 2:
        foodcatering();
        break;
    case 0:
        system("clear");
        main();
        break;
    default:
        printf("\n\t\t\tyou entered wrong key!!!!");
        getchar();
        system("clear");
        main();
    }
}
//----------------------------------------Breakfast-------------------------
void Breakfast()
{
    system("clear");
    printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
    printf("\n\n\t\t\t\t\t ********************Welcome To Electronic Railway Ticket Booking********************\n");
    printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");

    time_t t;
    time(&t);
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t%s", ctime(&t));

    printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
    printf("\n\n\n\t\t[1]Veg Break fast (Cutlet) =Bread Slice (2nos)50 gms,Veg cutlet (2nos) 100 gms,Butter in blister pack 8gms,Tomato ketchup in sachets(1nos)12gms,Casserole 1,Napkin 1,Disposable spoon1.        Rs.35");
    printf("\n\n\n\t\t[2]Veg Break fast (Idli & Vada) =Idli (2nos) 100gms,Vada (2nos) 60 gms,Chutney in disposable cup 50 gms,Casserole 1,Napkin 1, Disposable spoon 1.                                               Rs.35");
    printf("\n\n\n\t\t[3]Veg Break fast (Upma & Vada) = Upma 100gms,Vada (2nos) 60 gms,,Chutney in disposable cup 50 gms,Casserole 1,Napkin 1, Disposable spoon 1.                                                    Rs.35");
    printf("\n\n\n\t\tEnter 1 to proceed to order or 2 to go back to previous menu or Enter 0 to go back to main menu");
    printf("\n\n\n\t\tENTER YOUR CHOICE: ");
    int v;
    scanf("%d", &v);
    system("clear");
    switch (v)
    {
    case 1:
        foodbook();
        break;
    case 2:
        foodcatering();
        break;
    case 0:
        system("clear");
        main();
        break;
    default:
        printf("\n\t\t\tyou entered wrong key!!!!");
        getchar();
        system("clear");
        main();
    }
}
//---------------------------------------------meals-----------------
void Meals()
{
    system("clear");
    printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
    printf("\n\n\t\t\t\t\t ********************Welcome To Electronic Railway Ticket Booking********************\n");
    printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");

    time_t t;
    time(&t);
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t%s", ctime(&t));

    printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
    printf("\n\n\n\t\t[1] Veg Meal (Standard Casserole)= Rice Plain 150 gms,2Parathas/4Chapatis in wrappers 100gms,Dal/sambar(Thick) 150 gms,Mix Veg (Seasonal) 100gms, Curd 80 gms,Pickly in sachet 12 gms,Casserole 1,Napkin 1,Disposable Spoon 1.                                                         Rs.70");
    printf("\n\n\n\t\t[2] Non-Veg Meal Standard Casserole (Egg Curry with Rice) =Rice Plain 150 gms,2Parathas/4Chapatis in wrappers 100gms,Dal/sambar(Thick) 150 gms,Two Egg Curry 150 gms,Curd 80 gms,Pickly in sachet 12 gms,Casserole 1,Napkin 1,Disposable Spoon 1.                                       Rs.80");
    printf("\n\n\n\t\t[3] Non-Veg Meal Standard Casserole (Chicken Curry with Rice) =Rice Plain 150 gms,2Parathas/4Chapatis in wrappers 100gms,Dal/sambar(Thick) 150 gms,Chicken Curry (60 gms boneless chicken & Gravy 90 gms),Curd 80 gms,Pickly in sachet 12 gms,Casserole 1,Napkin 1,Disposable Spoon 1. Rs.120");
    printf("\n\n\n\t\tEnter 1 to proceed to order or 2 to go back to previous menu or Enter 0 to go back to main menu");
    printf("\n\n\n\t\tENTER YOUR CHOICE: ");
    int v;
    scanf("%d", &v);
    system("clear");
    switch (v)
    {
    case 1:
        foodbook();
        break;
    case 2:
        foodcatering();
        break;
    case 0:
        system("clear");
        main();
        break;
    default:
        printf("\n\t\t\tyou entered wrong key!!!!");
        getchar();
        system("clear");
        main();
    }
}
//----------------------------------------AlaCarteItems----------
void AlaCarteItems()
{
    system("clear");
    printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
    printf("\n\n\t\t\t\t\t ********************Welcome To Electronic Railway Ticket Booking********************\n");
    printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");

    time_t t;
    time(&t);
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t%s", ctime(&t));

    printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
    printf("\n\n\n\t\t[1] Samosa- 2X50 gms Tomato Sauce Sachet- 10-15gms Packed in butter paper envelop                                                          Rs.20");
    printf("\n\n\n\t\t[2] Kachori- 2X50 gms Tomato Sauce Sachet- 10-15gms Packed in butter paper envelop                                                         Rs.20");
    printf("\n\n\n\t\t[3] Packed Milk of approved brand -200 ml Sugar Sachet- 5 gms Milk may be served cold, room temperature or hot as desired by the passenger Rs.35");
    printf("\n\n\n\t\tEnter 1 to proceed to order or 2 to go back to previous menu or Enter 0 to go back to main menu");
    printf("\n\n\n\t\tENTER YOUR CHOICE: ");
    int v;
    scanf("%d", &v);
    system("clear");
    switch (v)
    {
    case 1:
        foodbook();
        break;
    case 2:
        foodcatering();
        break;
    case 0:
        system("clear");
        main();
        break;
    default:
        printf("\n\t\t\tyou entered wrong key!!!!");
        getchar();
        system("clear");
        main();
    }
}
//---------------------------------foodbook-------------------------------
void foodbook()
{
    system("clear");
    printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
    printf("\n\n\t\t\t\t\t ********************Welcome To Electronic Railway Ticket Booking********************\n");
    printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");

    time_t t;
    time(&t);
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t%s", ctime(&t));
    int fdb, vie;
    printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
    printf("\n\n\n\t\tENTER YOUR CHOICE: ");
    scanf("%d", &fdb);
    if (fdb == 1)
    {
        printf("\n\n\n\t\tYou Have Successfully Ordered The Food Please Pay The Payment At The Time Of Delivery");
        srand(time(0));

        for (int i = 0; i < 1; i++)
            printf(" Your Token Number=%d ", rand());
        printf("\n\n\n\t\tEnter 1 to go back to previous menu or Enter 0 to go back to main menu");
        printf("\n\n\n\t\tENTER YOUR CHOICE: ");
        scanf("%d", &vie);
        system("clear");
        switch (vie)
        {
        case 1:
            foodcatering();
            break;
        case 0:
            system("clear");
            passenger();
            break;
        default:
            printf("\n\t\t\tyou entered wrong key!!!!");
            getchar();
            system("clear");
            main();
        }
    }
    if (fdb == 2)
    {
        printf("\n\n\n\t\tYou Have Successfully Ordered The Food Please Pay The Payment At The Time Of Delivery");
        srand(time(0));

        for (int i = 0; i < 2; i++)
            printf(" Your Token Number=%d ", rand());
            printf("\n\n\n\t\tEnter 1 to go back to previous menu or Enter 0 to go back to main menu");
        printf("\n\n\n\t\tENTER YOUR CHOICE: ");
        scanf("%d", &vie);
        system("clear");
        switch (vie)
        {
        case 1:
            foodcatering();
            break;
        case 0:
            system("clear");
            passenger();
            break;
        default:
            printf("\n\t\t\tyou entered wrong key!!!!");
            getchar();
            system("clear");
            main();
        }
    }
    if (fdb == 3)
    {
        printf("\n\n\n\t\tYou Have Successfully Ordered The Food Please Pay The Payment At The Time Of Delivery");
        srand(time(0));

        for (int i = 0; i < 3; i++)
            printf(" Your Token Number=%d ", rand());
            printf("\n\n\n\t\tEnter 1 to go back to previous menu or Enter 0 to go back to main menu");
        printf("\n\n\n\t\tENTER YOUR CHOICE: ");
        scanf("%d", &vie);
        system("clear");
        switch (vie)
        {
        case 1:
            foodcatering();
            break;
        case 0:
            system("clear");
            passenger();
            break;
        default:
            printf("\n\t\t\tyou entered wrong key!!!!");
            getchar();
            system("clear");
            main();
        }
    }
    printf("\n\n\n\t\tENTER YOUR CHOICE: ");
    int v;
    scanf("%d", &v);
    system("clear");
    switch (v)
    {
    case 1:
        foodcatering();
        break;
    case 0:
        system("clear");
        main();
        break;
    default:
        printf("\n\t\t\tyou entered wrong key!!!!");
        getchar();
        system("clear");
        main();
    }
}
//----------------------------------status-----------------------
void status()
{
    int a, j, v;
    system("clear");
    printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
    printf("\n\n\t\t\t\t\t ********************Welcome To Electronic Railway Ticket Booking********************\n");
    printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
    time_t t;
    time(&t);
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t%s", ctime(&t));
    printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
    printf("\n\n\t\t\tTrain NO\t\tFIRST NAME\t\tPHONE\t\t\tDATE\t\tSEAT\t\tPNR\t\tSTATUS\n");
    for (j = 0; j < u; j++)
    {
        printf("\n\t\t\t%s\t\t\t%s\t\t\t%s\t\t%s\t%d\t\t%d\t\tconfirmed", book[j].train_number, book[j].first_name, book[j].phone, book[j].date, book[j].No_seats, book[j].pnr);
        book[j].No_seats++, book[j].pnr;
    }
    printf("\n\n\n\t\tEnter 1 to go back to previous menu or Enter 0 to go back to main menu");
    printf("\n\n\n\t\tENTER YOUR CHOICE: ");
    scanf("%d", &v);
    system("clear");
    switch (v)
    {
    case 1:
        passenger();
        break;
    case 0:
        system("clear");
        main();
        break;
    default:
        printf("\n\t\t\tyou entered wrong key!!!!");
        getchar();
        system("clear");
        main();
    }
}