#include<stdio.h>

int main()
{
    int i = 0,j = 0, k = 0;

    for(i = 1; i<= 4; i++)
    {
        k = 1;
        for(j = 1 ;j<= 7; j++)
        {
            if((j>=i)&&(j<=8-i))
            {
                printf("%d\t",k);
                j<4 ? k++:k--;
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
