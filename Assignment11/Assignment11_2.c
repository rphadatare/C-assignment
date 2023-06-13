/*
Write a function to calculate HCF of two numbers. (TSRS)
*/

#include<stdio.h>

int HCF(int iNo1,int iNo2)
{
    int i = 1,HCF = 0;

    for(i = 1;i<=iNo1 && i<=iNo2 ; i++)
    {
        if((iNo1%i==0) && (iNo2%i==0))
        {
            HCF = i;
        }
    }

    return HCF;
}

int main()
{
    int iValue1 = 0,iValue2 = 0;
    int iRet = 0;

    printf("Enter two numbers\n");
    scanf("%d %d",&iValue1,&iValue2);

    iRet = HCF(iValue1,iValue2);
    printf("LCM of %d and %d is \n%d",iValue1,iValue2,iRet);

    return 0;
}