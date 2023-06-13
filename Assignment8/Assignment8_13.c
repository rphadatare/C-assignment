#include<stdio.h>

int main()
{
    int i = 0,j = 0, k = 0;
    char ch = 'A';

    for(i = 1; i<= 7; i++)
    {
        ch = 'A';
        for(j = 1 ;j<= 13; j++)
        {
            if((j<=8-i)||(j>=7+i))
            {
                printf("%c\t",ch);
                j<7? ch++:ch--;
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
