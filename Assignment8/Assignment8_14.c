#include<stdio.h>

int main()
{
    int i = 0,j = 0, k = 0;

    for(i = 1; i<= 5; i++)
    {
        for(j = 1 ;j<= 5; j++)
        {
            if(((j==1)||(j==i))||(i==5))
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
