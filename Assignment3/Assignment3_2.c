//Write a program to check whether a given number is divisible by 5 or not

#include<stdio.h>

int main()
{
    int iNo = 0;

    printf("Enter Number\n");
    scanf("%d",&iNo);

    if((iNo % 5)== 0)
    {
        printf("Number is divisible by 5\n");
    }
    else
    {
        printf("Number is not divisible by 5\n");
    }

    return 0;
}