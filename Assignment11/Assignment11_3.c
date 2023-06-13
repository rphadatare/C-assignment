/*Write a function to check whether a given number is Prime or not. (TSRS)*/

#include<stdio.h>
#include<stdbool.h>
#define TRUE 1;
#define FALSE 0;

bool Check_Prime(int iNo)
{
    int i = 0,iCount = 0;
    for(i = 2; i<= iNo ;i++)
    {
        if(iNo%i==0)
        {
            iCount++;
        }
    }
    if(iCount==1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int iValue = 0;
    bool bRet;

    printf("Enter number\n");
    scanf("%d",&iValue);

    bRet = Check_Prime(iValue);
    if(bRet==1)
    {
        printf("%d is prime number\n",iValue);
    }
    else
    {
        printf("%d is not prime number\n",iValue);
    }

    return 0;
}