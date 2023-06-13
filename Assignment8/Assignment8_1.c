/*

*
* *
* * *
* * * *
* * * * *

*/
 
#include<stdio.h>

int main()
{
    int iNo = 0;
    int i = 1,j = 1;

    printf("Enter number\n");
    scanf("%d",&iNo);

    for(i = 1; i <= iNo; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
    return 0;
}
