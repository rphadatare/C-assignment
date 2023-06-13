// Find out the maximum and minimum from an array using dynamic memory allocation in C.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int *ptr;
    int size, i = 0;
    int Max = 0;
    int Min = ptr[0];

    printf("Enter size of text\n");
    scanf("%d",&size);

    ptr = (int*) calloc (size,sizeof(int));

    printf("Enter value in array\n");
    for(i = 0 ; i < size ; i++)
    {
        scanf("%d",&ptr[i]);
    }

   
    for(i = 0 ; i < size ; i++)
    {
        if(ptr[i] > Max)
        {
            Max = ptr[i];
        }
        else if(ptr[i] < Min)
        {
            Min = ptr[i];
        }
    }
    printf("Maximum number in array\n");
    printf("%d",Max);
    printf("\nMinimum number in array\n");
    printf("%d",Min);
    
    free(ptr);
    
    return 0;
}