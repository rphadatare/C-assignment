/*
Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the function.
*/

#include<stdio.h>

int Sum_of_Series(int iNo)
{
    int i = 1,iFact = 1,Sum = 0;

    

        for(i = 1;i<=iNo;i++)
        {
            iFact = iFact * i;
        }
    return iFact;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = Sum_of_Series(iValue);
    printf("Sum of series of number %d\n%d",iValue,iRet);

    return 0;
}