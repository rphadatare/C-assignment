/*
Write a program to input a number from the user and also input a digit. Append a
digit in the number and print the resulting number. 
(Example - number=234 and digit=9 then the resulting number is 2349
*/

#include<stdio.h>

int main()
{
    int iNo1 = 0;
    int iNo2 = 0;

    printf("Enter number\n");
    scanf("%d%d",&iNo1,&iNo2);

    iNo1 = iNo1 * 10;

    iNo2 = iNo1 + iNo2;

    printf("Append value is\n%d",iNo2);

    return 0;
}