/*
Write a program to print the first 10 even natural numbers in reverse order
*/

#include<stdio.h>

int main()
{
    int i = 1;

    printf("first 10 even natural numbers in reverse order\n");
    for(i=10;i>=1;i--)
    {
        printf("%d\t",2 * i);
    }
    
    return 0;
}