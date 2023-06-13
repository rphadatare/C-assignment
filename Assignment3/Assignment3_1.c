//Write a program to check whether a given number is positive or non positive.

#include<stdio.h>

int main()
{
    int iNo = 0;

    printf("Enter Number\n");
    scanf("%d",&iNo);

    if(iNo < 0)
    {
        printf("Number is negetive\n");
    }
    else
    {
        printf("Number is positive\n");
    }

    return 0;
}