// Write a program in C to print or display an upper triangular matrix.

#include<stdio.h>

int main()
{
    int Arr[100][100];
    int i = 0, j = 0;
    int R = 0 , C = 0;

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

    printf("Upper triangular matrix\n");
    for(i = 0 ; i < R ; i++)
    {
        for(j = 0 ; j < C ; j++)
        {
            if(i > j)
            {
                printf("0\t");
            }
            else
            {
                printf("%d\t",Arr[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}