//Write a program to make the last digit of a number stored in a variable as zero.
//(Example - if x=2345 then make it x=2340)

#include<stdio.h>

int main()
{
    int iNo = 0;

    printf("Enter number\n");
    scanf("%d",&iNo);

    iNo = iNo / 10;

    iNo = iNo * 10;

    printf("%d",iNo);

    return 0;
}