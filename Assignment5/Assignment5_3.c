/*
Write a program to print the first N natural numbers in reverse order
*/

#include<stdio.h>

int main()
{
    int iNo = 0,i = 1;

    printf("Enter the number\n");
    scanf("%d",&iNo);

    while(iNo!=0)
    {
        printf("%d\t",iNo);
        iNo--;
    }

    return 0;
}