// Write a program to calculate the product of two matrices each of order 3x3.

#include<stdio.h>

int main()
{
    int Arr[100][100],Brr[100][100],Sum[100][100];
    int i = 0, j = 0;
    int R = 0,C = 0;

    printf("Enter row and column\n");
    scanf("%d %d",&R,&C);

    printf("Enter values in first array\n");
    for(i = 0 ; i < R ; i++)
    {
        for(j = 0 ; j < C ; j++)
        {
            scanf("%d",&Arr[i][j]);
        }
    }

    printf("Enter values in second array\n");
    for(i = 0 ; i < R ; i++)
    {
        for(j = 0 ; j < C ; j++)
        {
            scanf("%d",&Brr[i][j]);
        }
    }

    
    for(i = 0 ; i < R ; i++)
    {
        for(j = 0 ; j < C ; j++)
        {
            Sum[i][j] = Arr[i][j] * Brr[i][j];
        }
    }

    printf("Product of two matrics\n");
    for(i = 0 ; i < R ; i++)
    {
        for(j = 0 ; j < C ; j++)
        {
            printf("%d\t",Sum[i][j]);
        }
        printf("\n");
    }


    return 0;
}