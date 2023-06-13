/*
Write a program to calculate sum of first N natural numbers
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
        Sum = Sum + i;
    }
    printf("Sum of natural number %d\n",Sum);

    return 0;
}