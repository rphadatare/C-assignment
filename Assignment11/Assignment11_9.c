/*
Write a program in C to find the square of any number using the function.
*/

#include<stdio.h>

int Square(int iNo)
{
    int iSquare = 0;

    iSquare = iNo * iNo;

    return iSquare;
}

int main()
{
    int iValue = 0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);

    int iRet = Square(iValue);
    printf("Square of %d is\n%d",iValue,iRet);

    return 0;
}