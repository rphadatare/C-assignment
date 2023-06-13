//Write a program in C to find the transpose of a given matrix.


#include<stdio.h>

int main()
{
    int Arr[100][100],Brr[100][100];
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
    
    for(i = 0 ; i < R ; i++)
    {
        for(j = 0 ; j < C ; j++)
        {
            Brr[i][j] = Arr[j][i];
        }
    }

    printf("Transpose of matrics\n");
    for(i = 0 ; i < R ; i++)
    {
        for(j = 0 ; j < C ; j++)
        {
            printf("%d\t",Brr[i][j]);
        }
        printf("\n");
    }


    return 0;
}