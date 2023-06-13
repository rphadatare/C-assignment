// Write a program to demonstrate memory leak in C.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr = (int*)malloc(4 * sizeof(int)); // memory leak

    //free(ptr);

    ptr = (int*)malloc(8 * sizeof(int));
    
    free(ptr);

    return 0;
}