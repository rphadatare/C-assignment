/*
Write a program to check whether a given number is a Prime number or not
*/

#include<stdio.h>

int main()
{
    int iNo = 0;
    int i = 2,Count = 0;

    printf("Enter number\n");
    scanf("%d",&iNo);

    if(iNo<=1)
    {
        printf("Invalid Input");
        return 0;
    }

    for(i = 2; i<iNo/2;i++)
    {
        if((iNo%i)==0)
        {
            Count++;
        }
    }

    if(Count==0)
    {
        printf("number is a Prime number");
    }
    else
    {
        printf("number is not a Prime number");
    }

    return 0;
}