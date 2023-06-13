//Write a function to sort an array of any size. (TSRN) 

#include<stdio.h>
#include<stdlib.h>

int i = 0,j = 0;
int Size = 0;

void Sort(int Arr[],int Size)
{
    int Temp = 0;

    for(i = 0; i < Size; i++)
    {
        for(j = (i+1); j < Size ; j++)
        {
            if(Arr[i] > Arr[j])
            {
                Temp = Arr[i];
                Arr[i] = Arr[j];
                Arr[j] = Temp;
            }
        }
    }

    printf("\nSorting array\n");
    for(i = 0; i < Size ; i++)
    {
        printf("%d\t",Arr[i]);
    }
}
int main()
{
    int *ptr = NULL;
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

    Sort(ptr,Size);

    return 0;
}