#include <stdio.h>
void main()
{
    printf("\n A program for accepting student data");
    char s;
    int stno, m1, m2, m3, m4, m5, total;
    float average;
    printf("\nstudent number=");
    scanf("%d", &stno);
    printf("\nstudent name=");
    scanf("%c", &s);
    printf("\nSubject 1=");
    scanf("%d", &m1);
    printf("\nSubject 2=");
    scanf("%d", &m2);
    printf("\nSubject 3=");
    scanf("%d", &m3);
    printf("\nSubject 4=");
    scanf("%d", &m4);
    printf("\nSubject 5=");
    scanf("%d", &m5);
    total = m1 + m2 + m3 + m4 + m5;
    average = (total) / 5;
    printf("\nTotal=%d", total);
    printf("\nAverage=%f", average);
    getch();
}
