// Write a function in C to read n number of values in an array and display it in reverse
// order.

#include<stdio.h>

int Reverse(int Brr[],int size)
{
    int i = 0, j = 0;

    printf("\nReverse array\n");
    for(i = (size-1) ; i >= 0 ; i--)
    {
        printf("%d\t",Brr[i]);
    }
}

int main()
{
    int Arr[100];
    int Size = 0,iValue = 0, Ret = 0;
    int i = 0;

    printf("Enter size of array\n");
    scanf("%d",&Size);

    printf("Enter values in array\n");
    for(i = 0 ; i<Size ; i++)
    {
        scanf("%d",&Arr[i]);
    }

    Reverse(Arr,Size);
    
    return 0;
}

