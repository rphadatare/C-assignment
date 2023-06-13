// Write a function in C to merge two arrays of the same size sorted in descending
// order.

#include <stdio.h>

int main() 
{
    int a[5], b[5],c[10];
    int i = 0 , Size = 5,j = 0 , k = 0;

    printf("Enter number in 1st array\n");
    for(i = 0; i < 5 ; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter number in 2nd array\n");
    for(j = 0; j < 5 ; j++)
    {
        scanf("%d",&b[j]);
    }

    for(i = 0,j = 0 ; i < 5 && j < 5 ; k++)
    {
        if(a[i]<b[j])
        {
            c[k] = a[i];
        }
        else
        {
            c[k] = b[j];
        }
    }


    printf("Sorted merge array\n");
    for(i = 0 ; i < 10 ; i++)
    {
        printf("%d\t",c[i]);
    }


    return 0;
}