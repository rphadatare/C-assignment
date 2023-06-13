/*
Write a program to calculate LCM of two numbers
*/


#include<stdio.h>

int main()
{
    int iNo1 = 0,iNo2 = 0;
    int i = 1,j = 1,LCM = 0,HCF = 0;

    printf("Enter two numbers\n");
    scanf("%d %d",&iNo1,&iNo2);

    for(i=1;i<=iNo1/2 && i<=iNo2/2;i++)
    {
        if(iNo1%i==0 && iNo2%i==0)
        {
            HCF = i;
        }
    }
    printf("HCF = %d\n",HCF);
    LCM = (iNo1*iNo2)/HCF;

    printf("LCM of %d and %d is\n%d",iNo1,iNo2,LCM);

    return 0;
}