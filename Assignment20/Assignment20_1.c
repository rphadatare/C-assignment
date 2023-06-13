// Write a function to swap values of two in variables of calling function.

#include<stdio.h>

void Swap(int *ptr1, int *ptr2)
{
    int temp;

    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter two values\n");
    scanf("%d %d",&iValue1,&iValue2);

    Swap(&iValue1,&iValue2);
    printf("After swapping number\n");
    
    printf("iValue1 = %d, iValue2 = %d",iValue1,iValue2);
}