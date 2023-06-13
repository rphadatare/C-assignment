#include<stdio.h>

int main()
{
    int i = 0,j = 0,k = 1,n = 5,m = 0;

    for(i = 1; i<= 9; i++)
    {
        i<=n ? m++ : m--;
        for(j = 1 ;j<= 9; j++)
        {
            if((j>=n+1-m)&&(j<=n-1+m))
            {
                printf("*");
            }
            else 
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
