//Write a program to check whether a given number is an even number or an odd number without using % operator

#include<stdio.h>

int main()
{
    int iNo = 0;

    printf("Enter Number\n");
    scanf("%d",&iNo);

    if((iNo & 1)== 0)
    {
        printf("Number is even\n");
    }
    else
    {
        printf("Number is odd\n");
    }

    return 0;
}