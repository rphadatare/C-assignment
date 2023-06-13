/*
Write a program to print all Prime numbers under 100
*/

#include<stdio.h>

int main()
{
    int iNo = 0;
    int i = 0, j = 0 , Count = 0;

    printf("Enter number\n");
    scanf("%d",&iNo);

    for(i=1;i<=iNo;i++)
    {
        Count = 0;

        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                Count++;
                break;
            }
        }
        
        if(Count==0 && i!=1)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}