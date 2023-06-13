/*
Write a program to print the first N odd natural numbers
*/

#include<stdio.h>

int main()
{
    int iNo= 0, i = 1;

    printf("Enter the number\n");
    scanf("%d",&iNo);


    printf("first %d odd natural numbers\n",iNo);
    for(i=1;i<=iNo;i++)
    {
        printf("%d\n",2 * i -1);
    }
    
    return 0;
}