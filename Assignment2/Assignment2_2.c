//Write a program to print a given number without its last digit.

#include<stdio.h>

int main()
{
    int iNo = 0;

    printf("Enter the number\n");
    scanf("%d",&iNo);

    iNo = iNo/10;

    printf("Number without last digit \n %d",iNo);

}