/*
Write a program to calculate sum of first N odd natural numbers
*/

#include<stdio.h>

int main()
{
    int iNo = 0;
    int i = 1,Sum = 0;

    printf("Enter number\n");
    scanf("%d",&iNo);

    for(i=1; i<=iNo; i++)
    {
        Sum = Sum + (2*i-1);
    }
    printf("Sum of odd natural number\n%d",Sum);

    return 0;
}