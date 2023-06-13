#include<stdio.h>

int main()
{
    int i = 0,j = 0, k = 0;
    char ch = 'A';

    for(i = 1; i<= 4; i++)
    {
        ch = 'A';
        for(j = 1 ;j<= 7; j++)
        {
            if((j>=i)&&(j<=8-i))
            {
                printf("%c\t",ch);
                j<4? ch++:ch--;
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
