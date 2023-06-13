//Write a program to check whether the given number is even or odd using a bitwise operator.

#include<stdio.h>

int main()
{
    int iNo = 0;

    printf("Enter number\n");
    scanf("%d",&iNo);

    if(iNo & 1)
    {
        printf("Number is Odd");
    }
    else
    {
        printf("Number is Even");
    }

    return 0;
}