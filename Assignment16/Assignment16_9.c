// Write a program in C to accept a matrix and determine whether it is a sparse matrix.

#include<stdio.h>

int main()
{
    int Arr[100][100];
    int i = 0, j = 0;
    int R = 0 , C = 0, Count = 0;

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

    printf("Elements in array\n");
    for(i = 0 ; i < R ; i++)
    {
        for(j = 0 ; j < C ; j++)
        {
            printf("%d\t",Arr[i][j]);
        }
        printf("\n");
    }

    for(i = 0 ; i < R ; i++)
    {
        for(j = 0 ; j < C ; j++)
        {
            if(Arr[i][j] == 0)
            {
               Count++;
            }
        }
        printf("\n");
    }

    if(Count >= ((R * C) / 2))
    {
        printf("Given matrix is sparse matrix\n");
    }
    else
    {
        printf("Given matrix is not sparse matrix\n");
    }
    
    return 0;
}