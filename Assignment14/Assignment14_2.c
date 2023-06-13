// Write a program to calculate the average of numbers stored in an array of size 10.
// Take array values from the user.

#include<stdio.h>

int main()
{
    int Arr[10] = {0};
     int iCnt = 0,iSum = 0,Avg = 0;

     printf("Enter values in array\n");
    for(iCnt = 0; iCnt < 10; iCnt++)
    {
        scanf("%d\n",&Arr[iCnt]);
    }
    
    printf("\n");
    printf("Avarage of values in array\n");
    for(iCnt = 0; iCnt < 10; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }

    Avg = iSum / 10;

    printf("Avarage = %d",Avg);
    return 0;
}