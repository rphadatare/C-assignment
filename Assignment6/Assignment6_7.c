/*
Write a program to count digits in a given number
*/

#include<stdio.h>

int main()
{
    int iNo = 0;
    int Count = 0;

    printf("Enter number\n");
    scanf("%d",&iNo);

    while(iNo!=0)
    {
        iNo = iNo / 10;
        Count++;
    }
    
    printf("Digits in number a number\n%d",Count);

    return 0;
}