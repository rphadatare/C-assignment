//Write a program to find second largest in an array.Take array values from the user.

#include<stdio.h>

int main()
{
    int Arr[5];
    int i = 0,Max1 = -1, Max2 = -2;

    printf("Enter values in array\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d",&Arr[i]);
    }
    printf("\n");

    for(i = 0 ; i < 5 ; i++)
    {
        if(Arr[i] > Max1)
        {
            Max2 = Max1;
            Max1 = Arr[i];
            printf("In If Max1 = %d\t Max2 = %d\n",Max1,Max2);
        }
        else if(Arr[i] > Max2)
        {
            Max2 = Arr[i];
            printf("In If else Max1 = %d \tMax2 = %d\n",Max1,Max2);
        }
    }
    printf("First Lagest Number = %d",Max1);
    printf("Second Lagest Number = %d",Max2);
    
    return 0;
}