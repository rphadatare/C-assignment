/*
Write a program which takes the day number of a week and displays a unique
greeting message for the day.
*/

#include<stdio.h>

int main()
{
    int iNo = 0;

    printf("Enter Day Number\n");
    scanf("%d",&iNo);

    switch (iNo)
    {
        case 1:
                printf("Monday\n");
                printf("Welcome\n");
                break;
        case 2:
                printf("Tuesday\n");
                printf("Hello\n");
                break;
        
        case 3:
                printf("Wednesday\n");
                printf("Welcome\n");
                break;
        
        case 4:
                printf("Thursday\n");
                printf("Have a nice day\n");
                break;

        case 5:
                printf("Friday\n");
                printf("Hello\n");
                break;

         case 6:
                printf("Saturday\n");
                printf("Have a nice day\n");
                break;

         case 7:
                printf("Sunday\n");
                printf("Enjoy holyday\n");
                break;
    
        default:
        printf("Invalid Input");
                break;
    }
}