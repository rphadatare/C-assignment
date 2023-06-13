/*
Write a program to print a table of 5.
*/

#include<stdio.h>

int main()
{
    int iNo = 5;
    int i,Mult = 1 ;

    printf("Enter number\n");
    scanf("%d",&iNo);

    printf("Table of %d\n",iNo);
    for(i=1;i<=10;i++)
    {
        Mult = i * iNo;
        printf("%d X %d = %d\n",i,iNo,Mult);
    }

    return 0;
}