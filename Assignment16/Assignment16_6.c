// Write a program in C to find the sum of rows and columns of a Matrix.

#include<stdio.h>

int main()
{
    int Arr[100][100];
    int i = 0, j = 0;
    int Csum = 0 , Rsum = 0;
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

    printf("Sum of Rows in array\n");
    for(i = 0 ; i < R ; i++)
    {
        Rsum = 0;

        for(j = 0 ; j < C ; j++)
        {
            Rsum = Rsum + Arr[i][j];
        }
        printf("%d\n",Rsum);
    }

    printf("Sum of Columns in array\n");
    for(j = 0 ; j < R ; j++)
    {
        Csum = 0;

        for(i = 0 ; i < C ; i++)
        {
            Csum = Csum + Arr[i][j];
        }
        printf("%d\n",Csum);
    }
    return 0;
}