//Write a program to print the first N natural numbers.

#include<stdio.h>

int main()
{
    int iNo = 0,i = 1;

    printf("Enter the number\n");
    scanf("%d",&iNo);

    printf("Natural numbers are:\n");
    for(i=1; i<=iNo ; i++)
    {
        printf("%d\n",i);
    }

    return 0;
}