/*Write a function to print first N natural numbers (TSRN)*/

#include<stdio.h>

void Print_Natural_No(int iValue)
{
    int i = 1;
    if(iValue<1)
    {
        printf("Invalid Input\n");
    }
    else
    {
        for(i = 1; i <= iValue ; i++)
        {
            printf("%d\n",i);
        }
    }
}
int main()
{
    int iNo = 0;

    printf("Enter number\n");
    scanf("%d",&iNo);

    Print_Natural_No(iNo);

    return 0;
}