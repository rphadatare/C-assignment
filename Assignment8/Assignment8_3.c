#include<stdio.h>

int main()
{
    int iNo = 0;
    int i = 0,j = 0;

    printf("Enter number\n");
    scanf("%d",&iNo);

    for(i = 0; i<= iNo; i++)
    {
        for(j = 0; j < iNo-i; j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
    return 0;
}
