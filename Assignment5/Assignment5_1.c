//Write a program to print iNeuron N times on the screen

#include<stdio.h>

int main()
{
    int iNo = 5,i = 0;

    printf("Enter the number\n");
    scanf("%d",&iNo);
    
    for(i=1; i<=iNo ; i++)
    {
        printf("iNeuron\n");
    }

    printf("\n");
}