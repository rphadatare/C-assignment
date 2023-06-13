// Write a program in C to demonstrate how to handle the pointers in the program.

#include<stdio.h>


int main()
{
    int a = 5;
    int *ptr;

    ptr = &a;

    printf("a = %d\n",a);
    printf("address of a          = %d\n",&a);
    printf("address of a in ptr   = %d\n",ptr);
    printf("address of ptr        = %d\n",&ptr);

    *ptr = 3;
    printf("a = %d\n",a);
    printf("address of a          = %d\n",&a);
    printf("address of ptr        = %d\n",&ptr);


   

}