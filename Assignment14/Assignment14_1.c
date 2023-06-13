// Write a program to calculate the sum of numbers stored in an array of size 10. Take
// array values from the user.

#include<stdio.h>

void Sum_Array(int *Brr)
{
    int iCnt = 0,iSum = 0;

    printf("Enter values in array\n");
    for(iCnt = 0; iCnt < 10; iCnt++)
    {
        scanf("%d\n",&Brr[iCnt]);
    }
    printf("\n");
    printf("Sum of values in array\n");
    for(iCnt = 0; iCnt < 10; iCnt++)
    {
        iSum = iSum + Brr[iCnt];
    }
    printf("Sum = %d",iSum);
}
int main()
{
    int Arr[10];
    Sum_Array(Arr);
    return 0;
}