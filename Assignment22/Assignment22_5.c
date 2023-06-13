// Write a program to read a one dimensional array, print sum of all elements along with
// inputted array elements using dynamic memory allocation.


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int *ptr;
    int size, i = 0;
    int Sum = 0;

    printf("Enter size of text\n");
    scanf("%d",&size);

    ptr = (int*) malloc (size * sizeof(int));

    printf("Enter value in array\n");
    for(i = 0 ; i < size ; i++)
    {
        scanf("%d",&ptr[i]);
    }

    printf("Sum of Values in array\n");
    for(i = 0 ; i < size ; i++)
    {
        Sum = Sum + ptr[i];
    }
    printf("%d",Sum);
    
    free(ptr);
    
    return 0;

    
}