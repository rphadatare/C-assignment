// Write a program to find the greatest number stored in an array of size 10. Take array
// values from the user.

#include<stdio.h>

int main()
{
    int Arr[9];
    int iCnt = 0,Max  = 0;

    printf("Enter values in array\n");
    for(iCnt = 0; iCnt <= 9; iCnt++)
    {
        scanf("%d\n",&Arr[iCnt]);
    }
    printf("\n");

    for(iCnt = 0; iCnt <=9 ; iCnt++)
    {
        if(Arr[iCnt] > Max)
        {
            Max = Arr[iCnt];
        }
    }
    printf("Greatest number in array  = %d",Max);
   
    return 0;
}