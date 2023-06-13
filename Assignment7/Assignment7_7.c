/*
Write a program to print all Prime numbers between two given numbers
*/

#include<stdio.h>

int main()
{
    int iNo1 = 0,iNo2 = 0,
    i = 0, j  = 0, Count = 0;

    printf("Enter two numbers\n");
    scanf("%d %d",&iNo1,&iNo2);

    while(iNo1 < iNo2)
    {
        Count = 0;

        if (iNo1 <= 1) 
        {
            iNo1++;
            continue;
        }

        for (i = 2; i <= iNo1 / 2; i++) 
        {
            if (iNo1 % i == 0) 
            {
                Count = 1;
                break;
            }
        }

        if (Count == 0)
        {
            printf("%d ",iNo1);
        }

        iNo1++;
    }
    return 0;
}