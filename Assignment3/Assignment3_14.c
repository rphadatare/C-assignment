//Write a program to check whether a given number is divisible by 7 or divisible by 3.

#include<stdio.h>

int main()
{
    int iNo = 0;

    printf("Enter number\n");
    scanf("%d",&iNo);

    if(iNo % 3 == 0)
    {
        printf("Number is divisible by 3");
    }
    else if(iNo % 7 == 0)
    {
        printf("Number is divisible by 7");
    }

    return 0;
}