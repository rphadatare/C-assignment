/*
Write a program to print squares of the first 10 natural numbers
*/

#include<stdio.h>

int main()
{
    int iNo = 10;
    int i,SqureRoot=1;

    printf("Squares of the first 10 natural numbers\n");
    for(i=1;i<=10;i++)
    {
        SqureRoot = i * i;
        printf("%d\t",SqureRoot);
    }
    
    return 0;
}

