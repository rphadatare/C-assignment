/*
Program to Convert even number into its upper nearest odd number Switch Statement.
*/

#include<stdio.h>

int main()
{
    int iNo = 0;

    printf("Enter number \n");
    scanf("%d",&iNo);

    switch(iNo%2==0)
    {
        case 1:
            iNo = iNo + 1;
            printf("Next odd number is %d",iNo);
            break;

        case 0:
            iNo = iNo + 1;
            printf("Next even number is %d",iNo);
            break;
    }
}