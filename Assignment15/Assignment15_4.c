// Write a function to rotate an array by n position in d direction. The d is an indicative
// value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and
// d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )

#include<stdio.h>

int main()
{
    int Arr[10];
    int d;
    int i ,j,k;

    printf("Enter values in array\n");
    for(i=0; i<10 ; i++)
    {
        scanf("%d",&Arr[i]);
    }

    printf("Enter rotation value\n");
    scanf("%d",&d);
        
    for(i = 1; i <= d ; i++)
    {
        k = Arr[10-1];
        
        for(j = 10-1; j > 0; j--)
        {
            Arr[j] = Arr[j-1];   
        }
        Arr[0] = k;
    }

    for(i=0; i<10 ; i++)
    {
        printf("%d\t",Arr[i]);
    }

    return 0;
}