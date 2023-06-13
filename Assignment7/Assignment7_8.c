/*
Write a program to find next Prime number of a given number
*/

#include<stdio.h>

int main()
{
    int iNo = 0;
    int i = 0,Count = 0;

    printf("Enter Number\n");
    scanf("%d",&iNo);

    
    for(i = 2; i <= iNo ; i++)
    {
        Count = 0;
        if(iNo%i == 0)
        {
            Count++;
            break;
        }
        if (Count == 1)
        {
            printf("%d ",iNo);
            break;
        }
        iNo++;
    }
        
    return 0;
}