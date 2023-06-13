/*Write a function to print first N odd natural numbers. (TSRN)*/

#include<stdio.h>

void Print_Odd_Natural_No(int iValue)
{
    int i = 1;
    if(iValue<1)
    {
        printf("Invalid Input\n");
    }
    else
    {
        for(i = 0; i < iValue ; i++)
        {
            printf("%d\n",((2*i)+1));
        }
    }
}
int main()
{
    int iNo = 0;

    printf("Enter number\n");
    scanf("%d",&iNo);

    Print_Odd_Natural_No(iNo);

    return 0;
}