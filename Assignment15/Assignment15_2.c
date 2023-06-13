//Write a function to find the smallest number from the given array of any size. (TSRS)

#include<stdio.h>
#include<stdlib.h>

int i = 0;
int Size = 0;

int Smallest_Number(const int Arr[],int Size)
{
    int Min = Arr[0];
    
    for(i = 0; i<Size ; i++)
    {
        if(Arr[i] < Min)
        {
            Min = Arr[i];
        }
    }

    return Min;
}

int main()
{
    const int *ptr = NULL;
    int Size = 0;
    int min;
    printf("Enter size of array\n");
    scanf("%d",&Size);

    ptr = (int*)malloc(Size * sizeof(int));

    printf("Enter element in array\n");
    for(i = 0; i<Size ; i++)
    {
        scanf("%d",&ptr[i]);
    }

    printf("Elements in array\n");
    for(i = 0; i<Size ; i++)
    {
        printf("%d\t",ptr[i]);
    }

    
    min = Smallest_Number(ptr,Size);
    printf("\nSmallest number in array is\n");
    printf("%d",min);

    return 0;
}