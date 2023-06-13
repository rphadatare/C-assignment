// Write a program to find the smallest number stored in an array of size 10. Take array
// values from the user.

#include<stdio.h>

int main()
{
    int Arr[10];
    int iCnt = 0,Min  = Arr[0];

    printf("Enter values in array\n");
    for(iCnt = 0; iCnt < 10; iCnt++)
    {
        scanf("%d\n",&Arr[iCnt]);
    }
    printf("\n");

    for(iCnt = 0; iCnt < 10 ; iCnt++)
    {
        if(Arr[iCnt] < Min)
        {
            Min = Arr[iCnt];
        }
    }
    printf("Smallest number in array  = %d",Min);
   
    return 0;
}