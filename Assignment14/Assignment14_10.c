// Write a program in C to copy the elements of one array into another array.Take array
// values from the user.

#include<stdio.h>

int main()
{
    int Arr[10],Brr[10];
    int i = 0,j = 0,Temp = 0,n = 0;

    printf("Enter values in array\n");
    for(i = 0; i < 10; i++)
    {
        scanf("%d",&Arr[i]);
    }
    printf("\n");

    for(i = 0; i < 10; i++)
    {
        Brr[i] = Arr[i];
    }

    printf("Copy number in Arr\n");
    for(i = 0; i < 10; i++)
    {
        printf("%d\t",Arr[i]);
    }

    printf("\nCopy number in Brr\n");
    for(i = 0; i < 10; i++)
    {
        printf("%d\t",Brr[i]);
    }
    
    return 0;
}