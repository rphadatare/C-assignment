//Write a program to check whether a given number is divisible by 3 and divisible by 2.

#include<stdio.h>

int main()
{
    int iNo = 0;

    printf("Enter number\n");
    scanf("%d",&iNo);

    if((iNo%2==0)&&(iNo%3==0))
    {
        printf("Number is divisible by 2 and 3");
    }
    else 
    {
        printf("Number is not divisible by 2and 3");
    }

    return 0;
}