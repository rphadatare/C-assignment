#include<stdio.h>

int main()
{
    int i = 0,j = 0;

    for(i = 5; i> 0; i--)
    {
        for(j = 0 ;j< 4+i; j++)
        {
            if(4-i<j)
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
