/*
Program to convert a positive number into a negative number and negative number into a positive number using a switch statement.
*/

#include<stdio.h>

int main()
{
    int iNo = 0;
    int choice;
    
    while(1)
    {
        printf("1 . Convert Positive to Negetive number\n");
        printf("2 . Convert Negetive to Positive number\n");
        printf("3 . Exit\n");

        printf("Enter your choice\n");
        scanf("%d",&choice);


        switch(choice)
        {
            case 1:
                printf("Enter Positive number \n");
                scanf("%d",&iNo);
                iNo = iNo * (-1);
                printf("Negetive Number is %d\n",iNo);
                break;

            case 2:
                printf("Enter Negetive number \n");
                scanf("%d",&iNo);
                iNo = iNo * (-1);
                printf("Positive Number is %d\n",iNo);
                break;

            case 3:
                return 0;
                break;
        }
    }
}