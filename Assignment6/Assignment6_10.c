/*
Write a program to reverse a given number
*/

#include<stdio.h>

int main()
{
    int iNo = 0;
    int Reverse_No = 0;
    int Digit = 0;

    printf("Enter number\n");
    scanf("%d",&iNo);

    while(iNo != 0)
    {
        Digit = iNo % 10;
        Reverse_No = Reverse_No*10 + Digit;
        iNo = iNo/10;
    }

    printf("%d",Reverse_No);


}