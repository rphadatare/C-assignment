/*Write a function to print PASCAL Triangle. (TSRN)*/

#include<stdio.h>

void Pascal_Triangle(int row)
{
    int c=1,k,i,j;

    for(i=0;i<row;i++)
    {
        for(k=1;k<=row-i;k++)
        printf("  ");
        for(j=0;j<=i;j++)
        {
            if (j==0||i==0)
            {
                c=1;
            }
            else
            {
               c=c*(i-j+1)/j;
            }
            printf("% 4d",c);
        }
        printf("\n");
    }
}

int main()
{
    int Row = 0;

    printf("Enter number of rows\n");
    scanf("%d",&Row);

    Pascal_Triangle(Row);

    return 0;
}