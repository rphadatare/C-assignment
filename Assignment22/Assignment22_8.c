// Write a program to demonstrate dangling pointers in C.

#include<stdio.h>
#include<stdlib.h>


int Fun()
{
    int x = 4;

    return &x;
}
int main()
{
    int *ptr = Fun();

    return 0;
}