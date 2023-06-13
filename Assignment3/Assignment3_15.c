//Write a program to check whether a given number is positive, negative or zero.

#include<stdio.h>

int main()
{
    int iNo = 0;

    printf("Enter number\n");
    scanf("%d",&iNo);

    if(iNo==0)
    {
        printf("Number is zero\n");
    }
    else if(iNo<0)
    {
        printf("Number is negetive\n");
    }
    else if(iNo>0)
    {
        printf("Number is positive\n");
    }

    return 0;
}