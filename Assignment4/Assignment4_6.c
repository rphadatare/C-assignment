/*
Write a program to print the first 10 even natural numbers
*/

#include<stdio.h>

int main()
{
    int i = 1;

    printf("first 10 even natural numbers\n");
    for(i=1;i<=10;i++)
    {
       printf("%d\t",2 * i);
    }
    
    return 0;
}