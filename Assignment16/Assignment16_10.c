// Write a program in C to find the row with maximum number of 1s

#include<stdio.h>

int main()
{
    int Arr[100][100];
    int i = 0, j = 0;
    int R = 0 , C = 0, Count = 0, Max = 0, Row = 0;
    int Hash[100] = {0};

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
    printf("\n");

    for(i = 0 ; i < R ; i++)
    {
        Count = 0;

        for(j = 0 ; j < C ; j++)
        {
            if(Arr[i][j] == 1)
            {
               Count++;
            }
        }
        Hash[i] = Count;
        printf("Row %d ==> %d\n",i,Hash[i]);
    }

    for(i = 0 ; i < R ; i++)
    {
        if(Hash[i] > Max)
        {
            Max = Hash[i];
            Row = i;
        }
    }

    printf("\nRow with maximum number of 1 = %d",Row);

    
    
    return 0;
}