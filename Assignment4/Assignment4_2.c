//Write a program to print the first 10 natural numbers.

#include<stdio.h>

int main()
{
    int iNo = 10,i = 1;

    printf("Natural numbers are:\n");
    for(i=1; i<=iNo ; i++)
    {
        printf("%d\n",i);
    }

    return 0;
}