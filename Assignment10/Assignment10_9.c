/*
Write a function to check whether a given number contains a given digit or not.
(TSRS)
*/

#include<stdio.h>
#include<stdbool.h>
#define TRUE 1;
#define FALSE 0;

int Find_Digit(int iValue,int digit)
{
    int d = 0,i = 0;

    while(iValue > 0)
    {
        d = iValue % 10;
        if(d == digit)
        {
            return 1;
            break;
        }
        iValue = iValue / 10;
    }
}

int main()
{
    int iNo = 0,D = 0;
    bool bRet;

    printf("Enter numbers\n");
    scanf("%d %d",&iNo,&D);

    bRet = Find_Digit(iNo,D);
    if(bRet==1)
    {
         printf("%d is present\n");
    }
    else
    {
        printf("%d is not present\n");
    }

    return 0;
}