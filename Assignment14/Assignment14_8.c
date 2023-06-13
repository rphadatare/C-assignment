// Write a program to find the second smallest number in an array.Take array values
// from the user.

#include<stdio.h>

int main()
{
    int Arr[10];
    int i = 0,j = 0,Temp = 0,n = 0;

    printf("Enter values in array\n");
    for(i = 0; i < 10; i++)
    {
        scanf("%d",&Arr[i]);
    }
    printf("\n");

    for(i = 0; i < 10; i++)
    {
        for(j = i+1 ; j < 10 ;j++)
        {
            if(Arr[i] < Arr[j])
            {
                Temp = Arr[i];
                Arr[i] = Arr[j];
                Arr[j] = Temp;
            }
        }
    }

    for(i = 0 ; i<10 ; i++)
    {
        printf("%d\t",Arr[i]);
    }
    printf("\nEnter smallest number want to print \n");
    scanf("%d",&n);
    printf("\n");
    printf("%d smallest number\n",n);
    printf("%d",Arr[10-n]);
    

    return 0;
}
