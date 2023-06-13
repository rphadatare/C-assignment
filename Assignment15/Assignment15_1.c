//Write a function to find the greatest number from the given array of any size. (TSRS)

#include<stdio.h>
#include<stdlib.h>

int i = 0;
int Max = 0;
int Size = 0;

int Greatest_Number(int Arr[],int Size)
{
    
    for(i = 0; i<Size ; i++)
    {
        if(Arr[i]>Max)
        {
            Max = Arr[i];
        }
    }

    return Max;
}

int main()
{
    int *ptr = NULL;
    int Size = 0;
    
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

    Max = Greatest_Number(ptr,Size);
    printf("\nGreatest number in array is\n");
    printf("%d",Max);

    return 0;
}