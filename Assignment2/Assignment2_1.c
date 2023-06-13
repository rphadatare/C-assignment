//Write a program to print unit digit of a given number

#include<stdio.h>

int main()
{
    int iNo = 0 , iUnit = 0;

    printf("Enter the number\n");
    scanf("%d",&iNo);

    iUnit = iNo%10;

    printf("Unit number is %d",iUnit);

}