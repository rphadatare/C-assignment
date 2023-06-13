/* 
Write a function to check whether a given number is even or odd. 
Return 1 if the number is even, otherwise return 0. (TSRS)
*/

#include<stdio.h>
#include<stdbool.h>

int Check(int iNo)
{
    if(iNo%2==0)
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
    bool a ;

    printf("Enter any number\n");
    scanf("%d",&iValue);

    a = Check(iValue);
    if(a==1)
    {
        printf("Number is even\n");
    }
    else
    {
        printf("Number is odd\n");
    }

    return 0;
}
