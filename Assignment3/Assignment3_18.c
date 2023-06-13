/*

Write a program which takes the month number as an input and display number of
days in that month

*/

#include<stdio.h>

int main()
{
    int Month = 0;

    printf("Please enter month number in between 1 to 12\n");
    scanf("%d",&Month);

    if(Month==1)
    {
        printf("January days are 31\n");
    }
    else if(Month==2)
    {
        printf("February days are 28/29\n");
    }
    else if(Month==3)
    {
        printf("March days are 31\n");
    }
    else if(Month==4)
    {
        printf("April days are 30\n");
    }
    else if(Month==5)
    {
        printf("May days are 31\n");
    }
    else if(Month==6)
    {
        printf("June days are 30\n");
    }
    else if(Month==7)
    {
        printf("July days are 31\n");
    }
    else if(Month==8)
    {
        printf("August days are 31\n");
    }
    else if(Month==9)
    {
        printf("September days are 30\n");
    }
    else if(Month==10)
    {
        printf("October days are 31\n");
    }
    else if(Month==11)
    {
        printf("November days are 30\n");
    }
    else if(Month==12)
    {
        printf("December days are 31\n");
    }
    else if(Month>12)
    {
        printf("Invalid Input of Month\n");
    }
    return 0;  
}