#include<stdio.h>

int main()
{
    int i = 0,j = 0;

    for(i = 0; i< 5; i++)
    {
        for(j = 0 ;j<= 10; j++)
        {
            if((4-i<=j)&&(j<=4+i))
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
