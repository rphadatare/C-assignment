// Write a program in C to read n number of values in an array and display it in reverse
// order. Take array values from the user.

#include<stdio.h>

int main()
{
    int Arr[10];
    int i = 0;

    printf("Enter values in array\n");
    for(i = 0; i < 10; i++)
    {
        scanf("%d",&Arr[i]);
    }
    printf("\n");

    printf("Number in reverse order\n");
    for(i = (10-1); i >= 0; i--)
    {
        printf("%d\t",Arr[i]);
    }
    
    return 0;
}