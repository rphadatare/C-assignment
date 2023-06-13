/*
Write a program to print the first N odd natural numbers in reverse order.
*/
#include<stdio.h>

int main()
{
   int iNo= 0, i = 1;

    printf("Enter the number\n");
    scanf("%d",&iNo);

    printf("first %d odd natural numbers in reverse order\n",iNo);
    for(i=iNo;i>=1;i--)
    {
        printf("%d\n",2 * i -1);
    }
    
    return 0;
}