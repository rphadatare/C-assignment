//Write a program to swap values of two int variables without using a third variable.

#include<stdio.h>

int main()
{
    int iNo1=0,iNo2=0;

    printf("Enter the numbers\n"); 
    scanf(" %d %d",&iNo1,&iNo2);
    printf("Numbers\n iNo1 = %d\n iNo2 = %d ",iNo1,iNo2);

    iNo1 = iNo1+iNo2;
    iNo2 = iNo1 - iNo2; 
    iNo1 = iNo1 - iNo2;
    printf("\nSwap numbers\n iNo1 = %d\n iNo2 = %d ",iNo1,iNo2);

    return 0;
}