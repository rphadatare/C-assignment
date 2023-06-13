// Write a program to calculate the sum of all even numbers and sum of all odd
// numbers, which are stored in an array of size 10. Take array values from the user.

#include<stdio.h>

int main()
{
    int Arr[10];
    int iCnt = 0,Odd = 0,Even = 0;

    printf("Enter values in array\n");
    for(iCnt = 0; iCnt <= 9; iCnt++)
    {
        scanf("%d\n",&Arr[iCnt]);
    }
    printf("\n");

    for(iCnt = 0; iCnt <=9 ; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            Even = Even + Arr[iCnt];
        }
        else
        {
            Odd = Odd + Arr[iCnt];
        }
    }
    printf("Sum of Even = %d\n",Even);
    printf("Sum of Odd  = %d",Odd);
    return 0;
}