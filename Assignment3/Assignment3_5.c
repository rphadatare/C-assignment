//Write a program to check whether a given number is a three digit number or not.

#include<stdio.h>

int main()
{
    int iNo = 0;

    printf("Enter Number\n");
    scanf("%d",&iNo);

    if((iNo > 99)&&(iNo < 1000))
    {
         printf("Number is 3 digits number\n");
    }
    else
    {
        printf("Number is not 3 digits number\n");
    }

    return 0;
}