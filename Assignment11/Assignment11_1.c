/*
Write a function to calculate LCM of two numbers. (TSRS)
*/

#include<stdio.h>

int LCM(int iNo1,int iNo2)
{
    int i = 1,HCF = 0,lcm = 0;

    for(i = 1;i<=iNo1 && i<=iNo2 ; i++)
    {
        if((iNo1%i==0) && (iNo2%i==0))
        {
            HCF = i;
            printf("%d\n",HCF);
        }
    }
    printf("\n");
    lcm = (iNo1 * iNo2)/ HCF;

    return lcm;
}

int main()
{
    int iValue1 = 0,iValue2 = 0;
    int iRet = 0;

    printf("Enter two numbers\n");
    scanf("%d %d",&iValue1,&iValue2);

    iRet = LCM(iValue1,iValue2);
    printf("\nLCM of %d and %d is \n%d",iValue1,iValue2,iRet);

    return 0;
}