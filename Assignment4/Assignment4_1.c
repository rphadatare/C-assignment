//Write a program to print iNeuron 5 times on the screen

#include<stdio.h>

int main()
{
    int iNo = 5,i = 0;

    for(i=1; i<=iNo ; i++)
    {
        printf("iNeuron\n");
    }

    printf("\n");

    while(iNo!=0)
    {
        printf("iNeuron\n");
        iNo--;
    }
    return 0;
}