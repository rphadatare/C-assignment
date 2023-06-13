// Write a program in C to find the largest element using Dynamic Memory Allocation.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int *ptr;
    int size, i = 0;
    int Max = 0;

    printf("Enter size of text\n");
    scanf("%d",&size);

    ptr = (int*) calloc (size,sizeof(int));

    printf("Enter value in array\n");
    for(i = 0 ; i < size ; i++)
    {
        scanf("%d",&ptr[i]);
    }

    printf("Maximum number in array\n");
    for(i = 0 ; i < size ; i++)
    {
        if(ptr[i] > Max)
        {
            Max = ptr[i];
        }
    }
    printf("%d",Max);
    
    free(ptr);
    
    return 0;
}