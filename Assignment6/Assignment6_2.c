/*
Write a program to calculate sum of first N even natural numbers
*/

#include<stdio.h>

int main()
{
    int iNo = 0;
    int i = 2,Sum = 0;

    printf("Enter number\n");
    scanf("%d",&iNo);

    for(i=1; i<=iNo; i++)
    {
        Sum = Sum + 2;
    }
    printf("\nSum of even natural number %d\n",Sum);

    return 0;
}