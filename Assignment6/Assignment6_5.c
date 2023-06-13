/*
Write a program to calculate sum of cubes of first N natural numbers
*/

#include<stdio.h>

int main()
{
    int iNo = 0;
    int i = 1,Sum = 0;

    printf("Enter number\n");
    scanf("%d",&iNo);

    while(iNo!=0)
    {
        Sum = Sum + (iNo * iNo * iNo);
        iNo--;
    }
    printf("Sum of cube natural number\n%d",Sum);

    return 0;
}