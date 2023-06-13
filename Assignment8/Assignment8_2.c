#include<stdio.h>

int main()
{
    int iNo = 0;
    int i = 0,j = 0;

    printf("Enter number\n");
    scanf("%d",&iNo);

    for(i = 1; i<= iNo; i++)
    {
        for(j = 1; j <= iNo; j++)
        {
            if(j>iNo-i)
            {
                printf("*\t");
            }
            else
            {
                printf(" \t");
            }
        }
        printf("\n");
    }
    return 0;
}
