/*
Write a program to check whether two given numbers are co-prime numbers or not
*/

#include<stdio.h>

int main()
{
    int iNo1 = 0,iNo2 = 0;
    int i = 1,Count = 0,HCF = 0;

    printf("Enter Numbers\n");
    scanf("%d %d",&iNo1,&iNo2);

    for(i = 1;i<iNo1 && i<iNo2; i++)
    {
        if(iNo1%i==0 && iNo2%i==0)
        {
            HCF = i;
        }
    }
    
    if(HCF==1)
    {
        printf("Number is Co-prime");
    }
    else
    {
        printf("Number is not Co-prime");
    }
    return 0;
}