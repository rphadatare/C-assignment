/*
Write a program to calculate factorial of a number
*/

#include<stdio.h>

int main()
{
    int iNo = 0;
    int i = 1,iFact = 1;

    printf("Enter number\n");
    scanf("%d",&iNo);

    while(iNo!=0)
    {
        iFact = iFact * iNo;
        iNo--;
    }
    printf("Factorial of a number\n%d",iFact);

    return 0;
}