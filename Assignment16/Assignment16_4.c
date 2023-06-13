//Write a program in C to find the sum of right diagonals of a matrix.

#include<stdio.h>

int main()
{
    int Arr[100][100];
    int i = 0, j = 0;
    int R = 0,C = 0;
    int Sum = 0;

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
    
    for(i = 0 ; i < R ; i++)
    {
        for(j = 0 ; j < C ; j++)
        {
            if(i==j)
            {
                Sum = Sum + Arr[i][j];
            }
        }
    }

    printf("Right diagonals of matrics\n");
    printf("%d",Sum);

    return 0;
}