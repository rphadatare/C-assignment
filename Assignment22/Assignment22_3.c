// Write a program to calculate the sum of n numbers entered by the user using malloc and free.

#include<stdio.h>
#include<stdlib.h>


int main()
{
    int i = 0, size = 0;
    int Sum = 0;
    int *ptr  = NULL;


    printf("Enter size of array\n");
    scanf("%d",&size);

    ptr = (int*) malloc (size * sizeof(int));

    printf("Enter values in array\n");
    for(i = 0 ; i < size ; i++)
    {
        scanf("%d",&ptr[i]);
    }

    
    printf("Sum of values in array\n");
    for(i = 0 ; i < size ; i++)
    {
        Sum = Sum + ptr[i];
    }
    printf("%d",Sum);

    free(ptr);

    return 0;
}