/*
Program to check whether a year is a leap year or not. Using switch statement
*/

#include<stdio.h>

int main()
{
    int year = 0;
    int y;

    printf("Enter year\n");
    scanf("%d",&year);

    y = year%400==0||year%100==0||year%4==0;

    switch(y)
    {
        case 1:
        printf("%d is leap year\n",year);
        break;

        case 0:
        printf("%d is not leap year\n",year);
        break;

    }
}