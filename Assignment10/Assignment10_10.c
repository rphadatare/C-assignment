/*
Write a function to print all prime factors of a given number. For example, if the
number is 36 then your result should be 2, 2, 3, 3. (TSRN)
*/

#include<stdio.h>

void Prime_Factors(int iNo)
{
    int i = 2;

    while(iNo>1)
    {
        if(iNo % i == 0)
        {
            printf("%d,",i);
            iNo = iNo / i;
            if(iNo%i==0)
            {

            }
        }
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    Prime_Factors(iValue);

    return 0;
}