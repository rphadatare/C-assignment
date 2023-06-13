// Write a program to allocate memory dynamically of the size in bytes entered by the
// user. Also handle the case when memory allocation is failed.


#include<stdio.h>
#include<stdlib.h>


int main()
{
    int *ptr;
    int n = 0;
   

    ptr = (int*)malloc( n * sizeof(int));

    if(ptr == NULL)
    {
        printf("Memory Allocation Failed\n");
        return -1;
    }
    return 0;
}