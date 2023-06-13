/*
Write a program to print squares of the first N natural numbers
*/

#include<stdio.h>

int main()
{
    int iNo = 0;
    int i,SqureRoot=1;

    
    printf("Enter the number\n");
    scanf("%d",&iNo);

    printf("Squares of the first %d natural numbers\n",iNo);
    for(i=1;i<=iNo;i++)
    {
        SqureRoot = i * i;
        printf("%d\t",SqureRoot);
    }
    
    return 0;
}