#include<stdio.h>
#include<conio.h>
int main()
{
    int year;

    printf("Enter a year of 4 digits: ");
    scanf("%d", &year);

    if((year%400==0) || (year%100!=0) && (year%4==0))
    printf("\n %d is a Leap Year",year);

    getch();
    return 0;
}