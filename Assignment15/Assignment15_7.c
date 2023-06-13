// Write a function in C to count a total number of duplicate elements in an array.(Means
// elements that occurs 2 times in an array)


#include<stdio.h>

int Print_Duplicate(int Brr[],int size)
{
    int i = 0, j = 0,Hash[100] = {0};

    for(i = 0; i < size ; i++)
    {
       Hash[Brr[i]]++;
    }

    printf("Duplicate number in array\n");
    for(i = 0; i < 100 ; i++)
    {
       if(Hash[i]==2)
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

    Print_Duplicate(Arr,Size);
    
    return 0;
}

