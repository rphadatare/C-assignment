#include<stdio.h>

int main()
{
    int i = 0,j = 0;

    for(i = 1; i<= 5; i++)
    {
        for(j = 1 ;j<= 10; j++)
        {
            if((j<=6-i)||(j>=4+i))
            {
                printf("*\t",j);
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
