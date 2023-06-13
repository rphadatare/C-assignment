//Write a function in C to print all unique elements in an array.

#include<stdio.h>

int Unique_Number(int Brr[],int size)
{
    int i = 0,Hash[100] = {0};

    for(i = 0; i < size ; i++)
    {
        Hash[Brr[i]]++;
    }

    printf("Unique Number in array\n");
    for(i = 0; i < 100 ; i++)
    {
        if(Hash[i]==1)
        {
            printf("%d  ==>  %d\n",i,Hash[i]);
        }
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

    Unique_Number(Arr,Size);
    
    return 0;
}
