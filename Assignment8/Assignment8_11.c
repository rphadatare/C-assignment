#include<stdio.h>

int main()
{
    int i = 0,j = 0, k = 0;
    char ch = 'A';

    for(i = 1; i<= 5; i++)
    {
        ch = 'A';
        for(j = 1 ;j<= 9; j++)
        {
            if((j>=6-i)&&(j<=4+i))
            {
                printf("%c\t",ch);
                j<5? ch++:ch--;
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
