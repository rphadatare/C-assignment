// Write a program to compute the sum of all elements in an array using pointers.

#include<stdio.h>

void Sum(int *ptr,int Size)
{
    int i = 0, Sum = 0;

    for(i = 0; i < Size ;i++)
    {
        Sum = Sum + ptr[i];
    }

    printf("Sum of values in array = %d\n",Sum);
}

int main()
{
    int Arr[10];
    int size = 10;

    printf("Enter values in array\n");
    for(int i = 0; i <  size ; i++)
    {
        scanf("%d",&Arr[i]);
    }
    
    Sum(Arr,size);

    return 0;
}