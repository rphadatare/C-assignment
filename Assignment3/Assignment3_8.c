// Write a program to check whether a given year is a leap year or not.

#include<stdio.h>

int main()
{
    int year = 0;

    printf("Enter year\n");
    scanf("%d",&year);

    if(((year%4==0)&&(year%100!=0))||(year%400==0)) 
    {
        printf("%d is leap year\n",year);
    }
    else
    {
         printf("%d is not leap year\n",year);
    }
    
    return 0;
}