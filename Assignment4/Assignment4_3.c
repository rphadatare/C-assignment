/*
Write a program to print the first 10 natural numbers in reverse order
*/

#include<stdio.h>

int main()
{
    int iNo = 10,i = 1;

    while(iNo!=0)
    {
        printf("%d\t",iNo);
        iNo--;
    }

    return 0;
}