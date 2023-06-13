// Write a program to sort elements of an array of size 10. Take array values from the
// user.

#include<stdio.h>

int main()
{
    int Arr[10];
    int i = 0,j = 0,Temp = 0;

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
            if(Arr[i] > Arr[j])
            {
                Temp = Arr[i];
                Arr[i] = Arr[j];
                Arr[j] = Temp;
            }
        }
    }

    printf("After Swaping values in array\n");
    for(i = 0; i < 10; i++)
    {
        printf("%d\t",Arr[i]);
    }
    printf("\n");

   
    return 0;
}