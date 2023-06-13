/*
Write a function to calculate the factorial of a number. (TSRS)
*/

#include<stdio.h>

int Factorial(int iValue)
{
    int i = 1,
    iFact = 1;

    for(i = iValue; i>=1 ; i--)
    {
        iFact = iFact * i;
    }

    return iFact;
    
}
int main()
{
    int iNo = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iNo);

    iRet=Factorial(iNo);
    printf("Factorial of %d = %d",iNo,iRet);

    return 0;
}