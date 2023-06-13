//Write a program to input a three digit number and display the sum of the digits.

#include<stdio.h>

int main()
{
    int iNo1=0,iNo2=0,iNo3=0;

    printf("Enter the numbers\n"); 
    scanf(" %d %d %d",&iNo1,&iNo2,&iNo3);
    
    int Addition;

    Addition = iNo1+iNo2+iNo3;
    printf("Addition of two numbers %d\n",Addition);

    return 0;
}