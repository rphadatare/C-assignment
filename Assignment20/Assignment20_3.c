//  Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]

#include<stdio.h>

void Sort(int *ptr,int size)
{
    int i = 0, j = 0;
    int temp = 0;

    for(i = 0; i < size-1 ; i++)
    {
        for(j = i+1; j < size ; j++)
        {
            if(ptr[i] > ptr[j])
            {
                temp = ptr[i];
                ptr[i] = ptr[j];
                ptr[j] = temp;
            }
        }
    }

    for(i = 0; i < 5; i++)
    {
        printf("%d\t",ptr[i]);
    }
}
int main()
{
    int Arr[20];
    int size = 5, i = 0;

    printf("Enter number in array\n");
    for(i = 0; i < size ; i++)
    {
        scanf("%d",&Arr[i]);
    }
   
    Sort(Arr,size);
    
    return 0;
}